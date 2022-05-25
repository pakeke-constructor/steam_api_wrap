
import CppHeaderParser
import copy


header = CppHeaderParser.CppHeader("steam_api_flat.h")

HEADER_NAME = "steam_api_cwrap.h"
SOURCE_NAME = "steam_api_cwrap.cpp"


def is_evil_param(param):
    return "&" in param["type"]


def convert_evil_param(param):
    # replaces reference type param to pointer param
    param["type"] = param["type"].replace("&","*")
    param["evil"] = True



def get_new_params(func):
    new_params = copy.deepcopy(func.get("parameters"))
    for param in new_params:
        if is_evil_param(param):
            convert_evil_param(param)
    return new_params


def make_pass_params(new_params):
    buf = []
    for p in new_params:
        if "evil" in p:
            buf.append("*" + p["name"])
        else:
            buf.append(p["name"])
    return "( " + ", ".join(buf) +  " )"


def make_header_params(new_params):
    buf = []
    for p in new_params:
        buf.append(p["type"] + p["name"])
    return "( " + ", ".join(buf) +  " )"


def make_function_body(func):
    new_params = get_new_params(func)
    param_pass = make_pass_params(new_params)
    ret_val = "{ return " + func["name"] + param_pass + "; };"
    return ret_val



def make_function_header(func):
    new_params = get_new_params(func)
    return func["rtnType"] + " " + func["name"] + make_header_params(new_params)



def make_function(func):
    return make_function_header(func) + make_function_body(func)


num_conversions = 0


new_header = '''// THIS FILE IS AUTO GENERATED. DO NOT EDIT

#ifndef STEAM_API_CWRAP
#define STEAM_API_CWRAP
#include "steam_api_flat.h"

'''
end_header = '''

#endif // STEAM_API_CWRAP

'''

new_source = '''// THIS FILE IS AUTO GENERATED. DO NOT EDIT

#include "steam_api_cwrap.h"

'''



for func in header.functions:
    for param in func.get("parameters"):
        if "&" in param.get("type"):
            num_conversions += 1
            new_header += ("\n" + make_function_header(func))
            new_source += ("\n" + make_function(func))

new_header += end_header





with open(HEADER_NAME, "w+") as hdr:
    hdr.write(new_header)

with open(SOURCE_NAME, "w+") as src:
    src.write(new_source)





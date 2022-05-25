
project(steam_api_cwrap)
cmake_minimum_required(VERSION 3.0)

include_directories(include)

# aux_source_directory(steam STEAM_HEADERS)


add_library(steam_api_cwrap SHARED
    #${STEAM_HEADERS}
    steam_api_cwrap.cpp
    steam_api_cwrap.h
)


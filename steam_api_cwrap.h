// THIS FILE IS AUTO GENERATED. DO NOT EDIT

#ifndef STEAM_API_CWRAP
#define STEAM_API_CWRAP
#include "steam_api_flat.h"


inline  void CSteamAPI_ISteamClient_SetLocalIPBinding( ISteamClient * self, const SteamIPAddress_t * unIP, unsigned short int usPort );
inline  void CSteamAPI_ISteamMatchmakingPingResponse_ServerResponded( ISteamMatchmakingPingResponse * self, gameserveritem_t * server );
inline  EResult CSteamAPI_ISteamNetworkingMessages_SendMessageToUser( ISteamNetworkingMessages * self, const SteamNetworkingIdentity * identityRemote, const void * pubData, unsigned int cubData, int nSendFlags, int nRemoteChannel );
inline  bool CSteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser( ISteamNetworkingMessages * self, const SteamNetworkingIdentity * identityRemote );
inline  bool CSteamAPI_ISteamNetworkingMessages_CloseSessionWithUser( ISteamNetworkingMessages * self, const SteamNetworkingIdentity * identityRemote );
inline  bool CSteamAPI_ISteamNetworkingMessages_CloseChannelWithUser( ISteamNetworkingMessages * self, const SteamNetworkingIdentity * identityRemote, int nLocalChannel );
inline  ESteamNetworkingConnectionState CSteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo( ISteamNetworkingMessages * self, const SteamNetworkingIdentity * identityRemote, SteamNetConnectionInfo_t * pConnectionInfo, SteamNetConnectionRealTimeStatus_t * pQuickStatus );
inline  HSteamListenSocket CSteamAPI_ISteamNetworkingSockets_CreateListenSocketIP( ISteamNetworkingSockets * self, const SteamNetworkingIPAddr * localAddress, int nOptions, const SteamNetworkingConfigValue_t * pOptions );
inline  HSteamNetConnection CSteamAPI_ISteamNetworkingSockets_ConnectByIPAddress( ISteamNetworkingSockets * self, const SteamNetworkingIPAddr * address, int nOptions, const SteamNetworkingConfigValue_t * pOptions );
inline  HSteamNetConnection CSteamAPI_ISteamNetworkingSockets_ConnectP2P( ISteamNetworkingSockets * self, const SteamNetworkingIdentity * identityRemote, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions );
inline  int CSteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer( ISteamNetworkingSockets * self, const SteamNetworkingIdentity * identityGameServer, int nRemoteVirtualPort, SteamDatagramRelayAuthTicket * pOutParsedTicket );
inline  HSteamNetConnection CSteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer( ISteamNetworkingSockets * self, const SteamNetworkingIdentity * identityTarget, int nRemoteVirtualPort, int nOptions, const SteamNetworkingConfigValue_t * pOptions );
inline  bool CSteamAPI_ISteamNetworkingSockets_GetCertificateRequest( ISteamNetworkingSockets * self, int * pcbBlob, void * pBlob, SteamNetworkingErrMsg * errMsg );
inline  bool CSteamAPI_ISteamNetworkingSockets_SetCertificate( ISteamNetworkingSockets * self, const void * pCertificate, int cbCertificate, SteamNetworkingErrMsg * errMsg );
inline  float CSteamAPI_ISteamNetworkingUtils_GetLocalPingLocation( ISteamNetworkingUtils * self, SteamNetworkPingLocation_t * result );
inline  int CSteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations( ISteamNetworkingUtils * self, const SteamNetworkPingLocation_t * location1, const SteamNetworkPingLocation_t * location2 );
inline  int CSteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost( ISteamNetworkingUtils * self, const SteamNetworkPingLocation_t * remoteLocation );
inline  void CSteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString( ISteamNetworkingUtils * self, const SteamNetworkPingLocation_t * location, char * pszBuf, int cchBufSize );
inline  bool CSteamAPI_ISteamNetworkingUtils_ParsePingLocationString( ISteamNetworkingUtils * self, const char * pszString, SteamNetworkPingLocation_t * result );
inline  EResult CSteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP( ISteamNetworkingUtils * self, const SteamNetworkingIPAddr * fakeIP, SteamNetworkingIdentity * pOutRealIdentity );
inline  bool CSteamAPI_ISteamNetworkingUtils_SetConfigValueStruct( ISteamNetworkingUtils * self, const SteamNetworkingConfigValue_t * opt, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj );
inline  void CSteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString( ISteamNetworkingUtils * self, const SteamNetworkingIPAddr * addr, char * buf, unsigned int cbBuf, bool bWithPort );
inline  ESteamNetworkingFakeIPType CSteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType( ISteamNetworkingUtils * self, const SteamNetworkingIPAddr * addr );
inline  void CSteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString( ISteamNetworkingUtils * self, const SteamNetworkingIdentity * identity, char * buf, unsigned int cbBuf );
inline  EResult CSteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP( ISteamNetworkingFakeUDPPort * self, const SteamNetworkingIPAddr * remoteAddress, const void * pData, unsigned int cbData, int nSendFlags );
inline  void CSteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup( ISteamNetworkingFakeUDPPort * self, const SteamNetworkingIPAddr * remoteAddress );
inline  bool CSteamAPI_servernetadr_t_IsLessThan( servernetadr_t * self, const servernetadr_t * netadr );
inline  void CSteamAPI_servernetadr_t_Assign( servernetadr_t * self, const servernetadr_t * that );
inline  bool CSteamAPI_SteamNetworkingIPAddr_IsEqualTo( SteamNetworkingIPAddr * self, const SteamNetworkingIPAddr * x );
inline  void CSteamAPI_SteamNetworkingIdentity_SetIPAddr( SteamNetworkingIdentity * self, const SteamNetworkingIPAddr * addr );
inline  const uint8 * CSteamAPI_SteamNetworkingIdentity_GetGenericBytes( SteamNetworkingIdentity * self, int * cbLen );
inline  bool CSteamAPI_SteamNetworkingIdentity_IsEqualTo( SteamNetworkingIdentity * self, const SteamNetworkingIdentity * x );

#endif // STEAM_API_CWRAP


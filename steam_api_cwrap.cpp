// THIS FILE IS AUTO GENERATED. DO NOT EDIT

#include "steam_api_cwrap.h"


S_API void SteamAPI_ISteamClient_SetLocalIPBinding( ISteamClient *self, const SteamIPAddress_t *unIP, unsigned short intusPort ){ return SteamAPI_ISteamClient_SetLocalIPBinding( self, *unIP, usPort ); };
S_API void SteamAPI_ISteamMatchmakingPingResponse_ServerResponded( ISteamMatchmakingPingResponse *self, gameserveritem_t *server ){ return SteamAPI_ISteamMatchmakingPingResponse_ServerResponded( self, *server ); };
S_API EResult SteamAPI_ISteamNetworkingMessages_SendMessageToUser( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote, const void *pubData, unsigned intcubData, intnSendFlags, intnRemoteChannel ){ return SteamAPI_ISteamNetworkingMessages_SendMessageToUser( self, *identityRemote, pubData, cubData, nSendFlags, nRemoteChannel ); };
S_API bool SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote ){ return SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser( self, *identityRemote ); };
S_API bool SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote ){ return SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser( self, *identityRemote ); };
S_API bool SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote, intnLocalChannel ){ return SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser( self, *identityRemote, nLocalChannel ); };
S_API ESteamNetworkingConnectionState SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote, SteamNetConnectionInfo_t *pConnectionInfo, SteamNetConnectionRealTimeStatus_t *pQuickStatus ){ return SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo( self, *identityRemote, pConnectionInfo, pQuickStatus ); };
S_API HSteamListenSocket SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP( ISteamNetworkingSockets *self, const SteamNetworkingIPAddr *localAddress, intnOptions, const SteamNetworkingConfigValue_t *pOptions ){ return SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP( self, *localAddress, nOptions, pOptions ); };
S_API HSteamNetConnection SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress( ISteamNetworkingSockets *self, const SteamNetworkingIPAddr *address, intnOptions, const SteamNetworkingConfigValue_t *pOptions ){ return SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress( self, *address, nOptions, pOptions ); };
S_API HSteamNetConnection SteamAPI_ISteamNetworkingSockets_ConnectP2P( ISteamNetworkingSockets *self, const SteamNetworkingIdentity *identityRemote, intnRemoteVirtualPort, intnOptions, const SteamNetworkingConfigValue_t *pOptions ){ return SteamAPI_ISteamNetworkingSockets_ConnectP2P( self, *identityRemote, nRemoteVirtualPort, nOptions, pOptions ); };
S_API int SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer( ISteamNetworkingSockets *self, const SteamNetworkingIdentity *identityGameServer, intnRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket ){ return SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer( self, *identityGameServer, nRemoteVirtualPort, pOutParsedTicket ); };
S_API HSteamNetConnection SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer( ISteamNetworkingSockets *self, const SteamNetworkingIdentity *identityTarget, intnRemoteVirtualPort, intnOptions, const SteamNetworkingConfigValue_t *pOptions ){ return SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer( self, *identityTarget, nRemoteVirtualPort, nOptions, pOptions ); };
S_API bool SteamAPI_ISteamNetworkingSockets_GetCertificateRequest( ISteamNetworkingSockets *self, int *pcbBlob, void *pBlob, SteamNetworkingErrMsg *errMsg ){ return SteamAPI_ISteamNetworkingSockets_GetCertificateRequest( self, pcbBlob, pBlob, *errMsg ); };
S_API bool SteamAPI_ISteamNetworkingSockets_SetCertificate( ISteamNetworkingSockets *self, const void *pCertificate, intcbCertificate, SteamNetworkingErrMsg *errMsg ){ return SteamAPI_ISteamNetworkingSockets_SetCertificate( self, pCertificate, cbCertificate, *errMsg ); };
S_API float SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation( ISteamNetworkingUtils *self, SteamNetworkPingLocation_t *result ){ return SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation( self, *result ); };
S_API int SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations( ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2 ){ return SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations( self, *location1, *location2 ); };
S_API int SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations( ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2 ){ return SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations( self, *location1, *location2 ); };
S_API int SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost( ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t *remoteLocation ){ return SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost( self, *remoteLocation ); };
S_API void SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString( ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t *location, char *pszBuf, intcchBufSize ){ return SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString( self, *location, pszBuf, cchBufSize ); };
S_API bool SteamAPI_ISteamNetworkingUtils_ParsePingLocationString( ISteamNetworkingUtils *self, const char *pszString, SteamNetworkPingLocation_t *result ){ return SteamAPI_ISteamNetworkingUtils_ParsePingLocationString( self, pszString, *result ); };
S_API EResult SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP( ISteamNetworkingUtils *self, const SteamNetworkingIPAddr *fakeIP, SteamNetworkingIdentity *pOutRealIdentity ){ return SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP( self, *fakeIP, pOutRealIdentity ); };
S_API bool SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct( ISteamNetworkingUtils *self, const SteamNetworkingConfigValue_t *opt, ESteamNetworkingConfigScopeeScopeType, intptr_tscopeObj ){ return SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct( self, *opt, eScopeType, scopeObj ); };
S_API void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString( ISteamNetworkingUtils *self, const SteamNetworkingIPAddr *addr, char *buf, unsigned intcbBuf, boolbWithPort ){ return SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString( self, *addr, buf, cbBuf, bWithPort ); };
S_API ESteamNetworkingFakeIPType SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType( ISteamNetworkingUtils *self, const SteamNetworkingIPAddr *addr ){ return SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType( self, *addr ); };
S_API void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString( ISteamNetworkingUtils *self, const SteamNetworkingIdentity *identity, char *buf, unsigned intcbBuf ){ return SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString( self, *identity, buf, cbBuf ); };
S_API EResult SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP( ISteamNetworkingFakeUDPPort *self, const SteamNetworkingIPAddr *remoteAddress, const void *pData, unsigned intcbData, intnSendFlags ){ return SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP( self, *remoteAddress, pData, cbData, nSendFlags ); };
S_API void SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup( ISteamNetworkingFakeUDPPort *self, const SteamNetworkingIPAddr *remoteAddress ){ return SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup( self, *remoteAddress ); };
S_API bool SteamAPI_servernetadr_t_IsLessThan( servernetadr_t *self, const servernetadr_t *netadr ){ return SteamAPI_servernetadr_t_IsLessThan( self, *netadr ); };
S_API void SteamAPI_servernetadr_t_Assign( servernetadr_t *self, const servernetadr_t *that ){ return SteamAPI_servernetadr_t_Assign( self, *that ); };
S_API bool SteamAPI_SteamNetworkingIPAddr_IsEqualTo( SteamNetworkingIPAddr *self, const SteamNetworkingIPAddr *x ){ return SteamAPI_SteamNetworkingIPAddr_IsEqualTo( self, *x ); };
S_API void SteamAPI_SteamNetworkingIdentity_SetIPAddr( SteamNetworkingIdentity *self, const SteamNetworkingIPAddr *addr ){ return SteamAPI_SteamNetworkingIdentity_SetIPAddr( self, *addr ); };
S_API const uint8 * SteamAPI_SteamNetworkingIdentity_GetGenericBytes( SteamNetworkingIdentity *self, int *cbLen ){ return SteamAPI_SteamNetworkingIdentity_GetGenericBytes( self, *cbLen ); };
S_API bool SteamAPI_SteamNetworkingIdentity_IsEqualTo( SteamNetworkingIdentity *self, const SteamNetworkingIdentity *x ){ return SteamAPI_SteamNetworkingIdentity_IsEqualTo( self, *x ); };

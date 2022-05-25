// THIS FILE IS AUTO GENERATED. DO NOT EDIT

#ifndef STEAM_API_CWRAP
#define STEAM_API_CWRAP
#include "steam_api_flat.h"


S_API void SteamAPI_ISteamClient_SetLocalIPBinding( ISteamClient *self, const SteamIPAddress_t *unIP, unsigned short intusPort )
S_API void SteamAPI_ISteamMatchmakingPingResponse_ServerResponded( ISteamMatchmakingPingResponse *self, gameserveritem_t *server )
S_API EResult SteamAPI_ISteamNetworkingMessages_SendMessageToUser( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote, const void *pubData, unsigned intcubData, intnSendFlags, intnRemoteChannel )
S_API bool SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote )
S_API bool SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote )
S_API bool SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote, intnLocalChannel )
S_API ESteamNetworkingConnectionState SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo( ISteamNetworkingMessages *self, const SteamNetworkingIdentity *identityRemote, SteamNetConnectionInfo_t *pConnectionInfo, SteamNetConnectionRealTimeStatus_t *pQuickStatus )
S_API HSteamListenSocket SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP( ISteamNetworkingSockets *self, const SteamNetworkingIPAddr *localAddress, intnOptions, const SteamNetworkingConfigValue_t *pOptions )
S_API HSteamNetConnection SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress( ISteamNetworkingSockets *self, const SteamNetworkingIPAddr *address, intnOptions, const SteamNetworkingConfigValue_t *pOptions )
S_API HSteamNetConnection SteamAPI_ISteamNetworkingSockets_ConnectP2P( ISteamNetworkingSockets *self, const SteamNetworkingIdentity *identityRemote, intnRemoteVirtualPort, intnOptions, const SteamNetworkingConfigValue_t *pOptions )
S_API int SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer( ISteamNetworkingSockets *self, const SteamNetworkingIdentity *identityGameServer, intnRemoteVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket )
S_API HSteamNetConnection SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer( ISteamNetworkingSockets *self, const SteamNetworkingIdentity *identityTarget, intnRemoteVirtualPort, intnOptions, const SteamNetworkingConfigValue_t *pOptions )
S_API bool SteamAPI_ISteamNetworkingSockets_GetCertificateRequest( ISteamNetworkingSockets *self, int *pcbBlob, void *pBlob, SteamNetworkingErrMsg *errMsg )
S_API bool SteamAPI_ISteamNetworkingSockets_SetCertificate( ISteamNetworkingSockets *self, const void *pCertificate, intcbCertificate, SteamNetworkingErrMsg *errMsg )
S_API float SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation( ISteamNetworkingUtils *self, SteamNetworkPingLocation_t *result )
S_API int SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations( ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2 )
S_API int SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations( ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2 )
S_API int SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost( ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t *remoteLocation )
S_API void SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString( ISteamNetworkingUtils *self, const SteamNetworkPingLocation_t *location, char *pszBuf, intcchBufSize )
S_API bool SteamAPI_ISteamNetworkingUtils_ParsePingLocationString( ISteamNetworkingUtils *self, const char *pszString, SteamNetworkPingLocation_t *result )
S_API EResult SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP( ISteamNetworkingUtils *self, const SteamNetworkingIPAddr *fakeIP, SteamNetworkingIdentity *pOutRealIdentity )
S_API bool SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct( ISteamNetworkingUtils *self, const SteamNetworkingConfigValue_t *opt, ESteamNetworkingConfigScopeeScopeType, intptr_tscopeObj )
S_API void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString( ISteamNetworkingUtils *self, const SteamNetworkingIPAddr *addr, char *buf, unsigned intcbBuf, boolbWithPort )
S_API ESteamNetworkingFakeIPType SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType( ISteamNetworkingUtils *self, const SteamNetworkingIPAddr *addr )
S_API void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString( ISteamNetworkingUtils *self, const SteamNetworkingIdentity *identity, char *buf, unsigned intcbBuf )
S_API EResult SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP( ISteamNetworkingFakeUDPPort *self, const SteamNetworkingIPAddr *remoteAddress, const void *pData, unsigned intcbData, intnSendFlags )
S_API void SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup( ISteamNetworkingFakeUDPPort *self, const SteamNetworkingIPAddr *remoteAddress )
S_API bool SteamAPI_servernetadr_t_IsLessThan( servernetadr_t *self, const servernetadr_t *netadr )
S_API void SteamAPI_servernetadr_t_Assign( servernetadr_t *self, const servernetadr_t *that )
S_API bool SteamAPI_SteamNetworkingIPAddr_IsEqualTo( SteamNetworkingIPAddr *self, const SteamNetworkingIPAddr *x )
S_API void SteamAPI_SteamNetworkingIdentity_SetIPAddr( SteamNetworkingIdentity *self, const SteamNetworkingIPAddr *addr )
S_API const uint8 * SteamAPI_SteamNetworkingIdentity_GetGenericBytes( SteamNetworkingIdentity *self, int *cbLen )
S_API bool SteamAPI_SteamNetworkingIdentity_IsEqualTo( SteamNetworkingIdentity *self, const SteamNetworkingIdentity *x )

#endif // STEAM_API_CWRAP


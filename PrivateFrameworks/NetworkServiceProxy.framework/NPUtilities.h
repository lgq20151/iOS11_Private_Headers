/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPUtilities : NSObject

+ (bool)compareAddressEndpoints:(id)arg1 endpoint2:(id)arg2 addressOnly:(bool)arg3;
+ (id)connectionInfoToDict:(id)arg1 dictionary:(id)arg2;
+ (id)copyCurrentNetworkCharacteristicsForPath:(id)arg1;
+ (id)copyDataFromKeychainWithIdentifier:(id)arg1 accountName:(id)arg2;
+ (id)copyItemIdentifiersFromKeychainWithAccountName:(id)arg1;
+ (id)endpointFromString:(id)arg1 defaultPortString:(id)arg2;
+ (void)fillOutConnectionInfo:(id)arg1 withPath:(id)arg2 interface:(id)arg3 remoteEndpoint:(id)arg4 parameters:(id)arg5 outputHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg6;
+ (id)getInterfaceTypeString:(int)arg1;
+ (bool)hasPacketDrop:(id)arg1;
+ (id)hexDumpBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (long long)interfaceTypeOfInterface:(id)arg1;
+ (id)parseXHost:(id)arg1;
+ (unsigned long long)parseXRTT:(id)arg1;
+ (void)parseXTimeout:(id)arg1 hardTTLInSeconds:(double*)arg2;
+ (bool)printDictionaryAsJson:(id)arg1 debugName:(id)arg2;
+ (long long)protocolTypeFromPath:(id)arg1 endpoint:(id)arg2;
+ (void)removeDataFromKeychainWithIdentifier:(id)arg1;
+ (bool)rollDiceWithSuccessRatio:(id)arg1;
+ (void)saveDataToKeychain:(id)arg1 withIdentifier:(id)arg2 accountName:(id)arg3;
+ (id)stripWhitespace:(id)arg1;
+ (id)timestampIdentifierToName:(unsigned long long)arg1;

@end
/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSDeviceConnectionDurationEvent : PBCodable <NSCopying> {
    unsigned long long  _clientInitToClientOpenSocketHandler;
    unsigned long long  _clientInitToDaemonOpenSocket;
    unsigned long long  _clientOpenSocketHandlerToIncomingFirstPacket;
    unsigned long long  _connectionInitToIncomingFirstPacket;
    unsigned long long  _daemonCompletionHandlerToClientOpenSocketCompletion;
    unsigned long long  _daemonCompletionHandlerToIncomingFirstPacket;
    unsigned long long  _daemonOpenSocketToDaemonCompletionHandler;
    struct { 
        unsigned int clientInitToClientOpenSocketHandler : 1; 
        unsigned int clientInitToDaemonOpenSocket : 1; 
        unsigned int clientOpenSocketHandlerToIncomingFirstPacket : 1; 
        unsigned int connectionInitToIncomingFirstPacket : 1; 
        unsigned int daemonCompletionHandlerToClientOpenSocketCompletion : 1; 
        unsigned int daemonCompletionHandlerToIncomingFirstPacket : 1; 
        unsigned int daemonOpenSocketToDaemonCompletionHandler : 1; 
        unsigned int timestamp : 1; 
        unsigned int success : 1; 
    }  _has;
    NSString * _serviceName;
    bool  _success;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long clientInitToClientOpenSocketHandler;
@property (nonatomic) unsigned long long clientInitToDaemonOpenSocket;
@property (nonatomic) unsigned long long clientOpenSocketHandlerToIncomingFirstPacket;
@property (nonatomic) unsigned long long connectionInitToIncomingFirstPacket;
@property (nonatomic) unsigned long long daemonCompletionHandlerToClientOpenSocketCompletion;
@property (nonatomic) unsigned long long daemonCompletionHandlerToIncomingFirstPacket;
@property (nonatomic) unsigned long long daemonOpenSocketToDaemonCompletionHandler;
@property (nonatomic) bool hasClientInitToClientOpenSocketHandler;
@property (nonatomic) bool hasClientInitToDaemonOpenSocket;
@property (nonatomic) bool hasClientOpenSocketHandlerToIncomingFirstPacket;
@property (nonatomic) bool hasConnectionInitToIncomingFirstPacket;
@property (nonatomic) bool hasDaemonCompletionHandlerToClientOpenSocketCompletion;
@property (nonatomic) bool hasDaemonCompletionHandlerToIncomingFirstPacket;
@property (nonatomic) bool hasDaemonOpenSocketToDaemonCompletionHandler;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic) bool success;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)clientInitToClientOpenSocketHandler;
- (unsigned long long)clientInitToDaemonOpenSocket;
- (unsigned long long)clientOpenSocketHandlerToIncomingFirstPacket;
- (unsigned long long)connectionInitToIncomingFirstPacket;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)daemonCompletionHandlerToClientOpenSocketCompletion;
- (unsigned long long)daemonCompletionHandlerToIncomingFirstPacket;
- (unsigned long long)daemonOpenSocketToDaemonCompletionHandler;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientInitToClientOpenSocketHandler;
- (bool)hasClientInitToDaemonOpenSocket;
- (bool)hasClientOpenSocketHandlerToIncomingFirstPacket;
- (bool)hasConnectionInitToIncomingFirstPacket;
- (bool)hasDaemonCompletionHandlerToClientOpenSocketCompletion;
- (bool)hasDaemonCompletionHandlerToIncomingFirstPacket;
- (bool)hasDaemonOpenSocketToDaemonCompletionHandler;
- (bool)hasServiceName;
- (bool)hasSuccess;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceName;
- (void)setClientInitToClientOpenSocketHandler:(unsigned long long)arg1;
- (void)setClientInitToDaemonOpenSocket:(unsigned long long)arg1;
- (void)setClientOpenSocketHandlerToIncomingFirstPacket:(unsigned long long)arg1;
- (void)setConnectionInitToIncomingFirstPacket:(unsigned long long)arg1;
- (void)setDaemonCompletionHandlerToClientOpenSocketCompletion:(unsigned long long)arg1;
- (void)setDaemonCompletionHandlerToIncomingFirstPacket:(unsigned long long)arg1;
- (void)setDaemonOpenSocketToDaemonCompletionHandler:(unsigned long long)arg1;
- (void)setHasClientInitToClientOpenSocketHandler:(bool)arg1;
- (void)setHasClientInitToDaemonOpenSocket:(bool)arg1;
- (void)setHasClientOpenSocketHandlerToIncomingFirstPacket:(bool)arg1;
- (void)setHasConnectionInitToIncomingFirstPacket:(bool)arg1;
- (void)setHasDaemonCompletionHandlerToClientOpenSocketCompletion:(bool)arg1;
- (void)setHasDaemonCompletionHandlerToIncomingFirstPacket:(bool)arg1;
- (void)setHasDaemonOpenSocketToDaemonCompletionHandler:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)success;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

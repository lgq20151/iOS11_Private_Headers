/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingAirDropPeerDiscoveredInfo : PBCodable <NSCopying> {
    unsigned int  _awdlVersion;
    unsigned int  _bluetoothDiscovery;
    unsigned int  _bonjourDiscovery;
    unsigned int  _bonjourResolveComplete;
    unsigned int  _bonjourTXTRecordDiscovery;
    NSString * _browserID;
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int awdlVersion : 1; 
        unsigned int bluetoothDiscovery : 1; 
        unsigned int bonjourDiscovery : 1; 
        unsigned int bonjourResolveComplete : 1; 
        unsigned int bonjourTXTRecordDiscovery : 1; 
        unsigned int errorCode : 1; 
        unsigned int identityQueryComplete : 1; 
        unsigned int platform : 1; 
        unsigned int rssi : 1; 
        unsigned int tcpConnectionComplete : 1; 
        unsigned int tlsHandshakeComplete : 1; 
        unsigned int totalDiscovery : 1; 
        unsigned int verifiableIdentity : 1; 
    }  _has;
    unsigned int  _identityQueryComplete;
    NSString * _modelCode;
    NSString * _modelName;
    unsigned int  _platform;
    int  _rssi;
    NSString * _sessionID;
    unsigned int  _tcpConnectionComplete;
    unsigned long long  _timestamp;
    unsigned int  _tlsHandshakeComplete;
    unsigned int  _totalDiscovery;
    bool  _verifiableIdentity;
}

@property (nonatomic) unsigned int awdlVersion;
@property (nonatomic) unsigned int bluetoothDiscovery;
@property (nonatomic) unsigned int bonjourDiscovery;
@property (nonatomic) unsigned int bonjourResolveComplete;
@property (nonatomic) unsigned int bonjourTXTRecordDiscovery;
@property (nonatomic, retain) NSString *browserID;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasAwdlVersion;
@property (nonatomic) bool hasBluetoothDiscovery;
@property (nonatomic) bool hasBonjourDiscovery;
@property (nonatomic) bool hasBonjourResolveComplete;
@property (nonatomic) bool hasBonjourTXTRecordDiscovery;
@property (nonatomic, readonly) bool hasBrowserID;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasIdentityQueryComplete;
@property (nonatomic, readonly) bool hasModelCode;
@property (nonatomic, readonly) bool hasModelName;
@property (nonatomic) bool hasPlatform;
@property (nonatomic) bool hasRssi;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasTcpConnectionComplete;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTlsHandshakeComplete;
@property (nonatomic) bool hasTotalDiscovery;
@property (nonatomic) bool hasVerifiableIdentity;
@property (nonatomic) unsigned int identityQueryComplete;
@property (nonatomic, retain) NSString *modelCode;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic) unsigned int platform;
@property (nonatomic) int rssi;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned int tcpConnectionComplete;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int tlsHandshakeComplete;
@property (nonatomic) unsigned int totalDiscovery;
@property (nonatomic) bool verifiableIdentity;

- (void).cxx_destruct;
- (unsigned int)awdlVersion;
- (unsigned int)bluetoothDiscovery;
- (unsigned int)bonjourDiscovery;
- (unsigned int)bonjourResolveComplete;
- (unsigned int)bonjourTXTRecordDiscovery;
- (id)browserID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasAwdlVersion;
- (bool)hasBluetoothDiscovery;
- (bool)hasBonjourDiscovery;
- (bool)hasBonjourResolveComplete;
- (bool)hasBonjourTXTRecordDiscovery;
- (bool)hasBrowserID;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasIdentityQueryComplete;
- (bool)hasModelCode;
- (bool)hasModelName;
- (bool)hasPlatform;
- (bool)hasRssi;
- (bool)hasSessionID;
- (bool)hasTcpConnectionComplete;
- (bool)hasTimestamp;
- (bool)hasTlsHandshakeComplete;
- (bool)hasTotalDiscovery;
- (bool)hasVerifiableIdentity;
- (unsigned long long)hash;
- (unsigned int)identityQueryComplete;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelCode;
- (id)modelName;
- (unsigned int)platform;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (id)sessionID;
- (void)setAwdlVersion:(unsigned int)arg1;
- (void)setBluetoothDiscovery:(unsigned int)arg1;
- (void)setBonjourDiscovery:(unsigned int)arg1;
- (void)setBonjourResolveComplete:(unsigned int)arg1;
- (void)setBonjourTXTRecordDiscovery:(unsigned int)arg1;
- (void)setBrowserID:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasAwdlVersion:(bool)arg1;
- (void)setHasBluetoothDiscovery:(bool)arg1;
- (void)setHasBonjourDiscovery:(bool)arg1;
- (void)setHasBonjourResolveComplete:(bool)arg1;
- (void)setHasBonjourTXTRecordDiscovery:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasIdentityQueryComplete:(bool)arg1;
- (void)setHasPlatform:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasTcpConnectionComplete:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTlsHandshakeComplete:(bool)arg1;
- (void)setHasTotalDiscovery:(bool)arg1;
- (void)setHasVerifiableIdentity:(bool)arg1;
- (void)setIdentityQueryComplete:(unsigned int)arg1;
- (void)setModelCode:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setRssi:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTcpConnectionComplete:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTlsHandshakeComplete:(unsigned int)arg1;
- (void)setTotalDiscovery:(unsigned int)arg1;
- (void)setVerifiableIdentity:(bool)arg1;
- (unsigned int)tcpConnectionComplete;
- (unsigned long long)timestamp;
- (unsigned int)tlsHandshakeComplete;
- (unsigned int)totalDiscovery;
- (bool)verifiableIdentity;
- (void)writeTo:(id)arg1;

@end
/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushConnectionConnected : PBCodable <NSCopying> {
    unsigned int  _connectDuration;
    unsigned int  _connectionType;
    unsigned int  _dnsDuration;
    unsigned int  _dualChannelState;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int dnsDuration : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int linkQuality : 1; 
        unsigned int tlsDuration : 1; 
    }  _has;
    int  _linkQuality;
    unsigned long long  _timestamp;
    unsigned int  _tlsDuration;
}

@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int dnsDuration;
@property (nonatomic) unsigned int dualChannelState;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectDuration;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasDnsDuration;
@property (nonatomic) bool hasDualChannelState;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTlsDuration;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int tlsDuration;

- (unsigned int)connectDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dnsDuration;
- (unsigned int)dualChannelState;
- (id)guid;
- (bool)hasConnectDuration;
- (bool)hasConnectionType;
- (bool)hasDnsDuration;
- (bool)hasDualChannelState;
- (bool)hasGuid;
- (bool)hasLinkQuality;
- (bool)hasTimestamp;
- (bool)hasTlsDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectDuration:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDnsDuration:(unsigned int)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectDuration:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasDnsDuration:(bool)arg1;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTlsDuration:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTlsDuration:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)tlsDuration;
- (void)writeTo:(id)arg1;

@end

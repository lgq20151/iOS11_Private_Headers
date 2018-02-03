/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {
    NSString * _bundleID;
    unsigned int  _colocatedState;
    unsigned int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int colocatedState : 1; 
        unsigned int eventType : 1; 
        unsigned int networkScore : 1; 
        unsigned int networkSecurity : 1; 
        unsigned int networkTypeBitMap : 1; 
        unsigned int switchToCount : 1; 
        unsigned int switchedAwayFromCount : 1; 
    }  _has;
    int  _networkScore;
    unsigned int  _networkSecurity;
    unsigned int  _networkTypeBitMap;
    NSData * _oui;
    unsigned int  _switchToCount;
    unsigned int  _switchedAwayFromCount;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned int colocatedState;
@property (nonatomic) unsigned int eventType;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasColocatedState;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasNetworkScore;
@property (nonatomic) bool hasNetworkSecurity;
@property (nonatomic) bool hasNetworkTypeBitMap;
@property (nonatomic, readonly) bool hasOui;
@property (nonatomic) bool hasSwitchToCount;
@property (nonatomic) bool hasSwitchedAwayFromCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int networkScore;
@property (nonatomic) unsigned int networkSecurity;
@property (nonatomic) unsigned int networkTypeBitMap;
@property (nonatomic, retain) NSData *oui;
@property (nonatomic) unsigned int switchToCount;
@property (nonatomic) unsigned int switchedAwayFromCount;
@property (nonatomic) unsigned long long timestamp;

- (id)bundleID;
- (unsigned int)colocatedState;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (bool)hasBundleID;
- (bool)hasColocatedState;
- (bool)hasEventType;
- (bool)hasNetworkScore;
- (bool)hasNetworkSecurity;
- (bool)hasNetworkTypeBitMap;
- (bool)hasOui;
- (bool)hasSwitchToCount;
- (bool)hasSwitchedAwayFromCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkScore;
- (unsigned int)networkSecurity;
- (unsigned int)networkTypeBitMap;
- (id)oui;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setColocatedState:(unsigned int)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasColocatedState:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasNetworkScore:(bool)arg1;
- (void)setHasNetworkSecurity:(bool)arg1;
- (void)setHasNetworkTypeBitMap:(bool)arg1;
- (void)setHasSwitchToCount:(bool)arg1;
- (void)setHasSwitchedAwayFromCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNetworkScore:(int)arg1;
- (void)setNetworkSecurity:(unsigned int)arg1;
- (void)setNetworkTypeBitMap:(unsigned int)arg1;
- (void)setOui:(id)arg1;
- (void)setSwitchToCount:(unsigned int)arg1;
- (void)setSwitchedAwayFromCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)switchToCount;
- (unsigned int)switchedAwayFromCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

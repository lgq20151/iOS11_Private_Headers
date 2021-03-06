/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingProximityStatusResult : PBCodable <NSCopying> {
    unsigned int  _dismissType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dismissType : 1; 
        unsigned int rssi : 1; 
        unsigned int smoothedRSSI : 1; 
        unsigned int visibleMs : 1; 
    }  _has;
    int  _rssi;
    NSString * _sessionUUID;
    int  _smoothedRSSI;
    unsigned long long  _timestamp;
    unsigned int  _visibleMs;
}

@property (nonatomic) unsigned int dismissType;
@property (nonatomic) bool hasDismissType;
@property (nonatomic) bool hasRssi;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSmoothedRSSI;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVisibleMs;
@property (nonatomic) int rssi;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int smoothedRSSI;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int visibleMs;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dismissType;
- (bool)hasDismissType;
- (bool)hasRssi;
- (bool)hasSessionUUID;
- (bool)hasSmoothedRSSI;
- (bool)hasTimestamp;
- (bool)hasVisibleMs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (id)sessionUUID;
- (void)setDismissType:(unsigned int)arg1;
- (void)setHasDismissType:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasSmoothedRSSI:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVisibleMs:(bool)arg1;
- (void)setRssi:(int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSmoothedRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVisibleMs:(unsigned int)arg1;
- (int)smoothedRSSI;
- (unsigned long long)timestamp;
- (unsigned int)visibleMs;
- (void)writeTo:(id)arg1;

@end

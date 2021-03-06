/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingProximityiOSSetupTriggered : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int smoothedRSSI : 1; 
        unsigned int userActionType : 1; 
        unsigned int userMs : 1; 
    }  _has;
    NSString * _sessionUUID;
    int  _smoothedRSSI;
    unsigned long long  _timestamp;
    unsigned int  _userActionType;
    unsigned int  _userMs;
}

@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSmoothedRSSI;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUserActionType;
@property (nonatomic) bool hasUserMs;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int smoothedRSSI;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int userActionType;
@property (nonatomic) unsigned int userMs;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionUUID;
- (bool)hasSmoothedRSSI;
- (bool)hasTimestamp;
- (bool)hasUserActionType;
- (bool)hasUserMs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setHasSmoothedRSSI:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUserActionType:(bool)arg1;
- (void)setHasUserMs:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSmoothedRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserActionType:(unsigned int)arg1;
- (void)setUserMs:(unsigned int)arg1;
- (int)smoothedRSSI;
- (unsigned long long)timestamp;
- (unsigned int)userActionType;
- (unsigned int)userMs;
- (void)writeTo:(id)arg1;

@end

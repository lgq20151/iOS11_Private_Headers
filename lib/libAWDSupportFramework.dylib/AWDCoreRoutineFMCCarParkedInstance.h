/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int locationType : 1; 
        unsigned int qualityIndicator : 1; 
        unsigned int triggerTypes : 1; 
        unsigned int userAssistanceRequired : 1; 
    }  _has;
    int  _horizontalAccuracy;
    int  _locationType;
    NSString * _parkingId;
    int  _qualityIndicator;
    unsigned long long  _timestamp;
    int  _triggerTypes;
    bool  _userAssistanceRequired;
}

@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic) bool hasLocationType;
@property (nonatomic, readonly) bool hasParkingId;
@property (nonatomic) bool hasQualityIndicator;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTriggerTypes;
@property (nonatomic) bool hasUserAssistanceRequired;
@property (nonatomic) int horizontalAccuracy;
@property (nonatomic) int locationType;
@property (nonatomic, retain) NSString *parkingId;
@property (nonatomic) int qualityIndicator;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerTypes;
@property (nonatomic) bool userAssistanceRequired;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHorizontalAccuracy;
- (bool)hasLocationType;
- (bool)hasParkingId;
- (bool)hasQualityIndicator;
- (bool)hasTimestamp;
- (bool)hasTriggerTypes;
- (bool)hasUserAssistanceRequired;
- (unsigned long long)hash;
- (int)horizontalAccuracy;
- (bool)isEqual:(id)arg1;
- (int)locationType;
- (void)mergeFrom:(id)arg1;
- (id)parkingId;
- (int)qualityIndicator;
- (bool)readFrom:(id)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasQualityIndicator:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTriggerTypes:(bool)arg1;
- (void)setHasUserAssistanceRequired:(bool)arg1;
- (void)setHorizontalAccuracy:(int)arg1;
- (void)setLocationType:(int)arg1;
- (void)setParkingId:(id)arg1;
- (void)setQualityIndicator:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerTypes:(int)arg1;
- (void)setUserAssistanceRequired:(bool)arg1;
- (unsigned long long)timestamp;
- (int)triggerTypes;
- (bool)userAssistanceRequired;
- (void)writeTo:(id)arg1;

@end

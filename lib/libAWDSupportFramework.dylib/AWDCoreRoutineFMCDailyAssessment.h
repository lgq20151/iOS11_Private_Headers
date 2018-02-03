/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineFMCDailyAssessment : PBCodable <NSCopying> {
    int  _assistances;
    int  _assistedParkingEvents;
    int  _duration;
    int  _engagedParkingEvents;
    int  _engagements;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int assistances : 1; 
        unsigned int assistedParkingEvents : 1; 
        unsigned int duration : 1; 
        unsigned int engagedParkingEvents : 1; 
        unsigned int engagements : 1; 
        unsigned int locationType : 1; 
        unsigned int parkingEvents : 1; 
        unsigned int suppressedParkingEvents : 1; 
    }  _has;
    int  _locationType;
    int  _parkingEvents;
    int  _suppressedParkingEvents;
    unsigned long long  _timestamp;
}

@property (nonatomic) int assistances;
@property (nonatomic) int assistedParkingEvents;
@property (nonatomic) int duration;
@property (nonatomic) int engagedParkingEvents;
@property (nonatomic) int engagements;
@property (nonatomic) bool hasAssistances;
@property (nonatomic) bool hasAssistedParkingEvents;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEngagedParkingEvents;
@property (nonatomic) bool hasEngagements;
@property (nonatomic) bool hasLocationType;
@property (nonatomic) bool hasParkingEvents;
@property (nonatomic) bool hasSuppressedParkingEvents;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int locationType;
@property (nonatomic) int parkingEvents;
@property (nonatomic) int suppressedParkingEvents;
@property (nonatomic) unsigned long long timestamp;

- (int)assistances;
- (int)assistedParkingEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duration;
- (int)engagedParkingEvents;
- (int)engagements;
- (bool)hasAssistances;
- (bool)hasAssistedParkingEvents;
- (bool)hasDuration;
- (bool)hasEngagedParkingEvents;
- (bool)hasEngagements;
- (bool)hasLocationType;
- (bool)hasParkingEvents;
- (bool)hasSuppressedParkingEvents;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)locationType;
- (void)mergeFrom:(id)arg1;
- (int)parkingEvents;
- (bool)readFrom:(id)arg1;
- (void)setAssistances:(int)arg1;
- (void)setAssistedParkingEvents:(int)arg1;
- (void)setDuration:(int)arg1;
- (void)setEngagedParkingEvents:(int)arg1;
- (void)setEngagements:(int)arg1;
- (void)setHasAssistances:(bool)arg1;
- (void)setHasAssistedParkingEvents:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEngagedParkingEvents:(bool)arg1;
- (void)setHasEngagements:(bool)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasParkingEvents:(bool)arg1;
- (void)setHasSuppressedParkingEvents:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocationType:(int)arg1;
- (void)setParkingEvents:(int)arg1;
- (void)setSuppressedParkingEvents:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)suppressedParkingEvents;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

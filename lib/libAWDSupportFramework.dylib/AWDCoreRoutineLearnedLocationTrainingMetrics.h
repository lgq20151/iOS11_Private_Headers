/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLearnedLocationTrainingMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int intervalSinceLastAttempt : 1; 
        unsigned int latency : 1; 
        unsigned int maxIntervalBetweenLocations : 1; 
        unsigned int timestamp : 1; 
        unsigned int locationsProcessed : 1; 
        unsigned int placeCountDevice : 1; 
        unsigned int placeCountTotal : 1; 
        unsigned int visitCountDevice : 1; 
        unsigned int visitCountTotal : 1; 
        unsigned int trainedVisits : 1; 
    }  _has;
    unsigned long long  _intervalSinceLastAttempt;
    unsigned long long  _latency;
    unsigned int  _locationsProcessed;
    unsigned long long  _maxIntervalBetweenLocations;
    unsigned int  _placeCountDevice;
    unsigned int  _placeCountTotal;
    NSMutableArray * _places;
    unsigned long long  _timestamp;
    bool  _trainedVisits;
    unsigned int  _visitCountDevice;
    unsigned int  _visitCountTotal;
    NSMutableArray * _visits;
}

@property (nonatomic) bool hasIntervalSinceLastAttempt;
@property (nonatomic) bool hasLatency;
@property (nonatomic) bool hasLocationsProcessed;
@property (nonatomic) bool hasMaxIntervalBetweenLocations;
@property (nonatomic) bool hasPlaceCountDevice;
@property (nonatomic) bool hasPlaceCountTotal;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTrainedVisits;
@property (nonatomic) bool hasVisitCountDevice;
@property (nonatomic) bool hasVisitCountTotal;
@property (nonatomic) unsigned long long intervalSinceLastAttempt;
@property (nonatomic) unsigned long long latency;
@property (nonatomic) unsigned int locationsProcessed;
@property (nonatomic) unsigned long long maxIntervalBetweenLocations;
@property (nonatomic) unsigned int placeCountDevice;
@property (nonatomic) unsigned int placeCountTotal;
@property (nonatomic, retain) NSMutableArray *places;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool trainedVisits;
@property (nonatomic) unsigned int visitCountDevice;
@property (nonatomic) unsigned int visitCountTotal;
@property (nonatomic, retain) NSMutableArray *visits;

+ (Class)placesType;
+ (Class)visitsType;

- (void)addPlaces:(id)arg1;
- (void)addVisits:(id)arg1;
- (void)clearPlaces;
- (void)clearVisits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntervalSinceLastAttempt;
- (bool)hasLatency;
- (bool)hasLocationsProcessed;
- (bool)hasMaxIntervalBetweenLocations;
- (bool)hasPlaceCountDevice;
- (bool)hasPlaceCountTotal;
- (bool)hasTimestamp;
- (bool)hasTrainedVisits;
- (bool)hasVisitCountDevice;
- (bool)hasVisitCountTotal;
- (unsigned long long)hash;
- (unsigned long long)intervalSinceLastAttempt;
- (bool)isEqual:(id)arg1;
- (unsigned long long)latency;
- (unsigned int)locationsProcessed;
- (unsigned long long)maxIntervalBetweenLocations;
- (void)mergeFrom:(id)arg1;
- (unsigned int)placeCountDevice;
- (unsigned int)placeCountTotal;
- (id)places;
- (id)placesAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasIntervalSinceLastAttempt:(bool)arg1;
- (void)setHasLatency:(bool)arg1;
- (void)setHasLocationsProcessed:(bool)arg1;
- (void)setHasMaxIntervalBetweenLocations:(bool)arg1;
- (void)setHasPlaceCountDevice:(bool)arg1;
- (void)setHasPlaceCountTotal:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTrainedVisits:(bool)arg1;
- (void)setHasVisitCountDevice:(bool)arg1;
- (void)setHasVisitCountTotal:(bool)arg1;
- (void)setIntervalSinceLastAttempt:(unsigned long long)arg1;
- (void)setLatency:(unsigned long long)arg1;
- (void)setLocationsProcessed:(unsigned int)arg1;
- (void)setMaxIntervalBetweenLocations:(unsigned long long)arg1;
- (void)setPlaceCountDevice:(unsigned int)arg1;
- (void)setPlaceCountTotal:(unsigned int)arg1;
- (void)setPlaces:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTrainedVisits:(bool)arg1;
- (void)setVisitCountDevice:(unsigned int)arg1;
- (void)setVisitCountTotal:(unsigned int)arg1;
- (void)setVisits:(id)arg1;
- (unsigned long long)timestamp;
- (bool)trainedVisits;
- (unsigned int)visitCountDevice;
- (unsigned int)visitCountTotal;
- (id)visits;
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)writeTo:(id)arg1;

@end

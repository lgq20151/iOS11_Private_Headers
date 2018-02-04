/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutineLocationVisit : PBCodable <NSCopying> {
    double  _entryTime;
    double  _exitTime;
    struct { 
        unsigned int entryTime : 1; 
        unsigned int exitTime : 1; 
    }  _has;
}

@property (nonatomic) double entryTime;
@property (nonatomic) double exitTime;
@property (nonatomic) bool hasEntryTime;
@property (nonatomic) bool hasExitTime;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)entryTime;
- (double)exitTime;
- (bool)hasEntryTime;
- (bool)hasExitTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntryTime:(double)arg1;
- (void)setExitTime:(double)arg1;
- (void)setHasEntryTime:(bool)arg1;
- (void)setHasExitTime:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <NSCopying> {
    unsigned int  _distance;
    unsigned int  _duration;
    struct { 
        unsigned int distance : 1; 
        unsigned int duration : 1; 
    }  _has;
    AWDCoreRoutineTransitionMotionType * _transitionHistogram;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasTransitionHistogram;
@property (nonatomic, retain) AWDCoreRoutineTransitionMotionType *transitionHistogram;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (unsigned int)duration;
- (bool)hasDistance;
- (bool)hasDuration;
- (bool)hasTransitionHistogram;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setTransitionHistogram:(id)arg1;
- (id)transitionHistogram;
- (void)writeTo:(id)arg1;

@end

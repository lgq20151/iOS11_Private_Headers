/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCallMetricsValue : PBCodable <NSCopying> {
    double  _callDuration;
    struct { 
        unsigned int callDuration : 1; 
        unsigned int timeToEstablish : 1; 
    }  _has;
    double  _timeToEstablish;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double callDuration;
@property (nonatomic) bool hasCallDuration;
@property (nonatomic) bool hasTimeToEstablish;
@property (nonatomic) double timeToEstablish;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (double)callDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallDuration;
- (bool)hasTimeToEstablish;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallDuration:(double)arg1;
- (void)setHasCallDuration:(bool)arg1;
- (void)setHasTimeToEstablish:(bool)arg1;
- (void)setTimeToEstablish:(double)arg1;
- (double)timeToEstablish;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

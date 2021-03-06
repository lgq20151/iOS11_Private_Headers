/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDistanceValue : PBCodable <NSCopying> {
    struct { 
        unsigned int magnitude : 1; 
        unsigned int unit : 1; 
    }  _has;
    double  _magnitude;
    int  _unit;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic) bool hasMagnitude;
@property (nonatomic) bool hasUnit;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic) double magnitude;
@property (nonatomic) int unit;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsUnit:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMagnitude;
- (bool)hasUnit;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)magnitude;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMagnitude:(bool)arg1;
- (void)setHasUnit:(bool)arg1;
- (void)setMagnitude:(double)arg1;
- (void)setUnit:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)unit;
- (id)unitAsString:(int)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end

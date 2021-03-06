/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBLocationList : PBCodable <NSCopying> {
    _INPBCondition * _condition;
    NSMutableArray * _locations;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, readonly) bool hasCondition;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)locationType;
+ (id)options;

- (void).cxx_destruct;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

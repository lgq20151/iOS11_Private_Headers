/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCancelWorkoutIntent : PBCodable <NSCopying> {
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
    _INPBDataString * _workoutName;
}

@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasWorkoutName;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBDataString *workoutName;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasWorkoutName;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setWorkoutName:(id)arg1;
- (id)unknownFields;
- (id)workoutName;
- (void)writeTo:(id)arg1;

@end

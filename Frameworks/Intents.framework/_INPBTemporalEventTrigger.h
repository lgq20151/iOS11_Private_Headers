/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTemporalEventTrigger : PBCodable <NSCopying> {
    _INPBDateTimeRangeValue * _dateTime;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDateTimeRangeValue *dateTime;
@property (nonatomic, readonly) bool hasDateTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateTime:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

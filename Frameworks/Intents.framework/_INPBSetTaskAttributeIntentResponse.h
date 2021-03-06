/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetTaskAttributeIntentResponse : PBCodable <NSCopying> {
    _INPBTask * _modifiedTask;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasModifiedTask;
@property (nonatomic, retain) _INPBTask *modifiedTask;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModifiedTask;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedTask;
- (bool)readFrom:(id)arg1;
- (void)setModifiedTask:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

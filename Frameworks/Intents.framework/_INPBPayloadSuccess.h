/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadSuccess : PBCodable <NSCopying> {
    NSString * _resolvedKeyPath;
    _INPBIntentSlotValue * _resolvedValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasResolvedKeyPath;
@property (nonatomic, readonly) bool hasResolvedValue;
@property (nonatomic, retain) NSString *resolvedKeyPath;
@property (nonatomic, retain) _INPBIntentSlotValue *resolvedValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResolvedKeyPath;
- (bool)hasResolvedValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolvedKeyPath;
- (id)resolvedValue;
- (void)setResolvedKeyPath:(id)arg1;
- (void)setResolvedValue:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

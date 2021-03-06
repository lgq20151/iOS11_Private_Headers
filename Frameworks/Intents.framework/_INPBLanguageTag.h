/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBLanguageTag : PBCodable <NSCopying> {
    NSString * _tag;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasTag;
@property (nonatomic, retain) NSString *tag;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

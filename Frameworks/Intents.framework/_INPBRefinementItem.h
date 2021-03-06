/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRefinementItem : PBCodable <NSCopying> {
    _INPBSelectionItem * _item;
    NSString * _subKeyPath;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasItem;
@property (nonatomic, readonly) bool hasSubKeyPath;
@property (nonatomic, retain) _INPBSelectionItem *item;
@property (nonatomic, retain) NSString *subKeyPath;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasItem;
- (bool)hasSubKeyPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)item;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setSubKeyPath:(id)arg1;
- (id)subKeyPath;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

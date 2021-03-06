/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadConfirmation : PBCodable <NSCopying> {
    _INPBSelectionItem * _confirmationItem;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBSelectionItem *confirmationItem;
@property (nonatomic, readonly) bool hasConfirmationItem;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)confirmationItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfirmationItem;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfirmationItem:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideFareLineItem : PBCodable <NSCopying> {
    NSString * _currencyCode;
    _INPBDecimalNumberValue * _price;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic, readonly) bool hasPrice;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) _INPBDecimalNumberValue *price;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrencyCode;
- (bool)hasPrice;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)price;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

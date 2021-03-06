/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBFilePropertyValue : PBCodable <NSCopying> {
    _INPBDateTimeRange * _dateTime;
    int  _fileType;
    struct { 
        unsigned int fileType : 1; 
    }  _has;
    _INPBContact * _person;
    _INPBLong * _quantity;
    PBUnknownFields * _unknownFields;
    _INPBString * _value;
}

@property (nonatomic, retain) _INPBDateTimeRange *dateTime;
@property (nonatomic) int fileType;
@property (nonatomic, readonly) bool hasDateTime;
@property (nonatomic) bool hasFileType;
@property (nonatomic, readonly) bool hasPerson;
@property (nonatomic, readonly) bool hasQuantity;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) _INPBContact *person;
@property (nonatomic, retain) _INPBLong *quantity;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBString *value;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsFileType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fileType;
- (id)fileTypeAsString:(int)arg1;
- (bool)hasDateTime;
- (bool)hasFileType;
- (bool)hasPerson;
- (bool)hasQuantity;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)person;
- (id)quantity;
- (bool)readFrom:(id)arg1;
- (void)setDateTime:(id)arg1;
- (void)setFileType:(int)arg1;
- (void)setHasFileType:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)setQuantity:(id)arg1;
- (void)setValue:(id)arg1;
- (id)unknownFields;
- (id)value;
- (void)writeTo:(id)arg1;

@end

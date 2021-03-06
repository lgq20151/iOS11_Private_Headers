/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBImageValue : PBCodable <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    }  _has;
    double  _height;
    PBUnknownFields * _unknownFields;
    NSString * _uri;
    _INPBValueMetadata * _valueMetadata;
    double  _width;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic, readonly) bool hasUri;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic) bool hasWidth;
@property (nonatomic) double height;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *uri;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;
@property (nonatomic) double width;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasUri;
- (bool)hasValueMetadata;
- (bool)hasWidth;
- (unsigned long long)hash;
- (double)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setUri:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (void)setWidth:(double)arg1;
- (id)unknownFields;
- (id)uri;
- (id)valueMetadata;
- (double)width;
- (void)writeTo:(id)arg1;

@end

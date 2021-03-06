/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetVisualCodeIntent : PBCodable <NSCopying> {
    struct { 
        unsigned int visualCodeType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
    int  _visualCodeType;
}

@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasVisualCodeType;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int visualCodeType;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsVisualCodeType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasVisualCodeType;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasVisualCodeType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setVisualCodeType:(int)arg1;
- (id)unknownFields;
- (int)visualCodeType;
- (id)visualCodeTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

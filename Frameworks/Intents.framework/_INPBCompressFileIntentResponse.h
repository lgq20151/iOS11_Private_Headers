/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCompressFileIntentResponse : PBCodable <NSCopying> {
    _INPBString * _entityName;
    struct { 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool success;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityName;
- (bool)hasEntityName;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetCarLockStatusIntentResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int locked : 1; 
    }  _has;
    bool  _locked;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasLocked;
@property (nonatomic) bool locked;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocked;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)locked;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLocked:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

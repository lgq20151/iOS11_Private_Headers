/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetAudioSourceInCarIntent : PBCodable <NSCopying> {
    int  _audioSource;
    struct { 
        unsigned int audioSource : 1; 
        unsigned int relativeAudioSourceReference : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _relativeAudioSourceReference;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int audioSource;
@property (nonatomic) bool hasAudioSource;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasRelativeAudioSourceReference;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int relativeAudioSourceReference;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAudioSource:(id)arg1;
- (int)StringAsRelativeAudioSourceReference:(id)arg1;
- (int)audioSource;
- (id)audioSourceAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioSource;
- (bool)hasIntentMetadata;
- (bool)hasRelativeAudioSourceReference;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)relativeAudioSourceReference;
- (id)relativeAudioSourceReferenceAsString:(int)arg1;
- (void)setAudioSource:(int)arg1;
- (void)setHasAudioSource:(bool)arg1;
- (void)setHasRelativeAudioSourceReference:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRelativeAudioSourceReference:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
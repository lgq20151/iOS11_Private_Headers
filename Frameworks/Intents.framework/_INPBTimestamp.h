/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTimestamp : PBCodable <NSCopying> {
    struct { 
        unsigned int seconds : 1; 
        unsigned int nanos : 1; 
    }  _has;
    int  _nanos;
    long long  _seconds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasNanos;
@property (nonatomic) bool hasSeconds;
@property (nonatomic) int nanos;
@property (nonatomic) long long seconds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNanos;
- (bool)hasSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nanos;
- (bool)readFrom:(id)arg1;
- (long long)seconds;
- (void)setHasNanos:(bool)arg1;
- (void)setHasSeconds:(bool)arg1;
- (void)setNanos:(int)arg1;
- (void)setSeconds:(long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

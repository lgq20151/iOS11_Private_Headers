/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDTuple : PBCodable <NSCopying> {
    unsigned long long  _downDuration;
    struct { 
        unsigned int downDuration : 1; 
        unsigned int upDuration : 1; 
    }  _has;
    unsigned long long  _upDuration;
}

@property (nonatomic) unsigned long long downDuration;
@property (nonatomic) bool hasDownDuration;
@property (nonatomic) bool hasUpDuration;
@property (nonatomic) unsigned long long upDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)downDuration;
- (bool)hasDownDuration;
- (bool)hasUpDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDownDuration:(unsigned long long)arg1;
- (void)setHasDownDuration:(bool)arg1;
- (void)setHasUpDuration:(bool)arg1;
- (void)setUpDuration:(unsigned long long)arg1;
- (unsigned long long)upDuration;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {
    unsigned int  _bucketDuration;
    struct { 
        unsigned int bucketDuration : 1; 
    }  _has;
}

@property (nonatomic) unsigned int bucketDuration;
@property (nonatomic) bool hasBucketDuration;

- (unsigned int)bucketDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketDuration:(unsigned int)arg1;
- (void)setHasBucketDuration:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

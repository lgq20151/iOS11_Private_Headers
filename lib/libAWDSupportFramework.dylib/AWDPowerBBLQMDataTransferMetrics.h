/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBLQMDataTransferMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _lQMBytes;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _lQMTransitionCntBuckets;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *lQMBytes;
@property (nonatomic, readonly) unsigned int*lQMTransitionCntBuckets;
@property (nonatomic, readonly) unsigned long long lQMTransitionCntBucketsCount;
@property (nonatomic) unsigned long long timestamp;

+ (Class)lQMBytesType;

- (void)addLQMBytes:(id)arg1;
- (void)addLQMTransitionCntBuckets:(unsigned int)arg1;
- (void)clearLQMBytes;
- (void)clearLQMTransitionCntBuckets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lQMBytes;
- (id)lQMBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)lQMBytesCount;
- (unsigned int*)lQMTransitionCntBuckets;
- (unsigned int)lQMTransitionCntBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)lQMTransitionCntBucketsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLQMBytes:(id)arg1;
- (void)setLQMTransitionCntBuckets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

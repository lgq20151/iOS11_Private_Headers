/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerChipMemory : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int heapFree : 1; 
        unsigned int heapFreeMax : 1; 
        unsigned int heapFreeMin : 1; 
        unsigned int heapTotal : 1; 
        unsigned int heapTotalMax : 1; 
        unsigned int heapTotalMin : 1; 
    }  _has;
    unsigned int  _heapFree;
    unsigned int  _heapFreeMax;
    unsigned int  _heapFreeMin;
    unsigned int  _heapTotal;
    unsigned int  _heapTotalMax;
    unsigned int  _heapTotalMin;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasHeapFree;
@property (nonatomic) bool hasHeapFreeMax;
@property (nonatomic) bool hasHeapFreeMin;
@property (nonatomic) bool hasHeapTotal;
@property (nonatomic) bool hasHeapTotalMax;
@property (nonatomic) bool hasHeapTotalMin;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int heapFree;
@property (nonatomic) unsigned int heapFreeMax;
@property (nonatomic) unsigned int heapFreeMin;
@property (nonatomic) unsigned int heapTotal;
@property (nonatomic) unsigned int heapTotalMax;
@property (nonatomic) unsigned int heapTotalMin;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeapFree;
- (bool)hasHeapFreeMax;
- (bool)hasHeapFreeMin;
- (bool)hasHeapTotal;
- (bool)hasHeapTotalMax;
- (bool)hasHeapTotalMin;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)heapFree;
- (unsigned int)heapFreeMax;
- (unsigned int)heapFreeMin;
- (unsigned int)heapTotal;
- (unsigned int)heapTotalMax;
- (unsigned int)heapTotalMin;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeapFree:(bool)arg1;
- (void)setHasHeapFreeMax:(bool)arg1;
- (void)setHasHeapFreeMin:(bool)arg1;
- (void)setHasHeapTotal:(bool)arg1;
- (void)setHasHeapTotalMax:(bool)arg1;
- (void)setHasHeapTotalMin:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHeapFree:(unsigned int)arg1;
- (void)setHeapFreeMax:(unsigned int)arg1;
- (void)setHeapFreeMin:(unsigned int)arg1;
- (void)setHeapTotal:(unsigned int)arg1;
- (void)setHeapTotalMax:(unsigned int)arg1;
- (void)setHeapTotalMin:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

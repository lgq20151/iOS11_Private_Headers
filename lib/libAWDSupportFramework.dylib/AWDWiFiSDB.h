/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiSDB : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _sliceStats;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *sliceStats;
@property (nonatomic) unsigned long long timestamp;

+ (Class)sliceStatsType;

- (void)addSliceStats:(id)arg1;
- (void)clearSliceStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSliceStats:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)sliceStats;
- (id)sliceStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sliceStatsCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

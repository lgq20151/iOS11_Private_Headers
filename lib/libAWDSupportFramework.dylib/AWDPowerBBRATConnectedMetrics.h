/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBRATConnectedMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _rATPowers;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *rATPowers;
@property (nonatomic) unsigned long long timestamp;

+ (Class)rATPowerType;

- (void)addRATPower:(id)arg1;
- (void)clearRATPowers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)rATPowerAtIndex:(unsigned long long)arg1;
- (id)rATPowers;
- (unsigned long long)rATPowersCount;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRATPowers:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

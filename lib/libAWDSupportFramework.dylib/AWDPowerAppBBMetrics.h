/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerAppBBMetrics : PBCodable <NSCopying> {
    NSMutableArray * _appPowers;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *appPowers;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (Class)appPowerType;

- (void)addAppPower:(id)arg1;
- (id)appPowerAtIndex:(unsigned long long)arg1;
- (id)appPowers;
- (unsigned long long)appPowersCount;
- (void)clearAppPowers;
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
- (void)setAppPowers:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
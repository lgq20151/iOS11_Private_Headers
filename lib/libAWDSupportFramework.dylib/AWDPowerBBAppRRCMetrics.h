/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBAppRRCMetrics : PBCodable <NSCopying> {
    NSMutableArray * _appConnStats;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numRRCConnections : 1; 
    }  _has;
    unsigned int  _numRRCConnections;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *appConnStats;
@property (nonatomic) bool hasNumRRCConnections;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int numRRCConnections;
@property (nonatomic) unsigned long long timestamp;

+ (Class)appConnStatsType;

- (void)addAppConnStats:(id)arg1;
- (id)appConnStats;
- (id)appConnStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appConnStatsCount;
- (void)clearAppConnStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumRRCConnections;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numRRCConnections;
- (bool)readFrom:(id)arg1;
- (void)setAppConnStats:(id)arg1;
- (void)setHasNumRRCConnections:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumRRCConnections:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

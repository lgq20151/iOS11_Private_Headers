/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLMPScoreBoard : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _instances;
    NSMutableArray * _secondaryInstances;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *instances;
@property (nonatomic, retain) NSMutableArray *secondaryInstances;
@property (nonatomic) unsigned long long timestamp;

+ (Class)instancesType;
+ (Class)secondaryInstancesType;

- (void)addInstances:(id)arg1;
- (void)addSecondaryInstances:(id)arg1;
- (void)clearInstances;
- (void)clearSecondaryInstances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)instances;
- (id)instancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instancesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondaryInstances;
- (id)secondaryInstancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)secondaryInstancesCount;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInstances:(id)arg1;
- (void)setSecondaryInstances:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

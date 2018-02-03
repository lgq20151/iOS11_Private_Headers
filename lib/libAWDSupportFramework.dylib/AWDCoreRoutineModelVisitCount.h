/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelVisitCount : PBCodable <NSCopying> {
    unsigned int  _count;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int count : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSMutableArray * _visits;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSMutableArray *visits;

+ (Class)visitsType;

- (void)addVisits:(id)arg1;
- (void)clearVisits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVisits:(id)arg1;
- (unsigned long long)timestamp;
- (id)visits;
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)writeTo:(id)arg1;

@end

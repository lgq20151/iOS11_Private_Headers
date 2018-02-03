/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutinePersistenceStore : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int migratorDestroyedStoreReason : 1; 
        unsigned int migratorFailed : 1; 
    }  _has;
    int  _migratorDestroyedStoreReason;
    bool  _migratorFailed;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasMigratorDestroyedStoreReason;
@property (nonatomic) bool hasMigratorFailed;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int migratorDestroyedStoreReason;
@property (nonatomic) bool migratorFailed;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMigratorDestroyedStoreReason;
- (bool)hasMigratorFailed;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)migratorDestroyedStoreReason;
- (bool)migratorFailed;
- (bool)readFrom:(id)arg1;
- (void)setHasMigratorDestroyedStoreReason:(bool)arg1;
- (void)setHasMigratorFailed:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMigratorDestroyedStoreReason:(int)arg1;
- (void)setMigratorFailed:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

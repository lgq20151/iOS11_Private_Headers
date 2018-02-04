/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncStatus : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, HDSyncAnchorMap, NSCopying> {
    NSMutableArray * _anchors;
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    int  _statusCode;
}

@property (nonatomic, retain) NSMutableArray *anchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStatusCode;
@property (readonly) unsigned long long hash;
@property (nonatomic) int statusCode;
@property (readonly) Class superclass;

+ (Class)anchorsType;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
+ (id)statusWithStatusCode:(int)arg1;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addAnchors:(id)arg1;
- (void)addToPersistentUserInfo:(id)arg1;
- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (id)anchors;
- (id)anchorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)anchorsCount;
- (void)clearAnchors;
- (id)copyForPersistentUserInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)enumerateAnchorsAndSyncEntitiesWithBlock:(id /* block */)arg1;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (bool)readFrom:(id)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (void)setAnchors:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
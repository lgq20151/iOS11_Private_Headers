/* made by EzioChiu.
 */

@protocol HDSyncChange <NSObject>

@required

- (NSArray *)decodedObjects;
- (bool)done;
- (bool)isSpeculative;
- (<HDSyncAnchorMap> *)requiredAnchorMapWithError:(id*)arg1;
- (NSNumber *)sequenceNumber;
- (void)setObjects:(NSArray *)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 requiredAnchorMap:(id <HDSyncAnchorMap>)arg3;
- (void)setSequenceNumber:(long long)arg1 done:(bool)arg2;
- (struct HDSyncAnchorRange { long long x1; long long x2; })syncAnchorRange;
- (Class)syncEntityClass;

@end

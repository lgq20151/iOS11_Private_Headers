/* made by EzioChiu.
 */

@protocol PFCloudKitSerializerDelegate <NSObject>

@required

- (void)cloudKitSerializer:(PFCloudKitSerializer *)arg1 failedToUpdateRelationship:(PFMirroredRelationship *)arg2 withError:(NSError *)arg3;
- (void)cloudKitSerializer:(PFCloudKitSerializer *)arg1 resolvedPendingRelationship:(NSCKImportPendingRelationship *)arg2;
- (NSURL *)cloudKitSerializer:(PFCloudKitSerializer *)arg1 safeSaveURLForAsset:(CKAsset *)arg2;

@end

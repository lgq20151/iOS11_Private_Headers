/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedPhotoLibrary : PLPhotoLibrary

+ (id)_sharedPhotoLibrary;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedPhotoLibrary;

- (void)_assetsdHasNoXPCTransactions:(id)arg1;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (id)autorelease;
- (unsigned long long)concurrencyType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

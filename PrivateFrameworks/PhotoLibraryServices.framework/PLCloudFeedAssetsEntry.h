/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedAssetsEntry : PLCloudFeedEntry

@property (nonatomic, retain) NSOrderedSet *entryAssets;
@property (nonatomic, readonly) NSMutableOrderedSet *mutableEntryAssets;

+ (id)entityName;

- (id)mutableEntryAssets;
- (bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end

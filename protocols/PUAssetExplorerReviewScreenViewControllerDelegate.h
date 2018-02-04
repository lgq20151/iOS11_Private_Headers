/* made by EzioChiu.
 */

@protocol PUAssetExplorerReviewScreenViewControllerDelegate <NSObject>

@required

- (void)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 didPressDoneWithSelectedAssetUUIDs:(NSSet *)arg2 livePhotoDisabledAssetUUIDs:(NSSet *)arg3 substituteAssetsByUUID:(NSDictionary *)arg4;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(PUAssetExplorerReviewScreenViewController *)arg1;

@optional

- (bool)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (bool)assetExplorerReviewScreenViewController:(PUAssetExplorerReviewScreenViewController *)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(PUAssetExplorerReviewScreenViewController *)arg1;

@end
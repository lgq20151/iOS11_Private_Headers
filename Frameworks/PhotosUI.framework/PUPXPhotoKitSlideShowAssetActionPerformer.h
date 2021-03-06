/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUSlideshowViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;

- (void)_startSlideshow;
- (void)performUserInteractionTask;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;

@end

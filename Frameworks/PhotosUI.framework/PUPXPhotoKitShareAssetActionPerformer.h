/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXPhotoKitShareAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUPhotosSharingViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)createPreviewActionWithTitle:(id)arg1 handler:(id /* block */)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3;

- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;
- (void)performUserInteractionTask;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(bool)arg3 withAsset:(id)arg4;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(bool)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1 withAsset:(id)arg2;

@end

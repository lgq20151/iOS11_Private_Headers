/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReviewAssetsMediaProvider : PUEditableMediaProvider {
    PHConcurrentMapTable * __mediaRequests;
    double  __screenScale;
    int  _nextRequestIdentifier;
}

@property (nonatomic, readonly) PHConcurrentMapTable *_mediaRequests;
@property (nonatomic, readonly) double _screenScale;

- (void).cxx_destruct;
- (int)_incrementRequestIdentifier;
- (id)_mediaRequests;
- (int)_requestAdjustmentDataForAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 bakeInOrientation:(bool)arg4 error:(id*)arg5;
- (double)_screenScale;
- (void)cancelImageRequest:(int)arg1;
- (id)init;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
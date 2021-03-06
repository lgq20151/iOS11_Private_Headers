/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest {
    int  _imageManagerImageRequestId;
    int  _imageManagerVideoRequestId;
}

+ (id)exportRequestForAsset:(id)arg1 error:(id*)arg2;

- (int)_requestImageURLForAsset:(id)arg1 progressHandler:(id /* block */)arg2 resultHandler:(id /* block */)arg3;
- (void)_requestLivePhotoURLsForAsset:(id)arg1 progressHandler:(id /* block */)arg2 resultHandler:(id /* block */)arg3;
- (int)_requestVideoURLForAsset:(id)arg1 progressHandler:(id /* block */)arg2 resultHandler:(id /* block */)arg3;
- (void)exportWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;

@end

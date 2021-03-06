/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIAssetVariationPreviewViewController : UIViewController {
    UIImage * _image;
    UIImageView * _imageView;
    PXAssetVariationRenderResult * _renderResult;
    ISWrappedAVPlayer * _videoPlayer;
    ISVideoPlayerUIView * _videoView;
}

@property (nonatomic, readonly) PXAssetVariationRenderResult *renderResult;

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRenderResult:(id)arg1;
- (id)renderResult;
- (void)viewDidLoad;

@end

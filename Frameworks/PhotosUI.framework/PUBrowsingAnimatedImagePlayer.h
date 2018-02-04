/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingAnimatedImagePlayer : PUViewModel {
    NSMutableSet * __animatedImageLoadingDisablingReasons;
    int  __animatedImageRequestID;
    PHAnimatedImage * _animatedImage;
    <PUDisplayAsset> * _asset;
    bool  _isAnimatedImageLoadingAllowed;
    struct { 
        bool animatedImage; 
    }  _isValid;
    PUMediaProvider * _mediaProvider;
}

@property (nonatomic, retain) NSMutableSet *_animatedImageLoadingDisablingReasons;
@property (setter=_setAnimatedImageRequestID:, nonatomic) int _animatedImageRequestID;
@property (setter=_setAnimatedImage:, nonatomic, retain) PHAnimatedImage *animatedImage;
@property (nonatomic, retain) <PUDisplayAsset> *asset;
@property (setter=_setAnimatedImageLoadingAllowed:, nonatomic) bool isAnimatedImageLoadingAllowed;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;

- (void).cxx_destruct;
- (id)_animatedImageLoadingDisablingReasons;
- (int)_animatedImageRequestID;
- (void)_cancelLoading;
- (void)_handleAnimatedImageRequestComplete:(id)arg1;
- (void)_invalidateAnimatedImage;
- (bool)_needsUpdate;
- (void)_setAnimatedImage:(id)arg1;
- (void)_setAnimatedImageLoadingAllowed:(bool)arg1;
- (void)_setAnimatedImageRequestID:(int)arg1;
- (void)_updateAnimatedImage;
- (void)_updateIfNeeded;
- (id)animatedImage;
- (id)asset;
- (void)dealloc;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (bool)isAnimatedImageLoadingAllowed;
- (id)mediaProvider;
- (id)newViewModelChange;
- (void)setAnimatedImageLoadingDisabled:(bool)arg1 forReason:(id)arg2;
- (void)setAsset:(id)arg1;
- (void)set_animatedImageLoadingDisablingReasons:(id)arg1;
- (void)unloadAnimatedImage;

@end
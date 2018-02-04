/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {
    UIColor * _averageColor;
    <SBFCancelable> * _colorBoxCancelToken;
    UIImageView * _gradientView;
    UIImageView * _imageView;
    double  _minimumZoomScale;
    double  _minimumZoomScaleForParallax;
    bool  _parallaxCanBeEnabledAutomatically;
    <SBFCancelable> * _parallaxCancelToken;
    SBFLockScreenWallpaperParallaxSettings * _parallaxSettings;
    UIScrollView * _scrollView;
    SBFSubject * _scrollViewObserver;
}

@property (readonly) UIColor *averageColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_canCacheImages;
+ (bool)_canDownscaleSampleImage;
+ (bool)_shouldScaleForParallax;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_boundedContentOffsetForOverhang;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRect;
- (struct CGSize { double x1; double x2; })_imageSize;
- (struct CGPoint { double x1; double x2; })_maximumContentOffsetForOverhang;
- (struct CGPoint { double x1; double x2; })_minimumContentOffsetForOverhang;
- (id)_newImageView;
- (double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_scrollView;
- (double)_scrollViewParallaxFactor;
- (void)_setupColorBoxObserver;
- (void)_setupContentView;
- (void)_setupParallaxObserver;
- (void)_setupScrollView;
- (void)_setupScrollViewObserver;
- (double)_throttleDuration;
- (void)_updateParallaxForScroll;
- (void)_updateScrollViewZoomScales;
- (id)_wallpaperImageForAnalysis;
- (id)averageColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (double)cropZoomScale;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 wallpaperSettingsProvider:(id)arg4;
- (void)layoutSubviews;
- (void)legibilitySettingsDidChange;
- (double)parallaxFactor;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)setParallaxEnabled:(bool)arg1;
- (bool)supportsCropping;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
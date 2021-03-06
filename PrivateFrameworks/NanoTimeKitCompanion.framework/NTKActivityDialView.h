/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKActivityDialView : UIView {
    NTKFaceColorScheme * _colorScheme;
    NSArray * _segments;
    bool  _shouldRasterize;
    double  _zoomFraction;
}

@property (nonatomic, retain) NTKFaceColorScheme *colorScheme;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic) bool shouldRasterize;
@property (nonatomic) double zoomFraction;

- (void).cxx_destruct;
- (double)_handAlphaForEditMode:(long long)arg1;
- (double)_segmentAlphaForEditMode:(long long)arg1;
- (void)applyTransitionFromScheme:(id)arg1 toScheme:(id)arg2 fraction:(double)arg3;
- (id)colorScheme;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)segments;
- (void)setColorScheme:(id)arg1;
- (void)setShouldRasterize:(bool)arg1;
- (void)setZoomFraction:(double)arg1;
- (bool)shouldRasterize;
- (double)zoomFraction;

@end

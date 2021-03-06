/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInternalDrawingLightView : UIView {
    double  _adjustScale;
    long long  _cachedOrientation;
    PKDrawing * _drawing;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawingSize;
    CALayer * _imageLayer;
    PKViewController * _viewController;
}

@property (nonatomic) double adjustScale;
@property (nonatomic) long long cachedOrientation;
@property (nonatomic, retain) PKDrawing *drawing;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } drawingCenterOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } drawingSize;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (nonatomic, retain) CALayer *imageLayer;
@property (nonatomic) PKViewController *viewController;

+ (id)orientedImage:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;

- (void).cxx_destruct;
- (void)_updateImage:(id)arg1;
- (double)adjustScale;
- (void)asyncImageOrientated:(bool)arg1 completion:(id /* block */)arg2;
- (void)asyncUpdateImage;
- (long long)cachedOrientation;
- (bool)canBecomeFirstResponder;
- (void)done;
- (id)drawing;
- (struct CGPoint { double x1; double x2; })drawingCenterOffset;
- (struct CGSize { double x1; double x2; })drawingSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })fitTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })fitTransformForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForFullscreenDrawing;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)imageLayer;
- (id)imageOrientated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withImageLayer:(bool)arg2;
- (void)layoutSubviews;
- (void)setAdjustScale:(double)arg1;
- (void)setCachedOrientation:(long long)arg1;
- (void)setDrawing:(id)arg1;
- (void)setDrawingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageLayer:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)updateImage;
- (void)updateLayerImageFrame;
- (void)updateLayerImageFrameAnimationDuration:(double)arg1;
- (id)viewController;

@end

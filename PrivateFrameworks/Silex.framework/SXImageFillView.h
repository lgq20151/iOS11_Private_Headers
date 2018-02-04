/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageFillView : SXFillView {
    SXClippingView * _clippingView;
    SXContext * _context;
    SXImageFill * _imageFill;
    SXImageResource * _imageResource;
    SXImageView * _imageView;
}

@property (nonatomic, readonly) SXAnimatedImage *animatedImage;
@property (nonatomic, retain) SXClippingView *clippingView;
@property (nonatomic, readonly) SXContext *context;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) SXImageFill *imageFill;
@property (nonatomic, readonly) SXImageResource *imageResource;
@property (nonatomic, readonly) SXImageView *imageView;

- (void).cxx_destruct;
- (id)animatedImage;
- (id)clippingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)context;
- (void)dealloc;
- (id)dragable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fillFrameWithBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)image;
- (id)imageFill;
- (id)imageResource;
- (id)imageView;
- (id)initWithImageFill:(id)arg1 imageResource:(id)arg2 context:(id)arg3;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (void)setClippingView:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
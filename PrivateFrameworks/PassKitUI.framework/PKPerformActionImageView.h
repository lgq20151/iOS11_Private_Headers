/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformActionImageView : PKPerformActionBackdropView {
    UIImageView * _imageView;
    UIView * _roundedBackground;
}

- (void).cxx_destruct;
- (id)_resizeImage:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithImage:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithImage:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

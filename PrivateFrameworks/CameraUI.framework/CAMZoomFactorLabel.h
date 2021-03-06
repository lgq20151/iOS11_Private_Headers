/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomFactorLabel : UIView {
    UILabel * __label;
    double  _zoomFactor;
}

@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) double zoomFactor;

- (void).cxx_destruct;
- (id)_label;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_labelInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setTextColor:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (id)textColor;
- (double)zoomFactor;

@end

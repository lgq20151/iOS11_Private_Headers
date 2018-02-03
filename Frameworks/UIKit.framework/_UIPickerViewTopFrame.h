/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPickerViewTopFrame : UIView {
    double  _inset;
    UIImage * _leftImage;
    UIImage * _middleImage;
    UIImage * _rightImage;
    double  _shift;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInset:(double)arg1;
- (void)setLeftImage:(id)arg1 middleImage:(id)arg2 rightImage:(id)arg3;
- (void)setShift:(double)arg1;

@end

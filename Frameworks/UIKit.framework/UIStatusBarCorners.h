/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarCorners : UIView {
    int  _cornerAlignment;
    int  _cornerStyle;
    UIView * _leftCorner;
    UIView * _rightCorner;
}

+ (double)cornerRadius;

- (void).cxx_destruct;
- (id)_imageForCornerWithStyle:(int)arg1;
- (int)cornerStyle;
- (id)initForAlignment:(int)arg1 style:(int)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

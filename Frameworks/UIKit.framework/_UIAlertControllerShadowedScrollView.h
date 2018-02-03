/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerShadowedScrollView : UIScrollView {
    _UIAlertControllerGradientView * _shadowView;
    bool  _shouldPinToBottomOnResize;
}

@property (nonatomic) bool shouldPinToBottomOnResize;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForPinningToBottomWithNewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateScrollabilityAndShadow;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldPinToBottomOnResize:(bool)arg1;
- (bool)shouldPinToBottomOnResize;

// Image: /bootstrap/Library/SBInject/Eclipse.dylib

- (void)layoutSubviews;

@end

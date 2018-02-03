/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityHUDLayoutManager : NSObject

- (id)containerViewForHUD:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForHUD:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForHUD:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsetsForHUD:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewFrameForHUD:(id)arg1;
- (struct CGSize { double x1; double x2; })imageViewSizeForHUD:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrameForHUD:(id)arg1;
- (void)layoutSubviewsOfHUD:(id)arg1;
- (double)margin;
- (double)maxImageHeight;
- (unsigned long long)numberOfLinesForLabelInHUD:(id)arg1;

@end
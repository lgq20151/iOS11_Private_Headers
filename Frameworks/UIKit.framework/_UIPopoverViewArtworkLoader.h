/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverViewArtworkLoader : NSObject {
    NSString * _backgroundSelector;
    long long  _backgroundStyle;
}

+ (id)backgroundSelectorForBackgroundStyle:(long long)arg1;

- (void).cxx_destruct;
- (double)arrowBase;
- (double)arrowHeight;
- (double)arrowTopGradientEnd;
- (id)bottomArrowLeftEndCapView;
- (id)bottomArrowPinnedView;
- (id)bottomArrowRightEndCapView;
- (id)bottomArrowView;
- (double)bottomEndCapHeight;
- (double)capCornerRadius;
- (double)clampArrowBase;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inImageOfSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsCenterForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inImageOfSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithBackgroundStyle:(long long)arg1;
- (bool)modern;
- (double)noArrowTopGradientEnd;
- (id)rightArrowBottomEndCapView;
- (id)rightArrowPinnedBottomView;
- (id)rightArrowPinnedTopView;
- (id)rightArrowTopEndCapView;
- (id)rightArrowView;
- (double)shortArtArrowTopGradientEnd;
- (double)shortArtNoArrowTopGradientEnd;
- (double)shortArtRightArrowBase;
- (id)shortBottomArrowLeftEndCapView;
- (id)shortBottomArrowPinnedView;
- (id)shortBottomArrowRightEndCapView;
- (id)shortBottomArrowView;
- (id)shortRightArrowView;
- (id)shortTopArrowLeftEndCapView;
- (id)shortTopArrowPinnedView;
- (id)shortTopArrowRightEndCapView;
- (id)shortTopArrowView;
- (double)sideArrowStart;
- (id)templateImageForDirection:(id)arg1 shortArtwork:(bool)arg2;
- (id)topArrowLeftEndCapView;
- (id)topArrowPinnedView;
- (id)topArrowRightEndCapView;
- (double)topArrowStart;
- (id)topArrowView;
- (id)viewWithContentsImage:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 center:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 antialiasingMask:(unsigned int)arg4 directionSelector:(id)arg5;

@end

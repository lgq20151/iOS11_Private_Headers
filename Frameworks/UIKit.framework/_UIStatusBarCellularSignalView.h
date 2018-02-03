/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView {
    _UIStatusBarCycleAnimation * _cycleAnimation;
}

@property (nonatomic, retain) _UIStatusBarCycleAnimation *cycleAnimation;

- (void).cxx_destruct;
- (double)_barCornerRadius;
- (double)_barWidth;
- (void)_colorsDidChange;
- (double)_heightForBarAtIndex:(long long)arg1;
- (double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2;
- (double)_interspace;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_updateCycleAnimation;
- (void)_updateCycleAnimationVisibility;
- (void)_updateFromMode:(long long)arg1;
- (void)_visibilityDidChange;
- (id)accessibilityHUDRepresentation;
- (id)cycleAnimation;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setCycleAnimation:(id)arg1;

@end

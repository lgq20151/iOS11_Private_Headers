/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
    UIColor * _arrowBackgroundColor;
    UIView * _arrowBackgroundView;
    unsigned long long  _arrowDirection;
    double  _arrowOffset;
    UIView * _arrowView;
    bool  _arrowVisible;
    long long  _backgroundStyle;
    UIVisualEffectView * _blurView;
    bool  _debugMode;
    UIView * _leftCapView;
    UIColor * _popoverBackgroundColor;
    bool  _popoverBackgroundColorIsOpaque;
    UIView * _rightCapView;
    bool  useShortMode;
}

@property (nonatomic, copy) UIColor *arrowBackgroundColor;
@property (getter=isArrowVisible, nonatomic) bool arrowVisible;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIColor *contentBlendingColor;
@property (getter=isDebugModeEnabled, nonatomic) bool debugModeEnabled;
@property (nonatomic, copy) UIColor *popoverBackgroundColor;
@property (nonatomic) bool useShortMode;

+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;

- (void).cxx_destruct;
- (void)_configureEffectView;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsUpOrDown;
- (void)_loadNecessaryViews;
- (bool)_needsSeperateBlending;
- (void)_removeEffectView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (double)_shadowRadius;
- (void)_updateChrome;
- (id)arrowBackgroundColor;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (id)backgroundEffect;
- (long long)backgroundStyle;
- (id)contentBlendingColor;
- (void)didMoveToWindow;
- (bool)hasComponentViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isArrowVisible;
- (bool)isDebugModeEnabled;
- (bool)isPinned;
- (bool)isRightArrowPinnedToBottom;
- (bool)isRightArrowPinnedToTop;
- (void)layoutSubviews;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)popoverBackgroundColor;
- (void)setArrowBackgroundColor:(id)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowVisible:(bool)arg1;
- (void)setArrowVisible:(bool)arg1 animated:(bool)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setDebugModeEnabled:(bool)arg1;
- (void)setPopoverBackgroundColor:(id)arg1;
- (void)setUseShortMode:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)useShortMode;
- (bool)wouldPinForOffset:(double)arg1;

@end

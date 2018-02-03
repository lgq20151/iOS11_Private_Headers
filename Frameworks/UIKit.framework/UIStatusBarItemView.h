/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarItemView : UIView {
    bool  _allowsUpdates;
    double  _currentOverlap;
    UIStatusBarForegroundStyleAttributes * _foregroundStyle;
    struct CGContext { } * _imageContext;
    double  _imageContextScale;
    UIStatusBarItem * _item;
    _UILegibilityImageSet * _lastGeneratedTextImage;
    double  _lastGeneratedTextImageLetterSpacing;
    NSString * _lastGeneratedTextImageText;
    UIStatusBarLayoutManager * _layoutManager;
    _UILegibilityView * _legibilityView;
    bool  _visible;
}

@property (nonatomic) bool allowsUpdates;
@property (nonatomic, readonly) UIStatusBarForegroundStyleAttributes *foregroundStyle;
@property (nonatomic, readonly) UIStatusBarItem *item;
@property (nonatomic) UIStatusBarLayoutManager *layoutManager;
@property (getter=isVisible, nonatomic) bool visible;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_shouldReverseLayoutDirection;
- (id)accessibilityHUDRepresentation;
- (double)addContentOverlap:(double)arg1;
- (double)adjustFrameToNewSize:(double)arg1;
- (bool)allowsUpdates;
- (bool)allowsUserInteraction;
- (bool)animatesDataChange;
- (void)beginDisablingRasterization;
- (void)beginImageContextWithMinimumWidth:(double)arg1;
- (id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3;
- (void)clearCachedTextImage;
- (id)contentsImage;
- (double)currentLeftOverlap;
- (double)currentOverlap;
- (double)currentRightOverlap;
- (void)dealloc;
- (id)description;
- (void)endDisablingRasterization;
- (void)endImageContext;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (id)foregroundView;
- (id)imageFromImageContextClippedToWidth:(double)arg1;
- (id)imageWithShadowNamed:(id)arg1;
- (id)imageWithText:(id)arg1;
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;
- (bool)isVisible;
- (id)item;
- (id)layoutManager;
- (double)legibilityStrength;
- (long long)legibilityStyle;
- (double)maximumOverlap;
- (double)neededSizeForImageSet:(id)arg1;
- (void)performPendedActions;
- (double)resetContentOverlap;
- (void)setAllowsUpdates:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setCurrentOverlap:(double)arg1;
- (void)setLayerContentsImage:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)setVisible:(bool)arg1 settingAlpha:(bool)arg2;
- (double)shadowPadding;
- (double)standardPadding;
- (long long)textAlignment;
- (id)textFont;
- (long long)textStyle;
- (double)updateContentsAndWidth;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)updateForNewStyle:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

// Image: /bootstrap/Library/SBInject/AnemoneColors.dylib

- (id)foregroundStyle;

@end

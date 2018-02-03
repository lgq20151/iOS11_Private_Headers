/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbarButton : UIControl {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __additionalSelectionInsets;
    Class  _appearanceGuideClass;
    id  _appearanceStorage;
    bool  _barHeight;
    long long  _barStyle;
    bool  _bezel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _glowAdjust;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hitRect;
    UIView * _info;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _infoInsets;
    bool  _isInTopBar;
    UILabel * _label;
    double  _labelHeight;
    double  _maximumWidth;
    double  _minimumWidth;
    bool  _onState;
    long long  _style;
    UIColor * _toolbarTintColor;
}

@property (setter=_setAdditionalSelectionInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _additionalSelectionInsets;
@property (setter=_setAppearanceGuideClass:, nonatomic) Class _appearanceGuideClass;
@property (setter=_setCreatedByBarButtonItem:, nonatomic) bool _createdByBarButtonItem;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;

+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;
+ (id)defaultButtonFont;

- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (bool)_accessibilityShouldActivateOnHUDLift;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSelectionInsets;
- (void)_adjustPushButtonForMiniBar:(bool)arg1 isChangingBarHeight:(bool)arg2;
- (void)_adjustToolbarButtonInfo;
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(bool)arg1;
- (Class)_appearanceGuideClass;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_buttonBarHitRect;
- (bool)_canGetPadding;
- (bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (bool)_createdByBarButtonItem;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(bool)arg3;
- (id)_defaultTitleColorForState:(unsigned long long)arg1;
- (id)_defaultTitleShadowColorForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_defaultTitleShadowOffsetForState:(unsigned long long)arg1;
- (id)_info;
- (bool)_infoIsButton;
- (bool)_isBordered;
- (bool)_isBorderedOtherThanAccessibility;
- (id)_newButton;
- (double)_paddingForLeft:(bool)arg1;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBarHeight:(float)arg1;
- (void)_setButtonBarHitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCreatedByBarButtonItem:(bool)arg1;
- (void)_setInTopBar:(bool)arg1;
- (void)_setInfoExtremityWidth:(float)arg1 isMin:(bool)arg2;
- (void)_setInfoFlexibleWidth:(bool)arg1;
- (void)_setInfoWidth:(float)arg1;
- (void)_setLastHighlightSuccessful:(bool)arg1;
- (void)_setPressed:(bool)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTouchHasHighlighted:(bool)arg1;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(bool)arg1;
- (void)_setWantsLetterpressContent;
- (bool)_shouldApplyPadding;
- (bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3;
- (id)_tintColor;
- (struct UIOffset { double x1; double x2; })_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_updateInfoTextColorsForState:(unsigned long long)arg1;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (bool)_useBarHeight;
- (bool)_useSilverLook;
- (bool)_wantsAccessibilityButtonShapes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)dealloc;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(double)arg4 withBarStyle:(long long)arg5 withStyle:(long long)arg6 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(bool)arg11 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg12 glowInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg13 landscape:(bool)arg14;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBarStyle:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (void)setUseSelectedImage:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

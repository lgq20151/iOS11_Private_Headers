/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbar : UIView <UIAccessibilityHUDGestureHosting, UIBarPositioning, UIGestureRecognizerDelegatePrivate, _UIBarPositioningInternal> {
    id  __appearanceStorage;
    bool  __wantsLetterpressContent;
    UIAccessibilityHUDGestureManager * _axHUDGestureManager;
    NSArray * _backgroundEffects;
    long long  _barPosition;
    UIColor * _barTintColor;
    bool  _centerTextButtons;
    <UIToolbarDelegate> * _delegate;
    unsigned long long  _disableAutolayoutWarnings;
    NSArray * _items;
    UIView * _shadowView;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int isLocked : 1; 
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder : 1; 
        unsigned int disableBlurTinting : 1; 
    }  _toolbarFlags;
    _UIToolbarVisualProvider * _visualProvider;
}

@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *_backdropViewLayerGroupName;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (nonatomic, readonly) long long _barTranslucence;
@property (setter=_setDisableBlurTinting:, nonatomic) bool _disableBlurTinting;
@property (setter=_setHidesShadow:, nonatomic) bool _hidesShadow;
@property (getter=_isLocked, setter=_setLocked:, nonatomic) bool _locked;
@property (setter=_setShadowView:, nonatomic, retain) UIView *_shadowView;
@property (nonatomic, readonly) bool _shouldStretchDuringCrossfadeTransition;
@property (setter=_setWantsLetterpressContent:, nonatomic) bool _wantsLetterpressContent;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, readonly) long long barPosition;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) bool centerTextButtons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIToolbarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (getter=isMinibar, nonatomic, readonly) bool minibar;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) bool translucent;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)defaultButtonFont;
+ (double)defaultHeight;
+ (double)defaultHeightForBarSize:(int)arg1;

- (void).cxx_destruct;
- (id)__appearanceStorage;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (id)_backdropViewLayerGroupName;
- (id)_backgroundView;
- (long long)_barPosition;
- (long long)_barTranslucence;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (double)_defaultAutolayoutSpacing;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_disableBlurTinting;
- (void)_doCommonToolbarInit;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfBarButtonItem:(id)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(bool)arg1 wasMinibar:(bool)arg2;
- (void)_frameOrCenterChanged;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hidesShadow;
- (bool)_isLocked;
- (id)_itemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_linkedBeforeWhitetailAndInitializedFromCoder;
- (void)_performBlockAllowingConstraintManipulation:(id /* block */)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionToolbarButtonsAndResetFontScaleAdjustment:(bool)arg1;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setDisableBlurTinting:(bool)arg1;
- (void)_setForceTopBarAppearance:(bool)arg1;
- (void)_setHidesShadow:(bool)arg1;
- (void)_setLocked:(bool)arg1;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setShadowView:(id)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setWantsLetterpressContent:(bool)arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (id)_shadowView;
- (bool)_shouldStretchDuringCrossfadeTransition;
- (bool)_subclassImplementsDrawRect;
- (void)_updateBackgroundView;
- (void)_updateBarForStyle;
- (bool)_wantsLetterpressContent;
- (void)addConstraint:(id)arg1;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backgroundEffects;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)barPosition;
- (long long)barStyle;
- (bool)centerTextButtons;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withItemList:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isMinibar;
- (bool)isTranslucent;
- (id)items;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeConstraint:(id)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCenterTextButtons:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /bootstrap/Library/SBInject/AnemoneColors.dylib

- (id)barTintColor;
- (void)layoutSubviews;

@end

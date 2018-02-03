/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIButton : UIControl <NSCoding, UIAccessibilityContentSizeCategoryImageAdjusting, UIGestureRecognizerDelegate, _UIFloatingContentViewDelegate> {
    long long  __imageContentMode;
    UIColor * __plainButtonBackgroundColor;
    UIImageView * _backgroundView;
    struct { 
        unsigned int reversesTitleShadowWhenHighlighted : 1; 
        unsigned int adjustsImageWhenHighlighted : 1; 
        unsigned int adjustsImageWhenDisabled : 1; 
        unsigned int autosizeToFit : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int showsTouchWhenHighlighted : 1; 
        unsigned int buttonType : 8; 
        unsigned int shouldHandleScrollerMouseEvent : 1; 
        unsigned int titleFrozen : 1; 
        unsigned int resendTraitToImageViews : 2; 
        unsigned int animateNextHighlightChange : 1; 
        unsigned int blurEnabled : 1; 
        unsigned int visualEffectViewEnabled : 1; 
        unsigned int suppressAccessibilityUnderline : 1; 
        unsigned int requiresLayoutForPropertyChange : 1; 
        unsigned int adjustsImageSizeForAccessibilityContentSizeCategory : 1; 
        unsigned int disableAutomaticTitleAnimations : 1; 
    }  _buttonFlags;
    UIVisualEffectView * _contentBackdropView;
    NSArray * _contentConstraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    struct __CFDictionary { } * _contentLookup;
    UIView * _effectiveContentView;
    unsigned long long  _externalFlatEdge;
    _UIFloatingContentView * _floatingContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageEdgeInsets;
    UIImageView * _imageView;
    bool  _initialized;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _internalTitlePaddingInsets;
    unsigned long long  _lastDrawingControlState;
    UIFont * _lazyTitleViewFont;
    _UIButtonMaskAnimationView * _maskAnimationView;
    UITapGestureRecognizer * _selectGestureRecognizer;
    UIView * _selectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleEdgeInsets;
    UILabel * _titleView;
}

@property (setter=_setContentConstraints:, nonatomic, copy) NSArray *_contentConstraints;
@property (nonatomic, readonly, retain) UIColor *_currentImageColor;
@property (getter=_disableAutomaticTitleAnimations, setter=_setDisableAutomaticTitleAnimations:, nonatomic) bool _disableAutomaticTitleAnimations;
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge;
@property (setter=_setImageContentMode:, nonatomic) long long _imageContentMode;
@property (setter=_setInternalTitlePaddingInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _internalTitlePaddingInsets;
@property (getter=_plainButtonBackgroundColor, setter=_setPlainButtonBackgroundColor:, nonatomic, retain) UIColor *_plainButtonBackgroundColor;
@property (setter=_setWantsAccessibilityUnderline:, nonatomic) bool _wantsAccessibilityUnderline;
@property (nonatomic) bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) bool adjustsImageWhenDisabled;
@property (nonatomic) bool adjustsImageWhenHighlighted;
@property (nonatomic, readonly) long long buttonType;
@property (getter=_isContentBackgroundHidden, setter=_setContentBackgroundHidden:, nonatomic) bool contentBackgroundHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, readonly) NSAttributedString *currentAttributedTitle;
@property (nonatomic, readonly) UIImage *currentBackgroundImage;
@property (nonatomic, readonly) UIImage *currentImage;
@property (nonatomic, readonly) NSString *currentTitle;
@property (nonatomic, readonly) UIColor *currentTitleColor;
@property (nonatomic, readonly) UIColor *currentTitleShadowColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageEdgeInsets;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) bool reversesTitleShadowWhenHighlighted;
@property (nonatomic) bool showsTouchWhenHighlighted;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleEdgeInsets;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (bool)_buttonTypeIsModernUI:(long long)arg1;
+ (id)_checkmarkImage;
+ (id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (double)_defaultNeighborSpacingForAxis:(long long)arg1;
+ (id)_defaultNormalTitleColor;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_detailDisclosureImage;
+ (id)_exclamationMarkImage;
+ (id)_infoDarkImage;
+ (id)_infoLightImage;
+ (id)_minusImage;
+ (id)_plusImage;
+ (id)_questionMarkImage;
+ (id)_selectedIndicatorImage;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3 baseAlpha:(double)arg4;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3 highlightBlock:(id /* block */)arg4;
+ (id)_xImage;
+ (id)buttonWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (bool)_accessibilityShouldActivateOnHUDLift;
- (bool)_alwaysHandleScrollerMouseEvent;
- (void)_applyAppropriateChargeForButton;
- (void)_applyCarPlaySystemButtonCustomizations;
- (id)_archivableContent:(id*)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(id)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(bool*)arg2;
- (id)_backgroundView;
- (void)_beginTitleAnimation;
- (bool)_blurEnabled;
- (id)_borderColorForState:(unsigned long long)arg1;
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_buttonType;
- (bool)_canHaveTitle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedHighlightBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_combinedContentPaddingInsets;
- (id)_contentBackdropView;
- (id)_contentConstraints;
- (id)_contentForState:(unsigned long long)arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createPreparedImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_currentImageColor;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_disableAutomaticTitleAnimations;
- (double)_drawingStrokeForState:(unsigned long long)arg1;
- (double)_drawingStrokeForStyle:(long long)arg1;
- (long long)_drawingStyleForState:(unsigned long long)arg1;
- (long long)_drawingStyleForStroke:(double)arg1;
- (id)_effectiveContentView;
- (struct CGSize { double x1; double x2; })_effectiveSizeForImage:(id)arg1;
- (id)_encodableSubviews;
- (id)_externalBorderColorForState:(unsigned long long)arg1;
- (long long)_externalDrawingStyleForState:(unsigned long long)arg1;
- (unsigned long long)_externalFlatEdge;
- (id)_externalFocusedTitleColor;
- (id)_externalImageColorForState:(unsigned long long)arg1;
- (id)_externalTitleColorForState:(unsigned long long)arg1;
- (id)_externalUnfocusedBorderColor;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_floatingContentView;
- (id)_font;
- (void)_gestureRecognizerFailed:(id)arg1;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hasDrawingStyle;
- (bool)_hasHighlightColor;
- (bool)_hasImageForProperty:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBoundsForDrawingStyle;
- (double)_highlightCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightRectForImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightRectForTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_imageColorForState:(unsigned long long)arg1;
- (long long)_imageContentMode;
- (id)_imageForState:(unsigned long long)arg1 usesImageForNormalState:(bool*)arg2;
- (bool)_imageNeedsCompositingModeWhenSelected;
- (id)_imageView;
- (void)_installSelectGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_internalTitlePaddingInsets;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateContentConstraints;
- (bool)_isCarPlaySystemTypeButton;
- (bool)_isContentBackgroundHidden;
- (bool)_isEffectivelyDisabledExternalButton;
- (bool)_isExternalRoundedRectButtonWithPressednessState;
- (bool)_isInCarPlay;
- (bool)_isModernButton;
- (bool)_isTitleFrozen;
- (void)_layoutBackgroundImageView;
- (void)_layoutContentBackdropView;
- (id)_layoutDebuggingTitle;
- (void)_layoutImageView;
- (void)_layoutTitleView;
- (id)_letterpressStyleForState:(unsigned long long)arg1;
- (bool)_likelyToHaveTitle;
- (long long)_lineBreakMode;
- (id)_newImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_newLabelWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathImageEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathTitleEdgeInsets;
- (id)_plainButtonBackgroundColor;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_prepareMaskAnimationViewIfNecessary;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (bool)_requiresLayoutForPropertyChange;
- (struct CGSize { double x1; double x2; })_roundSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_scaleFactorForImage;
- (void)_selectGestureChanged:(id)arg1;
- (double)_selectedIndicatorAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBlurEnabled:(bool)arg1;
- (void)_setButtonType:(long long)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setContentBackgroundHidden:(bool)arg1;
- (void)_setContentConstraints:(id)arg1;
- (void)_setContentHuggingPriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)_setDisableAutomaticTitleAnimations:(bool)arg1;
- (void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)_setExternalFlatEdge:(unsigned long long)arg1;
- (void)_setFont:(id)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 deferLayout:(bool)arg2;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageContentMode:(long long)arg1;
- (void)_setInternalTitlePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setLineBreakMode:(long long)arg1;
- (void)_setPlainButtonBackgroundColor:(id)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(bool)arg1;
- (void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleFrozen:(bool)arg1;
- (void)_setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVisualEffectViewEnabled:(bool)arg1 backgroundColor:(id)arg2;
- (void)_setWantsAccessibilityUnderline:(bool)arg1;
- (id)_setupBackgroundView;
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;
- (void)_setupImageView;
- (void)_setupPressednessForState:(unsigned long long)arg1;
- (void)_setupTitleView;
- (void)_setupTitleViewRequestingLayout:(bool)arg1;
- (id)_shadowColorForState:(unsigned long long)arg1;
- (bool)_shouldDefaultToTemplatesForImageViewBackground:(bool)arg1;
- (bool)_shouldHaveFloatingAppearance;
- (bool)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
- (bool)_shouldUpdatePressedness;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (bool)_textNeedsCompositingModeWhenSelected;
- (void)_titleAttributesChanged;
- (void)_titleAttributesThatDoNotAffectSizeOrLayoutChanged;
- (id)_titleColorForState:(unsigned long long)arg1;
- (id)_titleForState:(unsigned long long)arg1;
- (id)_titleOrImageViewForBaselineLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calculatePositionForEmptyTitle:(bool)arg2;
- (struct CGSize { double x1; double x2; })_titleShadowOffset;
- (id)_titleView;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateBackgroundImageView;
- (void)_updateContentBackdropView;
- (void)_updateEffectsForImageView:(id)arg1 background:(bool)arg2;
- (void)_updateImageView;
- (void)_updateMaskState;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (void)_updateTitleView;
- (bool)_visualEffectViewEnabled;
- (bool)_wantsAccessibilityUnderline;
- (bool)_wantsContentBackdropView;
- (void)_willMoveToWindow:(id)arg1;
- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (bool)adjustsImageWhenDisabled;
- (bool)adjustsImageWhenHighlighted;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)attributedTitleForState:(unsigned long long)arg1;
- (bool)autosizesToFit;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)buttonType;
- (bool)canBecomeFocused;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)currentAttributedTitle;
- (id)currentBackgroundImage;
- (id)currentImage;
- (id)currentTitle;
- (id)currentTitleColor;
- (id)currentTitleShadowColor;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)font;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageEdgeInsets;
- (id)imageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isSpringLoaded;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (struct CGPoint { double x1; double x2; })pressFeedbackPosition;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)reversesTitleShadowWhenHighlighted;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;
- (void)setAdjustsImageWhenDisabled:(bool)arg1;
- (void)setAdjustsImageWhenHighlighted:(bool)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAutosizesToFit:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setDisabledDimsImage:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNeedsLayout;
- (void)setReversesTitleShadowWhenHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowPressFeedback:(bool)arg1;
- (void)setShowsTouchWhenHighlighted:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsTouchWhenHighlighted;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleColorForState:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleEdgeInsets;
- (id)titleForState:(unsigned long long)arg1;
- (id)titleLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })titleShadowOffset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;

@end

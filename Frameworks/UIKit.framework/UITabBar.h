/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBar : UIView <_UIShadowedView> {
    _UITabBarAppearanceStorage * _appearanceStorage;
    NSArray * _backgroundEffects;
    long long  _barMetrics;
    long long  _barOrientation;
    NSArray * _customizationItems;
    UIView * _customizeView;
    <UITabBarDelegate> * _delegate;
    bool  _hidesShadow;
    long long  _imageStyle;
    double  _itemDimension;
    long long  _itemPositioning;
    double  _itemSpacing;
    NSArray * _items;
    unsigned long long  _preferredFocusHeading;
    bool  _scrollsItems;
    UITabBarItem * _selectedItem;
    bool  _showsHighlightedState;
    struct { 
        unsigned int wasEnabled : 1; 
        unsigned int customized : 1; 
        unsigned int downButtonSentAction : 1; 
        unsigned int isLocked : 1; 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int backgroundNeedsUpdate : 1; 
        unsigned int hiddenAwaitingFocus : 1; 
        unsigned int focusedItemHighlightShouldBeVisible : 1; 
        unsigned int hasVibrantLabels : 1; 
        unsigned int blurDisabled : 1; 
        unsigned int disableBlurTinting : 1; 
        unsigned int pendingFocusAction : 1; 
        unsigned int springLoaded : 1; 
    }  _tabBarFlags;
    long long  _tabBarSizing;
    _UITabBarVisualProvider * _visualProvider;
}

@property (setter=_setAccessoryView:, nonatomic, retain) UIView *_accessoryView;
@property (setter=_setBackgroundNeedsUpdate:, nonatomic) bool _backgroundNeedsUpdate;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setBarMetrics:, nonatomic) long long _barMetrics;
@property (setter=_setBarOrientation:, nonatomic) long long _barOrientation;
@property (setter=_setBlurEnabled:, nonatomic) bool _blurEnabled;
@property (setter=_setDisableBlurTinting:, nonatomic) bool _disableBlurTinting;
@property (setter=_setHidesShadow:, nonatomic) bool _hidesShadow;
@property (setter=_setImageStyle:, nonatomic) long long _imageStyle;
@property (setter=_setInterTabButtonSpacing:, nonatomic) double _interTabButtonSpacing;
@property (setter=_setNextSelectionSlideDuration:, nonatomic) double _nextSelectionSlideDuration;
@property (setter=_setScrollsItems:, nonatomic) bool _scrollsItems;
@property (setter=_setShowsHighlightedState:, nonatomic) bool _showsHighlightedState;
@property (setter=_setTabBarSizing:, nonatomic) long long _tabBarSizing;
@property (setter=_setTabButtonWidth:, nonatomic) double _tabButtonWidth;
@property (setter=_setVibrantLabels:, nonatomic) bool _vibrantLabels;
@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *backdropViewLayerGroupName;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (getter=isCustomizing, nonatomic, readonly) bool customizing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITabBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_focusedItemHighlightShouldBeVisible, setter=_setFocusedItemHightlightShouldBeVisible:, nonatomic) bool focusedItemHighlightShouldBeVisible;
@property (getter=_focusedTabBarItem, nonatomic, readonly) UITabBarItem *focusedTabBarItem;
@property (readonly) unsigned long long hash;
@property (getter=_isHiddenAwaitingFocus, setter=_setHiddenAwaitingFocus:, nonatomic) bool hiddenAwaitingFocus;
@property (nonatomic) long long itemPositioning;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemWidth;
@property (nonatomic, copy) NSArray *items;
@property (getter=isLocked, nonatomic) bool locked;
@property (getter=_pendingFocusAction, setter=_setPendingFocusAction:, nonatomic) bool pendingFocusAction;
@property (getter=_preferredFocusHeading, setter=_setPreferredFocusHeading:, nonatomic) unsigned long long preferredFocusHeading;
@property (nonatomic, retain) UIColor *selectedImageTintColor;
@property (nonatomic) UITabBarItem *selectedItem;
@property (nonatomic, retain) UIImage *selectionIndicatorImage;
@property (nonatomic, retain) UIImage *shadowImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) bool translucent;
@property (nonatomic, copy) UIColor *unselectedItemTintColor;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_initializeForIdiom:(long long)arg1;
+ (id)_unselectedTabTintColorForView:(id)arg1;
+ (id)_visualProviderForTabBar:(id)arg1;

- (void).cxx_destruct;
- (void)_accessibilityButtonShapesEnabledDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (id)_accessoryView;
- (void)_adjustButtonSelection:(id)arg1;
- (id)_appearanceStorage;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (id)_backdropViewLayerGroupName;
- (bool)_backgroundNeedsUpdate;
- (id)_backgroundView;
- (long long)_barMetrics;
- (long long)_barOrientation;
- (bool)_blurEnabled;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 swapping:(bool)arg3;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (double)_defaultAutolayoutSpacing;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_disableBlurTinting;
- (void)_dismissCustomizeSheet:(bool)arg1;
- (id)_dividerImageForLeftButtonState:(unsigned long long)arg1 rightButtonState:(unsigned long long)arg2;
- (void)_doCommonTabBarInit;
- (long long)_effectiveBarOrientation;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChange;
- (id)_effectiveUnselectedLabelTintColor;
- (id)_effectiveUnselectedTabTintColorConsideringView:(id)arg1;
- (id)_effectiveUnselectedTintColor;
- (void)_ensureUnfocusedItemsAreNotSelected;
- (bool)_focusedItemHighlightShouldBeVisible;
- (id)_focusedTabBarItem;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hidesShadow;
- (long long)_imageStyle;
- (double)_interTabButtonSpacing;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isHiddenAwaitingFocus;
- (bool)_isTranslucent;
- (void)_makeCurrentButtonFirstResponder;
- (double)_nextSelectionSlideDuration;
- (bool)_pendingFocusAction;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionAllItems;
- (unsigned long long)_preferredFocusHeading;
- (double)_scaleFactorForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 maxWidth:(double)arg4;
- (bool)_scrollsItems;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setAccessoryView:(id)arg1;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundImage:(id)arg1;
- (void)_setBackgroundNeedsUpdate:(bool)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarMetrics:(long long)arg1;
- (void)_setBarOrientation:(long long)arg1;
- (void)_setBlurEnabled:(bool)arg1;
- (void)_setDisableBlurTinting:(bool)arg1;
- (void)_setDividerImage:(id)arg1 forLeftButtonState:(unsigned long long)arg2 rightButtonState:(unsigned long long)arg3;
- (void)_setFocusedItemHightlightShouldBeVisible:(bool)arg1;
- (void)_setHiddenAwaitingFocus:(bool)arg1;
- (void)_setHidesShadow:(bool)arg1;
- (void)_setImageStyle:(long long)arg1;
- (void)_setInterTabButtonSpacing:(double)arg1;
- (void)_setLabelFont:(id)arg1;
- (void)_setLabelShadowColor:(id)arg1;
- (void)_setLabelShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLabelTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)_setNextSelectionSlideDuration:(double)arg1;
- (void)_setPendingFocusAction:(bool)arg1;
- (void)_setPreferredFocusHeading:(unsigned long long)arg1;
- (void)_setScrollsItems:(bool)arg1;
- (void)_setSelectionIndicatorImage:(id)arg1;
- (void)_setShadowAlpha:(double)arg1;
- (void)_setShowsHighlightedState:(bool)arg1;
- (void)_setTabBarSizing:(long long)arg1;
- (void)_setTabButtonWidth:(double)arg1;
- (void)_setVibrantLabels:(bool)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (double)_shadowAlpha;
- (id)_shadowView;
- (bool)_showsHighlightedState;
- (bool)_subclassImplementsDrawRect;
- (void)_tabBarFinishedAnimating;
- (id)_tabBarItemForButtonAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_tabBarSizing;
- (double)_tabButtonWidth;
- (double)_totalDimensionForItems:(id)arg1 spacing:(double)arg2 dimension:(double)arg3 scaleFactor:(double)arg4;
- (void)_updateTabBarItemView:(id)arg1;
- (void)_updateTintedImages:(id)arg1 selected:(bool)arg2;
- (bool)_vibrantLabels;
- (void)addConstraint:(id)arg1;
- (id)backgroundEffects;
- (id)backgroundImage;
- (long long)barStyle;
- (void)beginCustomizingItems:(id)arg1;
- (bool)canBecomeFocused;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissCustomizeSheet:(bool)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)endCustomizingAnimated:(bool)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCustomizing;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isLocked;
- (bool)isSpringLoaded;
- (bool)isTranslucent;
- (long long)itemPositioning;
- (double)itemSpacing;
- (double)itemWidth;
- (id)items;
- (id)preferredFocusedView;
- (void)removeConstraint:(id)arg1;
- (id)selectedImageTintColor;
- (id)selectedItem;
- (id)selectionIndicatorImage;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItemPositioning:(long long)arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setItemWidth:(double)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setLocked:(bool)arg1;
- (void)setSelectedImageTintColor:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)setUnselectedItemTintColor:(id)arg1;
- (id)shadowImage;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unselectedItemTintColor;

// Image: /bootstrap/Library/SBInject/AnemoneColors.dylib

- (id)barTintColor;
- (void)layoutSubviews;

@end

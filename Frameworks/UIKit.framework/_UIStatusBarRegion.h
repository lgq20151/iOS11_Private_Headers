/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarRegion : NSObject {
    _UIStatusBarAction * _action;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _actionInsets;
    double  _alpha;
    UIView * _backgroundView;
    UIView * _contentView;
    NSSet * _dependentRegionIdentifiers;
    NSMutableIndexSet * _disablingTokens;
    NSOrderedSet * _displayItems;
    UIView * _frozenView;
    UIView * _highlightView;
    NSString * _identifier;
    <_UIStatusBarRegionLayout> * _layout;
    UILayoutGuide * _layoutGuide;
    _UIStatusBarStyleAttributes * _overriddenStyleAttributes;
    _UIStatusBar * _statusBar;
}

@property (nonatomic, retain) _UIStatusBarAction *action;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } actionInsets;
@property (nonatomic) double alpha;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) NSArray *currentEnabledDisplayItems;
@property (nonatomic, retain) NSSet *dependentRegionIdentifiers;
@property (nonatomic, retain) NSMutableIndexSet *disablingTokens;
@property (nonatomic, readonly, copy) NSDictionary *displayItemAbsoluteFrames;
@property (nonatomic, retain) NSOrderedSet *displayItems;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSArray *enabledDisplayItems;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (nonatomic, retain) UIView *frozenView;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) <_UIStatusBarRegionLayout> *layout;
@property (nonatomic, retain) UILayoutGuide *layoutGuide;
@property (nonatomic, readonly) <UILayoutItem> *layoutItem;
@property (nonatomic, readonly) _UIStatusBarDisplayItem *overflowedDisplayItem;
@property (nonatomic, retain) _UIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (nonatomic) _UIStatusBar *statusBar;

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 atBack:(bool)arg2;
- (id)action;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })actionInsets;
- (double)alpha;
- (id)backgroundView;
- (id)containerView;
- (id)contentView;
- (id)currentEnabledDisplayItems;
- (id)dependentRegionIdentifiers;
- (id)description;
- (void)disableWithToken:(unsigned long long)arg1;
- (id)disablingTokens;
- (id)displayItemAbsoluteFrames;
- (id)displayItemForHUDAtPointInContentView:(struct CGPoint { double x1; double x2; })arg1;
- (id)displayItems;
- (void)enableWithToken:(unsigned long long)arg1;
- (id)enabledDisplayItems;
- (id)frozenView;
- (id)highlightView;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEnabled;
- (bool)isFrozen;
- (id)layout;
- (id)layoutGuide;
- (id)layoutItem;
- (id)overflowedDisplayItem;
- (id)overriddenStyleAttributes;
- (void)setAction:(id)arg1;
- (void)setActionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAlpha:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDependentRegionIdentifiers:(id)arg1;
- (void)setDisablingTokens:(id)arg1;
- (void)setDisplayItems:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setFrozenView:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutGuide:(id)arg1;
- (void)setOverriddenStyleAttributes:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)statusBar;

@end

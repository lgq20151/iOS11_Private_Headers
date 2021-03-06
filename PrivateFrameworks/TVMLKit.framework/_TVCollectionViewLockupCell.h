/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCollectionViewLockupCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {
    UIView<TVAuxiliaryViewSelecting> * __selectingView;
    bool  _allowsFocus;
    UIMotionEffectGroup * _motionEffectGroup;
    bool  _pressIsAnimating;
    bool  _unpressOnEndAnimating;
}

@property (nonatomic) bool allowsFocus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)_attachMotionEffects;
- (void)_clearPressState;
- (bool)_descendantsShouldHighlight;
- (void)_detachMotionEffects;
- (void)_handleSelect;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)_selectingView;
- (void)_setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setFocused:(bool)arg1 animated:(bool)arg2 context:(id)arg3 coordinator:(id)arg4;
- (void)_showPressState;
- (bool)_unapplyMotionEffect:(id)arg1;
- (bool)allowsFocus;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAllowsFocus:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCollectionViewCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {
    bool  _allowsFocus;
    bool  _pressIsAnimating;
    UIView<TVAuxiliaryViewSelecting> * _selectingView;
    bool  _unpressOnEndAnimating;
}

@property (nonatomic) bool allowsFocus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView<TVAuxiliaryViewSelecting> *selectingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPressState;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)_selectingView;
- (void)_showPressState;
- (bool)allowsFocus;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)selectingView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAllowsFocus:(bool)arg1;
- (void)setSelectingView:(id)arg1;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIIconView : UIView {
    NSLayoutConstraint * _bottomConstraint;
    SearchUITableViewCell * _cell;
    SearchUIDragSource * _dragSource;
    SearchUIForceTouchGestureRecognizer * _forceTouchRecognizer;
    SearchUIAppIconButton * _iconButton;
    UIView * _iconButtonContainer;
    UILabel * _label;
    SFSearchResult * _result;
}

@property (retain) NSLayoutConstraint *bottomConstraint;
@property (retain) SearchUITableViewCell *cell;
@property (retain) SearchUIDragSource *dragSource;
@property (retain) SearchUIForceTouchGestureRecognizer *forceTouchRecognizer;
@property (retain) SearchUIAppIconButton *iconButton;
@property (retain) UIView *iconButtonContainer;
@property (retain) UILabel *label;
@property (retain) SFSearchResult *result;

- (void).cxx_destruct;
- (void)addForceTouchGestureRecognizerIfNecessaryForTraitCollection:(id)arg1;
- (id)bottomConstraint;
- (id)cell;
- (id)dragObject;
- (id)dragSource;
- (id)forceTouchRecognizer;
- (id)iconButton;
- (id)iconButtonContainer;
- (void)iconButtonPressed;
- (id)initWithStyle:(unsigned long long)arg1 cell:(id)arg2;
- (id)label;
- (id)labelFont;
- (id)result;
- (void)setBottomConstraint:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setDragSource:(id)arg1;
- (void)setForceTouchRecognizer:(id)arg1;
- (void)setIconButton:(id)arg1;
- (void)setIconButtonContainer:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setResult:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

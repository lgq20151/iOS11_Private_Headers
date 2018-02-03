/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGroupedBar : UIView <_UIButtonBarDelegate> {
    UIBlurEffect * _backgroundEffect;
    UIVisualEffectView * _backgroundView;
    _UIButtonBar * _centerBar;
    NSLayoutConstraint * _centeringConstraint;
    bool  _independentGroupSizes;
    double  _leadingBarSizeLimit;
    NSLayoutConstraint * _leadingLimitConstraint;
    _UIButtonBar * _leftBar;
    double  _margin;
    double  _minimumInterGroupSpace;
    double  _minimumInterItemSpace;
    _UIButtonBar * _rightBar;
    double  _trailingBarSizeLimit;
    NSLayoutConstraint * _trailingLimitConstraint;
    _UIButtonBarButtonVisualProvider * _visualProvider;
}

@property (nonatomic, copy) UIBlurEffect *backgroundEffect;
@property (nonatomic, copy) NSArray *centerBarButtonGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool independentGroupSizes;
@property (nonatomic, copy) NSArray *leadingBarButtonGroups;
@property (nonatomic) double leadingBarSizeLimit;
@property (nonatomic) double margin;
@property (nonatomic) double minimumInterGroupSpace;
@property (nonatomic) double minimumInterItemSpace;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trailingBarButtonGroups;
@property (nonatomic) double trailingBarSizeLimit;
@property (nonatomic, copy) _UIButtonBarButtonVisualProvider *visualProvider;

- (void).cxx_destruct;
- (id)_debug;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setButtonAlpha:(double)arg1;
- (void)_updateBarMargins;
- (void)_updateVisualProvider;
- (id)backgroundEffect;
- (void)buttonBarWillUpdateLayout:(id)arg1;
- (id)centerBarButtonGroups;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)arg1;
- (bool)independentGroupSizes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)leadingBarButtonGroups;
- (double)leadingBarSizeLimit;
- (double)margin;
- (double)minimumInterGroupSpace;
- (double)minimumInterItemSpace;
- (void)setBackgroundEffect:(id)arg1;
- (void)setCenterBarButtonGroups:(id)arg1;
- (void)setIndependentGroupSizes:(bool)arg1;
- (void)setLeadingBarButtonGroups:(id)arg1;
- (void)setLeadingBarSizeLimit:(double)arg1;
- (void)setMargin:(double)arg1;
- (void)setMinimumInterGroupSpace:(double)arg1;
- (void)setMinimumInterItemSpace:(double)arg1;
- (void)setTrailingBarButtonGroups:(id)arg1;
- (void)setTrailingBarSizeLimit:(double)arg1;
- (void)setVisualProvider:(id)arg1;
- (id)trailingBarButtonGroups;
- (double)trailingBarSizeLimit;
- (void)validateAllItems;
- (id)visualProvider;

@end

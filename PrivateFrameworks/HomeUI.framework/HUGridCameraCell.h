/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCameraCell : HUGridCell {
    NSArray * _allConstraints;
    HUCameraView * _cameraView;
    UILabel * _descriptionLabel;
    NADecayingTimer * _descriptionLabelUpdateTimer;
    HFItem * _item;
    NSArray * _labelsConstraints;
    HUGridCameraCellLayoutOptions * _layoutOptions;
    UILabel * _titleLabel;
    UIView * _topBarView;
}

@property (nonatomic, retain) NSArray *allConstraints;
@property (nonatomic, retain) HUCameraView *cameraView;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NADecayingTimer *descriptionLabelUpdateTimer;
@property (nonatomic, retain) NSArray *labelsConstraints;
@property (nonatomic, retain) HUGridCameraCellLayoutOptions *layoutOptions;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIView *topBarView;

+ (Class)layoutOptionsClass;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_animateTransitionWithView:(id)arg1 animations:(id /* block */)arg2;
- (id)_descriptionLabelText:(id)arg1;
- (void)_invalidateConstraints;
- (void)_updateCameraViewAppearance;
- (void)_updateLabelsAppearance;
- (id)allConstraints;
- (id)cameraView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cameraViewFrame;
- (void)dealloc;
- (id)descriptionLabel;
- (id)descriptionLabelUpdateTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)labelsConstraints;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (void)prepareForReuse;
- (void)setAllConstraints:(id)arg1;
- (void)setCameraView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionLabelUpdateTimer:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLabelsConstraints:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopBarView:(id)arg1;
- (void)tintColorDidChange;
- (id)titleLabel;
- (id)topBarView;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
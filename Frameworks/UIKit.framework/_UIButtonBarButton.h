/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIButtonBarButton : UIControl <UISpringLoadedInteractionSupporting> {
    bool  _backButton;
    NSLayoutConstraint * _heightMinimizingConstraint;
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
    _UIButtonBarButtonVisualProvider * _visualProvider;
    NSLayoutConstraint * _widthMinimizingConstraint;
}

@property (getter=isBackButton, nonatomic, readonly) bool backButton;
@property (getter=_buttonBarHitRect, setter=_setButtonBarHitRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } buttonBarHitRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLayoutConstraint *heightMinimizingConstraint;
@property (getter=isSpringLoaded, nonatomic) bool springLoaded;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) _UIButtonBarButtonVisualProvider *visualProvider;
@property (nonatomic, readonly) NSLayoutConstraint *widthMinimizingConstraint;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (void)_accessibilitySettingsChanged:(id)arg1;
- (bool)_accessibilityShouldActivateOnHUDLift;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_buttonBarHitRect;
- (void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(bool)arg3;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_setButtonBarHitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;
- (void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)heightMinimizingConstraint;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithVisualProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isBackButton;
- (bool)isSpringLoaded;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualProvider;
- (id)widthMinimizingConstraint;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

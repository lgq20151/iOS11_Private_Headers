/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlColorView : UIView <HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlInteractiveView> {
    unsigned long long  _activeMode;
    double  _circleRadius;
    HFColorPalette * _colorPalette;
    HUColorPaletteView * _colorPaletteView;
    HUQuickControlSegmentedControl * _colorPickerModeSegmentedControl;
    HUColorPickerView * _colorPickerView;
    <HUQuickControlColorViewInteractionDelegate> * _interactionDelegate;
    HUQuickControlColorViewProfile * _profile;
    HFColorPaletteColor * _selectedColor;
    bool  _showPickerModeControl;
    HUQuickControlCircleButton * _switchButton;
    NSLayoutConstraint * _switchButtonHeightConstraint;
    NSLayoutConstraint * _switchButtonWidthConstraint;
}

@property (nonatomic) unsigned long long activeMode;
@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *activeView;
@property (nonatomic) double circleRadius;
@property (nonatomic, retain) HFColorPalette *colorPalette;
@property (nonatomic, retain) HUColorPaletteView *colorPaletteView;
@property (nonatomic, retain) HUQuickControlSegmentedControl *colorPickerModeSegmentedControl;
@property (nonatomic, retain) HUColorPickerView *colorPickerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUQuickControlColorViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, copy) HUQuickControlColorViewProfile *profile;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic, retain) HFColorPaletteColor *selectedColor;
@property (getter=isSelectedColorInPalette, nonatomic, readonly) bool selectedColorInPalette;
@property (nonatomic) bool showPickerModeControl;
@property (nonatomic) long long sizeSubclass;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUQuickControlCircleButton *switchButton;
@property (nonatomic, retain) NSLayoutConstraint *switchButtonHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *switchButtonWidthConstraint;
@property (getter=isUserInteractionActive, nonatomic, readonly) bool userInteractionActive;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)_allControlViews;
- (void)_configureConstraints;
- (void)_createColorPickerModeSegmentedControlIfNecessary;
- (double)_switchButtonFontSize;
- (void)_switchButtonTapped:(id)arg1;
- (void)_updateColorPickerModeSwitchView;
- (void)_updateSwitchButtonColor;
- (void)_updateSwitchButtonText;
- (unsigned long long)activeMode;
- (id)activeView;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (double)circleRadius;
- (id)colorPalette;
- (id)colorPaletteView;
- (id)colorPickerModeSegmentedControl;
- (id)colorPickerView;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 colorPickerModeDidChange:(unsigned long long)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(bool)arg2 forFirstTouch:(bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (id)interactionDelegate;
- (bool)isSelectedColorInPalette;
- (bool)isUserInteractionActive;
- (void)layoutSubviews;
- (id)profile;
- (id)selectedColor;
- (void)setActiveMode:(unsigned long long)arg1;
- (void)setCircleRadius:(double)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setColorPaletteView:(id)arg1;
- (void)setColorPickerModeSegmentedControl:(id)arg1;
- (void)setColorPickerView:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShowPickerModeControl:(bool)arg1;
- (void)setSwitchButton:(id)arg1;
- (void)setSwitchButtonHeightConstraint:(id)arg1;
- (void)setSwitchButtonWidthConstraint:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)showPickerModeControl;
- (id)switchButton;
- (id)switchButtonHeightConstraint;
- (id)switchButtonWidthConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (id)value;

@end
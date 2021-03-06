/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVRoutePickerView : UIView {
    UIColor * _activeTintColor;
    bool  _airPlayActive;
    UIButton * _customButton;
    <AVRoutePickerViewDelegate> * _delegate;
    UIButton * _routePickerButton;
    AVMicaPackage * _routePickerButtonMicaPackage;
    long long  _routePickerButtonStyle;
    MPMediaControlsViewController * _routePickerViewController;
}

@property (nonatomic, retain) UIColor *activeTintColor;
@property (nonatomic) <AVRoutePickerViewDelegate> *delegate;
@property (nonatomic) long long routePickerButtonStyle;

- (void).cxx_destruct;
- (void)_createOrUpdateRoutePickerButton;
- (id)_defaultActiveTintColor;
- (void)_outputContextDevicesDidChange:(id)arg1;
- (void)_registerNotifications;
- (void)_routePickerButtonTapped:(id)arg1;
- (void)_unregisterNotifications;
- (void)_updateAirPlayActive;
- (id)activeTintColor;
- (id)customButton;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAirPlayActive;
- (void)layoutSubviews;
- (long long)routePickerButtonStyle;
- (void)setActiveTintColor:(id)arg1;
- (void)setAirPlayActive:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRoutePickerButtonStyle:(long long)arg1;
- (void)tintColorDidChange;
- (void)updateButtonAppearance;

@end

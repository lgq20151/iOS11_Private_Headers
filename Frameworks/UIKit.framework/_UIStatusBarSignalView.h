/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarSignalView : UIView <_UIStatusBarDisplayable> {
    UIColor * _activeColor;
    UIColor * _inactiveColor;
    long long  _numberOfActiveBars;
    long long  _numberOfBars;
    long long  _signalMode;
    bool  _smallSize;
    bool  _visible;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic, copy) UIColor *activeColor;
@property (nonatomic, readonly) double baselineOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *inactiveColor;
@property (nonatomic) long long numberOfActiveBars;
@property (nonatomic) long long numberOfBars;
@property (nonatomic) long long signalMode;
@property (nonatomic) bool smallSize;
@property (readonly) Class superclass;
@property (nonatomic) bool visible;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)_colorsDidChange;
- (void)_commonInit;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_updateFromMode:(long long)arg1;
- (void)_visibilityDidChange;
- (id)activeColor;
- (id)inactiveColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfActiveBars;
- (long long)numberOfBars;
- (void)setActiveColor:(id)arg1;
- (void)setInactiveColor:(id)arg1;
- (void)setNumberOfActiveBars:(long long)arg1;
- (void)setNumberOfBars:(long long)arg1;
- (void)setSignalMode:(long long)arg1;
- (void)setSmallSize:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (long long)signalMode;
- (bool)smallSize;
- (bool)visible;

@end

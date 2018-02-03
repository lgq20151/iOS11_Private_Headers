/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBatteryView : UIView {
    _UIBatteryViewAXHUDImageCacheInfo * _accessibilityHUDImageCacheInfo;
    UIColor * _bodyColor;
    CAShapeLayer * _bodyLayer;
    CAShapeLayer * _boltLayer;
    CAShapeLayer * _boltMaskLayer;
    double  _chargePercent;
    long long  _chargingState;
    bool  _compact;
    UIColor * _fillColor;
    CALayer * _fillLayer;
    UIColor * _pinColor;
    CAShapeLayer * _pinLayer;
    bool  _saverModeActive;
    bool  _showsInlineChargingIndicator;
    long long  _sizeCategory;
}

@property (nonatomic, retain) _UIBatteryViewAXHUDImageCacheInfo *accessibilityHUDImageCacheInfo;
@property (nonatomic, copy) UIColor *bodyColor;
@property (nonatomic, retain) CAShapeLayer *bodyLayer;
@property (nonatomic, retain) CAShapeLayer *boltLayer;
@property (nonatomic, retain) CAShapeLayer *boltMaskLayer;
@property (nonatomic) double chargePercent;
@property (nonatomic) long long chargingState;
@property (nonatomic) bool compact;
@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic, retain) CALayer *fillLayer;
@property (getter=isLowBattery, nonatomic, readonly) bool lowBattery;
@property (nonatomic, copy) UIColor *pinColor;
@property (nonatomic, retain) CAShapeLayer *pinLayer;
@property (nonatomic) bool saverModeActive;
@property (nonatomic) bool showsInlineChargingIndicator;
@property (nonatomic) long long sizeCategory;

- (void).cxx_destruct;
- (id)_batteryColor;
- (struct CGSize { double x1; double x2; })_batterySizeForTraitCollection:(id)arg1;
- (void)_commonInit;
- (double)_insideCornerRadiusForTraitCollection:(id)arg1;
- (double)_lineWidthForTraitCollection:(id)arg1;
- (double)_marginForTraitCollection:(id)arg1;
- (double)_outsideCornerRadiusForTraitCollection:(id)arg1;
- (struct CGSize { double x1; double x2; })_pinSizeForTraitCollection:(id)arg1;
- (void)_unflipBoltIfNecessary;
- (void)_updateBodyColors;
- (void)_updateBolt;
- (void)_updateFillColor;
- (void)_updateFillLayer;
- (id)accessibilityHUDImageCacheInfo;
- (id)accessibilityHUDRepresentation;
- (id)bodyColor;
- (id)bodyLayer;
- (id)boltLayer;
- (id)boltMaskLayer;
- (double)chargePercent;
- (long long)chargingState;
- (bool)compact;
- (id)fillColor;
- (id)fillLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSizeCategory:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLowBattery;
- (void)layoutSubviews;
- (id)pinColor;
- (id)pinLayer;
- (bool)saverModeActive;
- (void)setAccessibilityHUDImageCacheInfo:(id)arg1;
- (void)setBodyColor:(id)arg1;
- (void)setBodyLayer:(id)arg1;
- (void)setBoltLayer:(id)arg1;
- (void)setBoltMaskLayer:(id)arg1;
- (void)setChargePercent:(double)arg1;
- (void)setChargingState:(long long)arg1;
- (void)setCompact:(bool)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillLayer:(id)arg1;
- (void)setPinColor:(id)arg1;
- (void)setPinLayer:(id)arg1;
- (void)setSaverModeActive:(bool)arg1;
- (void)setShowsInlineChargingIndicator:(bool)arg1;
- (void)setSizeCategory:(long long)arg1;
- (bool)showsInlineChargingIndicator;
- (long long)sizeCategory;
- (void)traitCollectionDidChange:(id)arg1;

@end

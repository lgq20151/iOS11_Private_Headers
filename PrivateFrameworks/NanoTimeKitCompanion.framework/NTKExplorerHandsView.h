/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKExplorerHandsView : NTKAnalogHandsView {
    UIColor * _hourAndMinuteHandDotColor;
    CALayer * _hourHandTransitionBodyLayer;
    CALayer * _hourHandTransitionStemLayer;
    CALayer * _minuteHandDot;
    CALayer * _minuteHandTransitionBodyLayer;
    CALayer * _minuteHandTransitionPegLayer;
    CALayer * _minuteHandTransitionStemLayer;
    CALayer * _secondHandDot;
    UIColor * _secondHandDotColor;
}

@property (nonatomic, retain) UIColor *hourAndMinuteHandDotColor;
@property (nonatomic, retain) UIColor *secondHandDotColor;

- (void).cxx_destruct;
- (void)_addTransitionLayers;
- (void)_removeTransitionLayers;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (id)hourAndMinuteHandDotColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)secondHandDotColor;
- (void)setHourAndMinuteHandDotColor:(id)arg1;
- (void)setInlayColor:(id)arg1;
- (void)setSecondHandDotColor:(id)arg1;

@end

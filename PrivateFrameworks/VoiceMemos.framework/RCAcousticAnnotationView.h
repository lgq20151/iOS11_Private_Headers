/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAcousticAnnotationView : UIView {
    RCUIConfiguration * _UIConfiguration;
    struct CGGradient { } * _decibelMarkerBackgroundGradient;
    double  _gradientAlpha;
    RCLayoutMetrics * _layoutMetrics;
}

@property (nonatomic, copy) RCUIConfiguration *UIConfiguration;
@property (nonatomic) double gradientAlpha;
@property (nonatomic, retain) RCLayoutMetrics *layoutMetrics;

+ (double)requiredWidth;

- (void).cxx_destruct;
- (id)UIConfiguration;
- (id)_decibelMarkersAttributes;
- (void)_reloadGradient;
- (id)_zeroMarkerAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })annotationBoundaryRect;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)gradientAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)layoutMetrics;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientAlpha:(double)arg1;
- (void)setLayoutMetrics:(id)arg1;
- (void)setUIConfiguration:(id)arg1;

@end

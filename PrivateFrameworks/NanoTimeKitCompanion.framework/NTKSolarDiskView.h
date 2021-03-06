/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSolarDiskView : UIView {
    double  _horizonLine;
    UIView * _sunDownView;
    UIView * _sunUpView;
}

@property (nonatomic) double horizonLine;
@property (nonatomic, retain) UIView *sunDownView;
@property (nonatomic, retain) UIView *sunUpView;

- (void).cxx_destruct;
- (double)horizonLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHorizonLine:(double)arg1;
- (void)setSunDownView:(id)arg1;
- (void)setSunUpView:(id)arg1;
- (id)sunDownView;
- (id)sunUpView;

@end

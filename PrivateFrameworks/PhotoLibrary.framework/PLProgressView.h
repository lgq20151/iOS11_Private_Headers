/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLProgressView : UIView {
    _UIBackdropView * _backgroundBlurredView;
    UIView * _backgroundTintedView;
    long long  _backgroundType;
    UIView * _backgroundView;
    UIButton * _cancelButton;
    id /* block */  _cancelationHandler;
    unsigned int  _didLayout;
    unsigned int  _didSetPermanantTextOnLabelView;
    UILabel * _labelView;
    NSNumberFormatter * _progressFormatter;
    UIProgressView * _progressView;
    bool  _showsCancelButton;
    UIView * _topDivider;
}

@property (nonatomic, retain) _UIBackdropView *backgroundBlurredView;
@property (nonatomic, retain) UIView *backgroundTintedView;
@property (nonatomic) long long backgroundType;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, copy) id /* block */ cancelationHandler;
@property (nonatomic) float percentComplete;
@property (nonatomic) bool showsCancelButton;

- (void)_cancel:(id)arg1;
- (void)_installBackgroundBlurredView;
- (void)_installBackgroundTintedView;
- (void)_installBackgroundView;
- (void)_removeBackgroundBlurredView;
- (void)_removeBackgroundTintedView;
- (void)_syncToBackgroundType;
- (id)backgroundBlurredView;
- (id)backgroundTintedView;
- (long long)backgroundType;
- (id)backgroundView;
- (id /* block */)cancelationHandler;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)percentComplete;
- (void)setBackgroundBlurredView:(id)arg1;
- (void)setBackgroundTintedView:(id)arg1;
- (void)setBackgroundType:(long long)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCancelationHandler:(id /* block */)arg1;
- (void)setLabelText:(id)arg1;
- (void)setPercentComplete:(float)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (bool)showsCancelButton;
- (void)updateUIForPublishingAgent:(id)arg1;

@end
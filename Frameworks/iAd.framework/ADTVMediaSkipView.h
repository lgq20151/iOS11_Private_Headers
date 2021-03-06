/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTVMediaSkipView : UIView {
    <ADTVMediaSkipViewDelegate> * _delegate;
    ADTVMediaButton * _skipButton;
    ADCircularCountdownView * _skipTimerView;
}

@property (nonatomic) <ADTVMediaSkipViewDelegate> *delegate;
@property (nonatomic, retain) ADTVMediaButton *skipButton;
@property (nonatomic, retain) ADCircularCountdownView *skipTimerView;

- (void)_addViewConstraints;
- (void)dealloc;
- (id)delegate;
- (void)handleSkipButtonWasPressed:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setSkipTimerView:(id)arg1;
- (id)skipButton;
- (id)skipTimerView;
- (void)startSkipThresholdTimerWithDuration:(double)arg1;

@end

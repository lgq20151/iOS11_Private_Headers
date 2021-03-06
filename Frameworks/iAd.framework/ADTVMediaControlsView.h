/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTVMediaControlsView : UIView <ADTVMediaSkipViewDelegate, UIGestureRecognizerDelegate> {
    ADTVMediaButton * _actionButton;
    ADTVMediaCountdownView * _countdownTimer;
    <ADTVMediaControlsViewDelegate> * _delegate;
    ADTVMediaButton * _privacyButton;
    ADTVMediaSkipView * _skipButton;
    UITapGestureRecognizer * tapRecognizer;
}

@property (nonatomic, retain) ADTVMediaButton *actionButton;
@property (nonatomic, retain) ADTVMediaCountdownView *countdownTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADTVMediaControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ADTVMediaButton *privacyButton;
@property (nonatomic, retain) ADTVMediaSkipView *skipButton;
@property (readonly) Class superclass;

- (void)_addViewConstraints;
- (id)actionButton;
- (void)adtvMediaSkipViewSkipButtonWasPressed:(id)arg1;
- (id)countdownTimer;
- (void)dealloc;
- (id)delegate;
- (void)handleActionButtonWasPressed:(id)arg1;
- (void)handlePrivacyButtonWasPressed:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)privacyButton;
- (void)setActionButton:(id)arg1;
- (void)setCountdownTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrivacyButton:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (id)skipButton;
- (void)startSkipThresholdTimerWithDuration:(double)arg1;
- (void)updateElapsedTime:(double)arg1 totalTime:(double)arg2;

@end

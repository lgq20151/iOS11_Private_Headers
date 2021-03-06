/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADInterstitialView : UIView <ADDimmerViewDelegate> {
    ADDimmerView * _dimmerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _dismissButtonRect;
    ADInterstitialAd * _interstitialAd;
    ADPrivacyButton * _privacyButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ADDimmerView *dimmerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dismissButtonRect;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ADInterstitialAd *interstitialAd;
@property (nonatomic, retain) ADPrivacyButton *privacyButton;
@property (readonly) Class superclass;

+ (bool)requiresConstraintBasedLayout;

- (void)_privacyButtonWasTapped;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)dimmerView;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)disableDimmerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dismissButtonRect;
- (bool)enableDimmerView:(id)arg1;
- (void)enablePrivacyButton;
- (id)initForInterstitialAd:(id)arg1;
- (id)interstitialAd;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)positionAdPrivacyMark;
- (id)privacyButton;
- (void)removeFromSuperview;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDimmerView:(id)arg1;
- (void)setDismissButtonRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setPrivacyButton:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListSectionRevealHintView : UICollectionReusableView {
    bool  _donePerformingInitialReveal;
    bool  _forceRevealed;
    double  _hintingAlpha;
    double  _initialRevealPercentageForPersistentTitle;
    bool  _needsFadeOut;
    bool  _recentsNotificationSectionEmpty;
    SBUILegibilityView * _revealHintChevron;
    SBUILegibilityLabel * _revealHintTitle;
    double  _revealPercentage;
    bool  _showingPersistentTitle;
    NSDate * _titleDate;
}

@property (getter=isDonePerformingInitialReveal, nonatomic) bool donePerformingInitialReveal;
@property (getter=isForceRevealed, nonatomic) bool forceRevealed;
@property (nonatomic) double hintingAlpha;
@property (nonatomic) double initialRevealPercentageForPersistentTitle;
@property (nonatomic) bool needsFadeOut;
@property (getter=isRecentsNotificationSectionEmpty, nonatomic) bool recentsNotificationSectionEmpty;
@property (nonatomic, retain) SBUILegibilityView *revealHintChevron;
@property (nonatomic, retain) SBUILegibilityLabel *revealHintTitle;
@property (nonatomic) double revealPercentage;
@property (getter=isShowingPersistentTitle, nonatomic) bool showingPersistentTitle;
@property (nonatomic, retain) NSDate *titleDate;

+ (double)minimumViewHeight;

- (void).cxx_destruct;
- (double)_alphaValueBasedOnRevealPercentage;
- (double)_baseAlphaValueBasedOnPersistence;
- (double)_chevronAlphaForAlpha:(double)arg1;
- (id)_chevronImage;
- (void)_configureRevealHintChevronIfNecessary;
- (void)_configureRevealHintTitleIfNecessary;
- (double)_hintTitleDisplacementForRevealPercentage:(double)arg1;
- (id)_labelFont;
- (void)_layoutRevealHintChevron;
- (void)_layoutRevealHintChevronForInitialRevealPercentage:(double)arg1;
- (void)_layoutRevealHintChevronForRevealPercentage:(double)arg1;
- (void)_layoutRevealHintTitle;
- (void)_layoutRevealHintTitleForInitialRevealPercentage:(double)arg1;
- (void)_layoutRevealHintTitleForRevealPercentage:(double)arg1;
- (void)_updateAlpha;
- (void)_updateBaseAlpha;
- (void)_updateHintTitle;
- (void)_updateHintTitleFont;
- (void)_updateLayout;
- (double)hintingAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)initialRevealPercentageForPersistentTitle;
- (bool)isDonePerformingInitialReveal;
- (bool)isForceRevealed;
- (bool)isRecentsNotificationSectionEmpty;
- (bool)isShowingPersistentTitle;
- (void)layoutSubviews;
- (bool)needsFadeOut;
- (id)revealHintChevron;
- (id)revealHintTitle;
- (double)revealPercentage;
- (void)setDonePerformingInitialReveal:(bool)arg1;
- (void)setForceRevealed:(bool)arg1;
- (void)setHintingAlpha:(double)arg1;
- (void)setInitialRevealPercentageForPersistentTitle:(double)arg1;
- (void)setNeedsFadeOut:(bool)arg1;
- (void)setRecentsNotificationSectionEmpty:(bool)arg1;
- (void)setRevealHintChevron:(id)arg1;
- (void)setRevealHintTitle:(id)arg1;
- (void)setRevealPercentage:(double)arg1;
- (void)setShowingPersistentTitle:(bool)arg1;
- (void)setTitleDate:(id)arg1;
- (id)titleDate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForLegibilitySettings:(id)arg1;

@end

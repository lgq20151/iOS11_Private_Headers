/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIEdgeFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {
    _UIFeedback<_UIFeedbackDiscretePlayable> * _animatingMaximumExtentFeedback;
    id /* block */  _animatingMaximumExtentFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _animatingThresholdFeedback;
    id /* block */  _animatingThresholdFeedbackUpdateBlock;
    long long  _defaultAxis;
    double  _minDistanceFromEdge;
    _UIFeedback<_UIFeedbackContinuousPlayable> * _userInteractingBeyondEdgeFeedback;
    id /* block */  _userInteractingBeyondEdgeFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _userInteractingReleaseFeedback;
    id /* block */  _userInteractingReleaseFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _userInteractingThresholdFeedback;
    id /* block */  _userInteractingThresholdFeedbackUpdateBlock;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingMaximumExtentFeedback;
@property (nonatomic, copy) id /* block */ animatingMaximumExtentFeedbackUpdateBlock;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingThresholdFeedback;
@property (nonatomic, copy) id /* block */ animatingThresholdFeedbackUpdateBlock;
@property (getter=_defaultAxis, setter=_setDefaultAxis:, nonatomic) long long defaultAxis;
@property (nonatomic) double minDistanceFromEdge;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *userInteractingBeyondEdgeFeedback;
@property (nonatomic, copy) id /* block */ userInteractingBeyondEdgeFeedbackUpdateBlock;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingReleaseFeedback;
@property (nonatomic, copy) id /* block */ userInteractingReleaseFeedbackUpdateBlock;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingThresholdFeedback;
@property (nonatomic, copy) id /* block */ userInteractingThresholdFeedbackUpdateBlock;

+ (id)_scrollConfigurationWithAxis:(long long)arg1;
+ (id)_zoomConfiguration;
+ (id)defaultConfiguration;
+ (id)horizontalScrollConfiguration;
+ (id)sliderConfiguration;
+ (id)swipePresentationConfiguration;
+ (id)verticalScrollConfiguration;

- (void).cxx_destruct;
- (long long)_defaultAxis;
- (void)_setDefaultAxis:(long long)arg1;
- (id)animatingMaximumExtentFeedback;
- (id /* block */)animatingMaximumExtentFeedbackUpdateBlock;
- (id)animatingThresholdFeedback;
- (id /* block */)animatingThresholdFeedbackUpdateBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedbackKeyPaths;
- (double)minDistanceFromEdge;
- (long long)requiredSupportLevel;
- (void)setAnimatingMaximumExtentFeedback:(id)arg1;
- (void)setAnimatingMaximumExtentFeedbackUpdateBlock:(id /* block */)arg1;
- (void)setAnimatingThresholdFeedback:(id)arg1;
- (void)setAnimatingThresholdFeedbackUpdateBlock:(id /* block */)arg1;
- (void)setMinDistanceFromEdge:(double)arg1;
- (void)setUserInteractingBeyondEdgeFeedback:(id)arg1;
- (void)setUserInteractingBeyondEdgeFeedbackUpdateBlock:(id /* block */)arg1;
- (void)setUserInteractingReleaseFeedback:(id)arg1;
- (void)setUserInteractingReleaseFeedbackUpdateBlock:(id /* block */)arg1;
- (void)setUserInteractingThresholdFeedback:(id)arg1;
- (void)setUserInteractingThresholdFeedbackUpdateBlock:(id /* block */)arg1;
- (id)userInteractingBeyondEdgeFeedback;
- (id /* block */)userInteractingBeyondEdgeFeedbackUpdateBlock;
- (id)userInteractingReleaseFeedback;
- (id /* block */)userInteractingReleaseFeedbackUpdateBlock;
- (id)userInteractingThresholdFeedback;
- (id /* block */)userInteractingThresholdFeedbackUpdateBlock;

@end

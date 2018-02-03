/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICharacterStreamingManager : NSObject {
    bool  _committingFinalResults;
    bool  _discardNextHypothesis;
    double  _lastAnimationUpdateTimeStamp;
    NSString * _lastHypothesis;
    double  _minDurationBetweenHypotheses;
    NSMutableArray * _pendingEdits;
    NSString * _previousHypothesis;
    bool  _streamingAnimationActive;
    CADisplayLink * _streamingAnimationDisplayLink;
    double  _streamingCharacterInsertionRate;
    NSString * _targetHypothesis;
    UITextView * _textView;
}

@property (nonatomic) bool discardNextHypothesis;
@property (nonatomic, copy) NSString *lastHypothesis;
@property (nonatomic) double minDurationBetweenHypotheses;
@property (nonatomic, retain) NSMutableArray *pendingEdits;
@property (nonatomic, copy) NSString *previousHypothesis;
@property (nonatomic) double streamingCharacterInsertionRate;
@property (nonatomic, copy) NSString *targetHypothesis;

- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)commitFinalResults;
- (bool)discardNextHypothesis;
- (id)initWithTextView:(id)arg1;
- (id)lastHypothesis;
- (double)minDurationBetweenHypotheses;
- (id)pendingEdits;
- (id)previousHypothesis;
- (void)setDiscardNextHypothesis:(bool)arg1;
- (void)setLastHypothesis:(id)arg1;
- (void)setMinDurationBetweenHypotheses:(double)arg1;
- (void)setPendingEdits:(id)arg1;
- (void)setPreviousHypothesis:(id)arg1;
- (void)setStreamingCharacterInsertionRate:(double)arg1;
- (void)setTargetHypothesis:(id)arg1;
- (void)setWords:(id)arg1;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (double)streamingCharacterInsertionRate;
- (id)targetHypothesis;

@end

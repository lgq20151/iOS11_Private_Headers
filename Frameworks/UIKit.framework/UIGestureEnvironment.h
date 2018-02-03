/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureEnvironment : NSObject {
    NSMutableArray * _delayedPresses;
    NSMutableArray * _delayedPressesToSend;
    NSMutableArray * _delayedTouches;
    NSMutableArray * _delayedTouchesToSend;
    UIGestureGraph * _dependencyGraph;
    NSMutableArray * _dirtyGestureRecognizers;
    bool  _dirtyGestureRecognizersUnsorted;
    struct __CFRunLoopObserver { } * _gestureEnvironmentUpdateObserver;
    NSMutableSet * _gestureRecognizersNeedingRemoval;
    NSMutableSet * _gestureRecognizersNeedingReset;
    NSMutableSet * _gestureRecognizersNeedingUpdate;
    bool  _isUpdatingGestureEnvironment;
    NSMapTable * _nodesByGestureRecognizer;
    NSMutableArray * _preUpdateActions;
    bool  _updateExclusivity;
}

@property (nonatomic, readonly) bool _hasGesturesNeedingUpdate;

- (void).cxx_destruct;
- (bool)_activeRelationshipsForGestureRecognizer:(id)arg1;
- (void)_addDynamicRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (void)_addPreUpdateAction:(id /* block */)arg1;
- (void)_cancelGestureRecognizers:(id)arg1;
- (void)_cancelPresses:(id)arg1 event:(id)arg2;
- (void)_cancelTouches:(id)arg1 event:(id)arg2;
- (void)_clearGestureIsDirty:(id)arg1;
- (void)_clearGestureNeedsUpdate:(id)arg1;
- (id)_delayedPressForPress:(id)arg1 event:(id)arg2;
- (id)_delayedTouchForTouch:(id)arg1 event:(id)arg2;
- (void)_deliverEvent:(id)arg1 toGestureRecognizers:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enqueueDelayedPressToSend:(id)arg1;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (void)_forceUpdateForSpringBoardOnly;
- (void)_gestureNeedsReset:(id)arg1;
- (id)_gestureRecognizerForNode:(id)arg1;
- (id)_graphDictionary:(bool)arg1;
- (bool)_hasGesturesNeedingUpdate;
- (void)_markGestureAsDirty:(id)arg1;
- (id)_nodeForGestureRecognizer:(id)arg1;
- (void)_notifyDependentsGestureRecognizerHasCompleted:(id)arg1;
- (void)_performTouchContinuationWithOverrideHitTestedView:(id)arg1;
- (bool)_pressesBeganWasDelayedForPress:(id)arg1;
- (void)_queueGestureRecognizerForResetIfFinished:(id)arg1;
- (void)_queueGestureRecognizersForResetIfFinished:(id)arg1;
- (void)_removeDelayedPress:(id)arg1;
- (void)_removeDelayedTouch:(id)arg1;
- (void)_removeNodeFromGestureGraph:(id)arg1;
- (void)_runPreUpdateActions;
- (bool)_touchesBeganWasDelayedForTouch:(id)arg1;
- (void)_updateGesturesForEvent:(id)arg1 window:(id)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)addRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 requiresGestureRecognizerToFail:(id)arg2;
- (id)init;
- (void)removeGestureRecognizer:(id)arg1;
- (void)removeRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (void)setGestureNeedsUpdate:(id)arg1;
- (void)setNeedsExclusivityUpdate;
- (bool)unmetRequirementsForGestureRecognizer:(id)arg1;

@end

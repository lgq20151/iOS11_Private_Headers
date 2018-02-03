/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEventEnvironment : NSObject {
    NSMutableArray * _afterNewTouchDownActions;
    UIApplication * _application;
    double  _commitTimeForTouchEvents;
    NSCountedSet * _contextAndSessionIDPairsForAdditionalDragEvents;
    long long  _currentNudgePressType;
    UITouch * _currentTouch;
    long long  _disableTouchCoalescingCount;
    NSMutableDictionary * _dragEventsByContextAndSessionIDPair;
    NSMutableDictionary * _estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray * _estimatedTouchRecordsInIncomingOrder;
    NSMutableArray * _eventQueue;
    NSMutableSet * _exclusiveTouchWindows;
    _UIGameControllerEvent * _gameControllerEvent;
    bool  _hasSeenAnyStylusEvents;
    bool  _isSystemApplication;
    UIPhysicalKeyboardEvent * _physicalKeyboardEvent;
    UIPressesEvent * _pressesEvent;
    NSMutableDictionary * _pressesMap;
    UITouchesEvent * _touchesEvent;
    UIWheelEvent * _wheelEvent;
}

@property (nonatomic) UIApplication *application;
@property (nonatomic, retain) NSMutableArray *eventQueue;

- (void).cxx_destruct;
- (id)UIKitEventForHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_addAfterNewTouchDownAction:(id /* block */)arg1;
- (void)_disableTouchCoalescingWithCount:(long long)arg1;
- (void)_dispatchAndRemoveStaleEstimationUpdateRecordsWithEventTime:(double)arg1 upToRecord:(id)arg2;
- (id)_dragEventForHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)_dragEvents;
- (void)_enableTouchCoalescingWithCount:(long long)arg1;
- (void)_enqueueHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)_estimatedTouchRecordForContextID:(id)arg1 estimationIndex:(id)arg2;
- (bool)_isTouchCoalescingDisabled;
- (void)_performAfterNewTouchDownActions;
- (id)_pressForType:(long long)arg1;
- (void)_registerContextIDsForAdditionalDragEvents:(id)arg1 forSession:(unsigned int)arg2;
- (void)_registerEstimatedTouches:(id)arg1 event:(id)arg2 forTouchable:(id)arg3;
- (void)_removeDragEvent:(id)arg1;
- (void)_removeEstimatedTouchRecord:(id)arg1;
- (void)_setPress:(id)arg1 forType:(long long)arg2;
- (void)_unregisterContextIDsForAdditionalDragEvents:(id)arg1 forSession:(unsigned int)arg2;
- (id)application;
- (id)eventQueue;
- (bool)eventWantsLowLatency:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setEventQueue:(id)arg1;

@end

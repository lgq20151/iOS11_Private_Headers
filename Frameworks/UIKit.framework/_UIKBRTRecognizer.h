/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBRTRecognizer : NSObject {
    NSMutableSet * _activeTouches;
    NSObject<OS_dispatch_queue> * _activeTouchesQueue;
    NSMutableSet * _averagingRules;
    struct CGSize { 
        double width; 
        double height; 
    }  _clusterRestHaloSize;
    NSMutableSet * _definitiveRules;
    <_UIKBRTRecognizerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _disableHomeRowReturn;
    NSMutableArray * _ignoredTouches;
    NSObject<OS_dispatch_queue> * _ignoredTouchesQueue;
    bool  _isWaiting;
    double  _maximumNonRestMoveDistance;
    unsigned long long  _numProlongedTouches;
    NSMutableArray * _touchInfos;
    double  _touchIntervalAverage;
    <_UIKBRTRecognizerTouchLoggingProtocol> * _touchLogger;
    NSObject<OS_dispatch_queue> * _touchQueue;
    <_UIKBRTRecognizerTouchPointTrackingProtocol> * _touchTracker;
}

@property (nonatomic, retain) NSMutableSet *activeTouches;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *activeTouchesQueue;
@property (nonatomic, readonly) NSMutableSet *averagingRules;
@property (nonatomic) struct CGSize { double x1; double x2; } clusterRestHaloSize;
@property (nonatomic, readonly) NSMutableSet *definitiveRules;
@property (nonatomic) <_UIKBRTRecognizerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) bool disableHomeRowReturn;
@property (nonatomic, retain) NSMutableArray *ignoredTouches;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ignoredTouchesQueue;
@property (nonatomic) double maximumNonRestMoveDistance;
@property (nonatomic) unsigned long long numProlongedTouches;
@property (nonatomic, retain) NSMutableArray *touchInfos;
@property (nonatomic) double touchIntervalAverage;
@property (nonatomic, retain) <_UIKBRTRecognizerTouchLoggingProtocol> *touchLogger;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *touchQueue;
@property (nonatomic, retain) <_UIKBRTRecognizerTouchPointTrackingProtocol> *touchTracker;

- (void).cxx_destruct;
- (void)_doBeginTouchWithTouchInfo:(id)arg1;
- (void)_doCancelledTouchWithTouchInfo:(id)arg1;
- (void)_doEndedTouchWithTouchInfo:(id)arg1;
- (void)_doIgnoreTouchWithTouchInfo:(id)arg1;
- (void)_doMarkTouchProcessedWithTouchInfo:(id)arg1;
- (void)_doMovedTouchWithTouchInfo:(id)arg1;
- (id)activeTouches;
- (id)activeTouchesQueue;
- (bool)addedToActiveTouches:(id)arg1;
- (id)averagingRules;
- (void)cancelTouchOnLayoutWithTouchInfo:(id)arg1;
- (struct CGSize { double x1; double x2; })clusterRestHaloSize;
- (id)definitiveRules;
- (id)delegate;
- (id)delegateQueue;
- (bool)disableHomeRowReturn;
- (void)explicitlyIgnoreTouch:(id)arg1 withIdentifier:(id)arg2;
- (id)ignoredTouches;
- (id)ignoredTouchesQueue;
- (id)init;
- (void)kbStatusMessage:(id)arg1;
- (float)letRulesModifyNewTouchInfo:(id)arg1;
- (void)letRulesModifyPendingTouchInfo:(id)arg1;
- (bool)makeTouchActive:(id)arg1;
- (void)makeTouchIgnored:(id)arg1 force:(bool)arg2;
- (void)makeTouchIgnored:(id)arg1 force:(bool)arg2 because:(id)arg3;
- (void)makeTouchIgnored:(id)arg1 force:(bool)arg2 withMessage:(id)arg3;
- (void)markTouchProcessed:(id)arg1 withIdentifier:(id)arg2;
- (double)maximumNonRestMoveDistance;
- (void)notifyDelegateOfCancelledTouch:(id)arg1;
- (void)notifyDelegateOfIgnoringTouch:(id)arg1;
- (void)notifyDelegateOfMovedIgnoredTouch:(id)arg1;
- (bool)notifyDelegateOfMovedTouch:(id)arg1;
- (void)notifyDelegateOfRestingTouch:(id)arg1;
- (void)notifyDelegateOfSuccessfulTouch:(id)arg1;
- (unsigned long long)numProlongedTouches;
- (void)processTouchInfo:(id)arg1;
- (bool)queryDelegateOfIgnoringTouch:(id)arg1 forOtherTouch:(bool)arg2;
- (bool)queryDelegateOfRestingTouch:(id)arg1;
- (bool)queryDelegateToBeginTouch:(id)arg1 forBeginState:(unsigned long long)arg2 restartIfNecessary:(bool)arg3;
- (bool)removedFromActiveTouches:(id)arg1;
- (void)reset;
- (void)setActiveTouches:(id)arg1;
- (void)setActiveTouchesQueue:(id)arg1;
- (void)setClusterRestHaloSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDisableHomeRowReturn:(bool)arg1;
- (void)setIgnoredTouches:(id)arg1;
- (void)setIgnoredTouchesQueue:(id)arg1;
- (void)setMaximumNonRestMoveDistance:(double)arg1;
- (void)setNumProlongedTouches:(unsigned long long)arg1;
- (void)setStandardKeyPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTouchInfos:(id)arg1;
- (void)setTouchIntervalAverage:(double)arg1;
- (void)setTouchLogger:(id)arg1;
- (void)setTouchQueue:(id)arg1;
- (void)setTouchTracker:(id)arg1;
- (void)touchCancelled:(id)arg1 withIdentifier:(id)arg2;
- (void)touchDown:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(bool)arg3;
- (void)touchDragged:(id)arg1 withIdentifier:(id)arg2;
- (id)touchInfos;
- (double)touchIntervalAverage;
- (id)touchLogger;
- (id)touchQueue;
- (id)touchTracker;
- (void)touchUp:(id)arg1 withIdentifier:(id)arg2;
- (void)updateIgnoredTouchesForTouchInfo:(id)arg1 whenTouchInfo:(id)arg2 changesStateTo:(BOOL)arg3;

@end

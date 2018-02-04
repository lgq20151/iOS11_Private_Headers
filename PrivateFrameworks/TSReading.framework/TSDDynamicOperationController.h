/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDDynamicOperationController : NSObject {
    NSMutableSet * mAllTransformedReps;
    TSDAutoscroll * mAutoscroll;
    TSDInteractiveCanvasController * mICC;
    bool  mOperationIsDynamic;
    bool  mPossibleDynamicOperation;
    NSMutableSet * mReps;
    bool  mResetGuides;
    bool  mSupportsAlignmentGuides;
}

@property (nonatomic, readonly) NSSet *allTransformedReps;
@property (nonatomic, readonly) NSSet *currentlyTransformingReps;

- (id)allTransformedReps;
- (void)beginOperation;
- (void)beginPossibleDynamicOperation;
- (void)cancelOperation;
- (id)currentlyTransformingReps;
- (void)dealloc;
- (void)endOperation;
- (void)handleGestureRecognizer:(id)arg1;
- (void)handleTrackerManipulator:(id)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)invalidateGuides;
- (bool)isInOperation;
- (bool)isInPossibleDynamicOperation;
- (bool)isOperationDynamic;
- (void)p_beginDynamicOperationForReps:(id)arg1;
- (void)p_cleanupOperation;
- (void)p_controllingTMDidResetInOperation:(id)arg1;
- (void)p_resetGuidesForCleanup:(bool)arg1;
- (void)startTransformingReps:(id)arg1;
- (void)stopTransformingReps:(id)arg1;

@end
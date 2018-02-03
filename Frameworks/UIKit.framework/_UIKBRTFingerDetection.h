/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBRTFingerDetection : _UIKBRTKeyboardTouchObserver {
    _UIKBRTFingerInfo * _fakeLeftIndex;
    _UIKBRTFingerInfo * _fakeRightIndex;
    UIView * _feedbackParentView;
    _UIKBRTFingerDetectionView * _feedbackView;
    NSMapTable * _fingerFeedbackViewMap;
    NSMutableDictionary * _touches;
}

@property (nonatomic, retain) _UIKBRTFingerInfo *fakeLeftIndex;
@property (nonatomic, retain) _UIKBRTFingerInfo *fakeRightIndex;
@property (nonatomic) UIView *feedbackParentView;
@property (nonatomic, retain) _UIKBRTFingerDetectionView *feedbackView;
@property (nonatomic, retain) NSMapTable *fingerFeedbackViewMap;
@property (nonatomic, retain) NSMutableDictionary *touches;

- (void).cxx_destruct;
- (bool)_linkTouchesInArray:(id)arg1 withIndexes:(id)arg2 opposingHandIndexes:(id)arg3 unassignedIndexes:(id)arg4 thumb:(id)arg5;
- (void)_updateFingerFeedback;
- (void)_updateFingerFeedback:(id)arg1;
- (void)_updateTouchInfoForFingerID:(unsigned long long)arg1;
- (void)_updateTouchInfoFromOutsideInWithArray:(id)arg1 indexes:(id)arg2 newIdentityDict:(id)arg3 fakeIndex:(id)arg4;
- (void)addTouchLocation:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;
- (void)dealloc;
- (id)fakeLeftIndex;
- (id)fakeRightIndex;
- (id)feedbackParentView;
- (id)feedbackView;
- (id)fingerFeedbackViewMap;
- (unsigned long long)fingerIdForTouchWithIdentifier:(id)arg1;
- (id)fingerIdsRelatedToTouchWithIdentifier:(id)arg1 sinceTimestamp:(double)arg2 includeThumbs:(bool)arg3;
- (id)init;
- (id)initWithParentView:(id)arg1;
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint { double x1; double x2; })arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(bool)arg2;
- (void)reset;
- (void)setFakeLeftIndex:(id)arg1;
- (void)setFakeRightIndex:(id)arg1;
- (void)setFeedbackParentView:(id)arg1;
- (void)setFeedbackView:(id)arg1;
- (void)setFingerFeedbackViewMap:(id)arg1;
- (void)setTouches:(id)arg1;
- (id)touchIdentifiersForFingerId:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })touchLocationForFingerId:(unsigned long long)arg1;
- (id)touches;
- (void)updateWithFCenter:(struct CGPoint { double x1; double x2; })arg1 jCenter:(struct CGPoint { double x1; double x2; })arg2 keySize:(struct CGSize { double x1; double x2; })arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;

@end

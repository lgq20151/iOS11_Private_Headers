/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEvent : NSObject {
    double  __initialTouchTimestamp;
    UIScreen * _cachedScreen;
    struct __GSEvent { } * _gsEvent;
    struct __IOHIDEvent { } * _hidEvent;
    double  _timestamp;
}

@property (nonatomic, readonly) double _initialTouchTimestamp;
@property (nonatomic, readonly) NSSet *allTouches;
@property (nonatomic, readonly) long long subtype;
@property (setter=_setTimestamp:, nonatomic) double timestamp;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)_cleanupAfterDispatch;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (unsigned long long)_focusHeading;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (struct __GSEvent { }*)_gsEvent;
- (struct __IOHIDEvent { }*)_hidEvent;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (double)_initialTouchTimestamp;
- (bool)_isKeyDown;
- (id)_modifiedInput;
- (long long)_modifierFlags;
- (long long)_moveDirection;
- (id)_screen;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setGSEvent:(struct __GSEvent { }*)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setTimestamp:(double)arg1;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)_triggeringPhysicalButton;
- (id)_unmodifiedInput;
- (double)_wheelVelocity;
- (id)_windows;
- (id)allTouches;
- (id)coalescedTouchesForTouch:(id)arg1;
- (void)dealloc;
- (bool)isKeyDown;
- (id)predictedTouchesForTouch:(id)arg1;
- (long long)subtype;
- (double)timestamp;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (long long)type;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) bool isHorizontal;
@property (readonly) int wheelDelta;
@property (readonly) int wheelDeltaX;
@property (readonly) int wheelDeltaY;

- (unsigned int)deltaMode;
- (double)deltaX;
- (double)deltaY;
- (double)deltaZ;
- (void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(bool)arg8 altKey:(bool)arg9 shiftKey:(bool)arg10 metaKey:(bool)arg11;
- (bool)isHorizontal;
- (bool)webkitDirectionInvertedFromDevice;
- (int)wheelDelta;
- (int)wheelDeltaX;
- (int)wheelDeltaY;

@end

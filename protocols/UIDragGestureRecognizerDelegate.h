/* made by EzioChiu.
 */

@protocol UIDragGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@optional

- (bool)_gestureRecognizer:(UIDragGestureRecognizer *)arg1 shouldReceiveDragEvent:(UIDragEvent *)arg2;

@end

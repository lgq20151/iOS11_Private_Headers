/* made by EzioChiu.
 */

@protocol _UIDraggable <NSObject>

@required

- (void)_draggingEndedWithEvent:(UIDragEvent *)arg1;
- (void)_draggingEnteredWithEvent:(UIDragEvent *)arg1;
- (void)_draggingExitedWithEvent:(UIDragEvent *)arg1;
- (void)_draggingUpdatedWithEvent:(UIDragEvent *)arg1;

@end

/* made by EzioChiu.
 */

@protocol UITextDragFinishState <NSObject>

@required

- (bool)dragTearoffOccured;
- (struct CGPoint { double x1; double x2; })location;

@end

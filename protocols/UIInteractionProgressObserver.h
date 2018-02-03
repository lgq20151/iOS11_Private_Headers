/* made by EzioChiu.
 */

@protocol UIInteractionProgressObserver <NSObject>

@optional

- (void)interactionProgress:(UIInteractionProgress *)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(UIInteractionProgress *)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewRotateTransition : UIInputViewTransition

- (bool)fadeAccessoryView;
- (void)postNotificationsForTransitionEnd;
- (void)postNotificationsForTransitionStart;
- (bool)shouldCompleteOnSuspend;
- (bool)shouldRecomputeEndFrame;
- (bool)subsumesTransition:(id)arg1;

@end

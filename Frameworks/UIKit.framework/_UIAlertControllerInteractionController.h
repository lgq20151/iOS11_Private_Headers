/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerInteractionController : UIPercentDrivenInteractiveTransition <UIForceInteractionController, UIInteractionProgressObserver> {
    UIAlertController * _alertController;
    <UIViewControllerContextTransitioning> * _context;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (id)alertController;
- (id)context;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;

@end

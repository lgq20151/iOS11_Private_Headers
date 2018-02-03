/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate> {
    _UIStatesFeedbackGenerator * _feedbackGenerator;
    UIInteractionProgress * interactionProgressForPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIInteractionProgress *interactionProgressForPresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)feedbackGenerator;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionProgressForPresentation;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setInteractionProgressForPresentation:(id)arg1;

@end

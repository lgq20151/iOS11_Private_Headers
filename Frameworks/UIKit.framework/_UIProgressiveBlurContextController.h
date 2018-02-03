/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIProgressiveBlurContextController : UIViewController <UIViewControllerTransitioningDelegate> {
    long long  _blurStyle;
    UIViewController * _presentedViewController;
}

@property (nonatomic) long long blurStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (long long)blurStyle;
- (id)initWithPresentedViewController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setBlurStyle:(long long)arg1;
- (void)viewDidLoad;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenRoutePickerViewController : UIViewController <UIAlertControllerContaining> {
    UIAlertController * _alertController;
    _UIResilientRemoteViewContainerViewController * _childViewController;
    NSObject<OS_dispatch_semaphore> * _remoteViewControllerSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInitWithCompletion:(id /* block */)arg1;
- (id)_containedAlertController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (bool)_requiresCustomPresentationController;
- (void)_setChildViewController:(id)arg1;
- (void)dealloc;
- (void)disconnectRoute;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)remoteViewController;
- (void)setCurrentOutputDeviceEnabled:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;

@end
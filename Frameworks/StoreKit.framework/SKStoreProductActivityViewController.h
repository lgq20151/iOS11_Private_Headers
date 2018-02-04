/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStoreProductActivityViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    _SKStoreProductActivityAnimationController * _animationController;
    _UIAsyncInvocation * _cancelRequest;
    <SKStoreProductActivityViewControllerDelegate> * _delegate;
    NSDictionary * _parameters;
    SKRemoteProductActivityViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKStoreProductActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addRemoteView;
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_viewTapped:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
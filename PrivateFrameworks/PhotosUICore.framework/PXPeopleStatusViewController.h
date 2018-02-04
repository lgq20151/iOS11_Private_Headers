/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleStatusViewController : UIViewController {
    <PXPeopleStatusViewDelegate> * _delegate;
    PXPeopleStatusView * _statusView;
}

@property (nonatomic) <PXPeopleStatusViewDelegate> *delegate;
@property (nonatomic, retain) PXPeopleStatusView *statusView;

- (void).cxx_destruct;
- (void)_continuePressed:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setStatusView:(id)arg1;
- (id)statusView;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
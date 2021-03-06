/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBusinessChatController : CKChatController {
    CKNavbarCanvasViewController * _navbarCanvasViewController;
}

@property (nonatomic, retain) CKNavbarCanvasViewController *navbarCanvasViewController;

- (void).cxx_destruct;
- (void)cleanUpBizNavBarIfNecessary;
- (void)loadView;
- (id)navbarCanvasViewController;
- (long long)preferredStatusBarStyle;
- (void)setNavbarCanvasViewController:(id)arg1;
- (void)setupBizNavBarIfNecessary;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end

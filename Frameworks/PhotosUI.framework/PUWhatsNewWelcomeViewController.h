/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUWhatsNewWelcomeViewController : PUWelcomeViewController {
    UIView * __bottomContentView;
    id /* block */  __completionHandler;
    bool  __didAdjustScrollPosition;
    UIScrollView * __scrollView;
    NSLayoutConstraint * __topConstraint;
    UIView * __topContentView;
}

@property (nonatomic, readonly, copy) UIView *_bottomContentView;
@property (nonatomic, readonly, copy) id /* block */ _completionHandler;
@property (setter=_setDidAdjustScrollPosition:, nonatomic) bool _didAdjustScrollPosition;
@property (nonatomic, readonly, copy) UIScrollView *_scrollView;
@property (nonatomic, readonly, copy) NSLayoutConstraint *_topConstraint;
@property (nonatomic, readonly, copy) UIView *_topContentView;

+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)resetLastPresentationInfo;

- (void).cxx_destruct;
- (void)_addSection:(id)arg1 containerView:(id)arg2 iconName:(id)arg3 lastLabel:(id*)arg4 lastSectionView:(id*)arg5 subheadlineFontScale:(double)arg6 text:(id)arg7 title:(id)arg8 titleLabel:(id)arg9;
- (id)_bottomContentView;
- (id /* block */)_completionHandler;
- (bool)_didAdjustScrollPosition;
- (void)_handleContinueButton:(id)arg1;
- (id)_initWithCompletionHandler:(id /* block */)arg1;
- (id)_scrollView;
- (void)_setDidAdjustScrollPosition:(bool)arg1;
- (id)_topConstraint;
- (id)_topContentView;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

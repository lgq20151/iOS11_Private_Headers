/* made by EzioChiu.
 */

@protocol _UIQueuingScrollViewDelegate <NSObject>

@required

- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 attemptToPageInDirection:(long long)arg2;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didBailoutOfScrollAndRevealedView:(UIView *)arg2;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didCommitManualScroll:(bool)arg2 toRevealView:(UIView *)arg3 concealView:(UIView *)arg4 direction:(long long)arg5 animated:(bool)arg6 canComplete:(bool)arg7;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didEndManualScroll:(bool)arg2 toRevealView:(UIView *)arg3 direction:(long long)arg4 animated:(bool)arg5 didFinish:(bool)arg6 didComplete:(bool)arg7;
- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 willManuallyScroll:(bool)arg2 toRevealView:(UIView *)arg3 concealView:(UIView *)arg4 animated:(bool)arg5;
- (void)queuingScrollViewDidFinishScrolling:(_UIQueuingScrollView *)arg1;
- (bool)queuingScrollViewShouldLayoutSubviews:(_UIQueuingScrollView *)arg1;

@end

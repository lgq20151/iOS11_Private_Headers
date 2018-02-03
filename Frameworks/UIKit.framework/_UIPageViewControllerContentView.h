/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPageViewControllerContentView : UIView {
    UIPageControl * _pageControl;
    UIPageViewController * _pageViewController;
    _UIQueuingScrollView * _scrollView;
}

@property (nonatomic, readonly) UIPageControl *pageControl;
@property (nonatomic, readonly) _UIQueuingScrollView *scrollView;

- (void).cxx_destruct;
- (double)_pageSpacing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollViewFrame;
- (void)_setupPageControl:(id)arg1;
- (bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andPageViewController:(id)arg2;
- (void)invalidatePageViewController;
- (void)layoutSubviews;
- (id)pageControl;
- (id)preferredFocusedView;
- (id)scrollView;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

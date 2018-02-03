/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPageController : UIViewController {
    <UIPageControllerDelegate> * _delegate;
    int  _notificationState;
    UIPageControl * _pageControl;
    struct { 
        unsigned int delegateViewControllerAtIndex : 1; 
        unsigned int delegateWillBeginPaging : 1; 
        unsigned int delegateDidEndPaging : 1; 
        unsigned int displaysPageControl : 1; 
        unsigned int wraps : 1; 
    }  _pageControllerFlags;
    long long  _pageCount;
    int  _pageSpacing;
    UIScrollView * _scrollView;
    NSMutableArray * _viewControllers;
    long long  _visibleIndex;
    UIView * _wrapperViews;
}

@property (nonatomic) <UIPageControllerDelegate> *delegate;
@property (nonatomic) bool displaysPageControl;
@property (nonatomic) long long pageCount;
@property (nonatomic) double pageSpacing;
@property (nonatomic) long long visibleIndex;
@property (nonatomic, readonly, retain) UIViewController *visibleViewController;
@property (nonatomic) bool wraps;

- (void)_adjustScrollViewContentInsets;
- (bool)_allowsAutorotation;
- (void)_createPageControl;
- (bool)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_hasNextViewController;
- (bool)_hasPreviousViewController;
- (bool)_hasVisibleViewController;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (bool)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2;
- (id)_loadNextViewController;
- (id)_loadPreviousViewController;
- (id)_loadVisibleViewControllerAndNotify:(bool)arg1;
- (bool)_needToLoadNext;
- (bool)_needToLoadPrevious;
- (bool)_needToLoadVisible;
- (id)_nextViewController;
- (int)_nextViewControllerNotificationState;
- (void)_notifyNextViewController:(int)arg1 animated:(bool)arg2;
- (void)_notifyPreviousViewController:(int)arg1 animated:(bool)arg2;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(bool)arg4;
- (void)_notifyVisibleViewController:(int)arg1 animated:(bool)arg2;
- (void)_pageChanged:(id)arg1;
- (id)_pageControllerScrollView;
- (id)_previousViewController;
- (int)_previousViewControllerNotificationState;
- (void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2;
- (id)_scrollView;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollViewFrame;
- (void)_scrollViewWillBeginPaging;
- (void)_setNextViewController:(id)arg1;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (void)_setPreviousViewController:(id)arg1;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewController:(id)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (bool)_shouldUseOnePartRotation;
- (id)_visibleViewController;
- (int)_visibleViewControllerNotificationState;
- (void)dealloc;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (bool)displaysPageControl;
- (long long)indexOfViewController:(id)arg1;
- (void)loadView;
- (long long)pageCount;
- (double)pageSpacing;
- (void)reloadViewControllerAtIndex:(long long)arg1;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysPageControl:(bool)arg1;
- (void)setPageCount:(long long)arg1;
- (void)setPageSpacing:(double)arg1;
- (void)setVisibleIndex:(long long)arg1;
- (void)setVisibleIndex:(long long)arg1 animated:(bool)arg2;
- (void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(bool)arg2 animated:(bool)arg3;
- (void)setWraps:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (long long)visibleIndex;
- (id)visibleViewController;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)wraps;

@end

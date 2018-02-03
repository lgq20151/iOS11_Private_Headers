/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting> {
    bool  _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    bool  _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool refreshControlInsetsAffectScrollViewRubberBanding;
@property (readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)decrementInsetHeight:(double)arg1;
- (void)incrementInsetHeight:(double)arg1;
- (id)initWithScrollView:(id)arg1;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (bool)refreshControlInsetsAffectScrollViewRubberBanding;
- (id)scrollView;

@end

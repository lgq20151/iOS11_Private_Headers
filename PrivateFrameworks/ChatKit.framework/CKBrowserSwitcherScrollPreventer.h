/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserSwitcherScrollPreventer : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    <CKBrowserSwitcherScrollPreventerDelegate> * _delegate;
    bool  _engaged;
    UIScrollView * _horizontalScrollView;
    bool  _scrollEnabled;
    bool  _switching;
    UILongPressGestureRecognizer * _touchTracker;
    UIScrollView * _verticalScrollView;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserSwitcherScrollPreventerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEngaged, nonatomic) bool engaged;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIScrollView *horizontalScrollView;
@property (nonatomic) bool scrollEnabled;
@property (readonly) Class superclass;
@property (getter=isSwitching, nonatomic) bool switching;
@property (nonatomic, retain) UIScrollView *verticalScrollView;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)horizontalScrollView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEngaged;
- (bool)isSwitching;
- (void)layoutSubviews;
- (bool)scrollEnabled;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngaged:(bool)arg1;
- (void)setHorizontalScrollView:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setSwitching:(bool)arg1;
- (void)setVerticalScrollView:(id)arg1;
- (void)touchTrackerRecognized:(id)arg1;
- (id)verticalScrollView;

@end

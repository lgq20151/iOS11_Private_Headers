/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusScrollManager : NSObject {
    NSHashTable * _activelyScrollingScrollViews;
    UIScreen * _screen;
    _UIFocusDisplayLinkScrollAnimator * _scrollViewAnimator;
}

@property (nonatomic, readonly) NSHashTable *activelyScrollingScrollViews;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) _UIFocusDisplayLinkScrollAnimator *scrollViewAnimator;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollView:(id)arg1 toShowFocusItemWithInfo:(id)arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollView:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 targetOffset:(struct CGPoint { double x1; double x2; })arg4 targetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_ensureFocusItemIsOnscreen:(id)arg1 inScrollView:(id)arg2;
- (void)_scrollToFocusItemWithInfo:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 inScrollView:(id)arg3;
- (id)activelyScrollingScrollViews;
- (void)animateOffsetOfScrollView:(id)arg1 toShowFocusItem:(id)arg2;
- (void)cancelScrollingForScrollView:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentOffsetForScrollView:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3 targetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGPoint { double x1; double x2; })contentOffsetForScrollView:(id)arg1 toShowRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3 targetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGPoint { double x1; double x2; })currentVelocityForScrollView:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (bool)isScrollingScrollView:(id)arg1;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1;
- (id)screen;
- (id)scrollViewAnimator;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForScrollView:(id)arg1;

@end

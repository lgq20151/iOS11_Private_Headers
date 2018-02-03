/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate> {
    bool  _active;
    UISwipeActionController * _controller;
    UIContextualAction * _currentAction;
    unsigned long long  _currentDirection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _extraInsets;
    NSIndexPath * _indexPath;
    UISwipeActionPullView * _leadingPullView;
    bool  _shouldReenableUserInteraction;
    NSDictionary * _swipeDirectionToPullView;
    UIView * _swipedView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _swipedViewInitialPosition;
    UISwipeActionPullView * _trailingPullView;
}

@property (nonatomic) bool active;
@property (nonatomic) UISwipeActionController *controller;
@property (nonatomic, retain) UIContextualAction *currentAction;
@property (nonatomic) unsigned long long currentDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } extraInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSIndexPath *indexPath;
@property (nonatomic, retain) UISwipeActionPullView *leadingPullView;
@property (nonatomic) bool shouldReenableUserInteraction;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *swipeDirectionToPullView;
@property (nonatomic, retain) UIView *swipedView;
@property (nonatomic) struct CGPoint { double x1; double x2; } swipedViewInitialPosition;
@property (nonatomic, retain) UISwipeActionPullView *trailingPullView;

- (void).cxx_destruct;
- (void)_createPullViewsIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPullView:(id)arg1 inSwipedItem:(id)arg2 withContainer:(id)arg3;
- (void)_performSwipeAction:(id)arg1 inPullview:(id)arg2 swipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg3;
- (id)_pullViewForSwipeDirection:(unsigned long long)arg1;
- (void)_resetItemWithSwipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg1 animated:(bool)arg2 deletion:(bool)arg3 completion:(id /* block */)arg4;
- (void)_resetPullViewsImmediately;
- (unsigned long long)_swipeDirectionForPullView:(id)arg1;
- (void)_updatePullView:(id)arg1;
- (bool)active;
- (void)beginSwipe;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1;
- (id)controller;
- (id)currentAction;
- (unsigned long long)currentDirection;
- (void)endSwipe;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })extraInsets;
- (id)indexPath;
- (id)initWithController:(id)arg1 indexPath:(id)arg2;
- (id)leadingPullView;
- (void)moveItemWithSwipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg1 completion:(id /* block */)arg2;
- (void)performPrimaryActionWithSwipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg1;
- (struct { unsigned long long x1; bool x2; bool x3; double x4; double x5; })prepareWithSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2;
- (void)resetItemWithSwipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setActive:(bool)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentAction:(id)arg1;
- (void)setCurrentDirection:(unsigned long long)arg1;
- (void)setExtraInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIndexPath:(id)arg1;
- (void)setLeadingPullView:(id)arg1;
- (void)setShouldReenableUserInteraction:(bool)arg1;
- (void)setSwipeDirectionToPullView:(id)arg1;
- (void)setSwipedView:(id)arg1;
- (void)setSwipedViewInitialPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTrailingPullView:(id)arg1;
- (bool)shouldDismissWithTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldReenableUserInteraction;
- (void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2;
- (id)swipeDirectionToPullView;
- (id)swipedView;
- (struct CGPoint { double x1; double x2; })swipedViewInitialPosition;
- (id)trailingPullView;
- (void)updateLayout;

@end

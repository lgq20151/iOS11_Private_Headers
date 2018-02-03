/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
    unsigned int  _hasParentScrollView;
    UIScrollView * _scrollView;
    SEL  _scrollViewAction;
}

@property (nonatomic) UIScrollView *scrollView;

- (void).cxx_destruct;
- (double)_hysteresis;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (id)scrollView;
- (void)setDelegate:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

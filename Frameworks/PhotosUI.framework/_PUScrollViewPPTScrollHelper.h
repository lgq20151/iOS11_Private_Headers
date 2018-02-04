/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PUScrollViewPPTScrollHelper : NSObject {
    id /* block */  __completionHandler;
    CADisplayLink * __displayLink;
    id /* block */  __incrementHandler;
    double  __lastIncrementTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originContentOffset;
    UIScrollView * _scrollView;
}

@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (setter=_setDisplayLink:, nonatomic) CADisplayLink *_displayLink;
@property (setter=_setIncrementHandler:, nonatomic, copy) id /* block */ _incrementHandler;
@property (setter=_setLastIncrementTime:, nonatomic) double _lastIncrementTime;
@property (setter=_setOriginContentOffset:, nonatomic) struct CGPoint { double x1; double x2; } originContentOffset;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (void).cxx_destruct;
- (id /* block */)_completionHandler;
- (id)_displayLink;
- (void)_endScroll;
- (id /* block */)_incrementHandler;
- (void)_incrementScroll;
- (double)_lastIncrementTime;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (void)_setDisplayLink:(id)arg1;
- (void)_setIncrementHandler:(id /* block */)arg1;
- (void)_setLastIncrementTime:(double)arg1;
- (void)_setOriginContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (id)initWithScrollView:(id)arg1;
- (struct CGPoint { double x1; double x2; })originContentOffset;
- (id)scrollView;
- (void)scrollWithStartHandler:(id /* block */)arg1 incrementHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
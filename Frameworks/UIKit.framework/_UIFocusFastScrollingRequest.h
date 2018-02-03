/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusFastScrollingRequest : NSObject {
    unsigned long long  _allowedHeadings;
    id /* block */  _didBeginCallback;
    id /* block */  _didEndCallback;
    unsigned long long  _heading;
    _UIFocusEngineJoystickGestureRecognizer * _joystickGesture;
    UIPanGestureRecognizer * _panGesture;
    NSArray * _pressGestures;
    UIScrollView * _scrollView;
    long long  _scrollingType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic) unsigned long long allowedHeadings;
@property (nonatomic, copy) id /* block */ didBeginCallback;
@property (nonatomic, copy) id /* block */ didEndCallback;
@property (nonatomic) unsigned long long heading;
@property (nonatomic, retain) _UIFocusEngineJoystickGestureRecognizer *joystickGesture;
@property (nonatomic, retain) UIPanGestureRecognizer *panGesture;
@property (nonatomic, retain) NSArray *pressGestures;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) long long scrollingType;
@property (nonatomic) struct CGPoint { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (unsigned long long)allowedHeadings;
- (id /* block */)didBeginCallback;
- (id /* block */)didEndCallback;
- (unsigned long long)heading;
- (id)joystickGesture;
- (id)panGesture;
- (id)pressGestures;
- (id)scrollView;
- (long long)scrollingType;
- (void)setAllowedHeadings:(unsigned long long)arg1;
- (void)setDidBeginCallback:(id /* block */)arg1;
- (void)setDidEndCallback:(id /* block */)arg1;
- (void)setHeading:(unsigned long long)arg1;
- (void)setJoystickGesture:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setPressGestures:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollingType:(long long)arg1;
- (void)setVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })velocity;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {
    UIImageView * _backgroundGlow;
    id  _delegate;
    UIColor * _dimmingColor;
    bool  _displayed;
    UIBarButtonItem * _highlightedBarButtonItem;
    UIImageView * _highlightedImageView;
    bool  _ignoresTouches;
    bool  _inPassthroughHitTest;
    NSArray * _passthroughViews;
    UITapGestureRecognizer * _singleFingerTapRecognizer;
    bool  _suppressesBackdrops;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *dimmingColor;
@property (nonatomic) bool displayed;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *highlightedBarButtonItem;
@property (nonatomic) bool ignoresTouches;
@property (nonatomic, retain) NSArray *passthroughViews;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesBackdrops;

+ (id)defaultDimmingColor;

- (void).cxx_destruct;
- (id)_backdropViewsToAnimate;
- (void)_simulateTap;
- (void)dealloc;
- (id)delegate;
- (id)dimmingColor;
- (void)dimmingRemovalAnimationDidStop;
- (void)display:(bool)arg1;
- (void)display:(bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;
- (bool)displayed;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (id)highlightedBarButtonItem;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)ignoresTouches;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)passthroughViews;
- (void)setDelegate:(id)arg1;
- (void)setDimmingColor:(id)arg1;
- (void)setDisplayed:(bool)arg1;
- (void)setHighlightedBarButtonItem:(id)arg1;
- (void)setIgnoresTouches:(bool)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setSuppressesBackdrops:(bool)arg1;
- (bool)suppressesBackdrops;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

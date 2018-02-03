/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning> {
    _UIViewControllerTransitionContext * _context;
    UIView * _from;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fromRect;
    <UIInputViewAnimationHost> * _host;
    UIView * _to;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _toRect;
    NSMapTable * _transitioningBackdropViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *fromKeyboard;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fromKeyboardFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <UIViewControllerContextTransitioning> *mainContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *toKeyboard;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } toKeyboardFrame;

+ (id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;

- (void)dealloc;
- (id)fromKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fromKeyboardFrame;
- (void)gatherTransitioningBackdropViews;
- (id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4;
- (id)mainContext;
- (id)toKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toKeyboardFrame;
- (void)transitionBackdropViewsBack;
- (void)transitionBackdropViewsToLowQuality;

@end

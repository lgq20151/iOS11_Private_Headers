/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endingBackIndicatorViewFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endingNewBackButtonFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endingNewTitleViewFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleTransitionDistance;
}

- (void)_animateContentView;
- (void)_animateLargeTitleView;
- (void)_animateScaleTransition;
- (void)_finishWithFinalLayout:(id)arg1 finalLargeTitleLayout:(id)arg2 invalidLayout:(id)arg3 invalidLargeTitleLayout:(id)arg4;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)_prepareScaleTransition;
- (void)animate;
- (void)cancel;
- (void)complete;
- (void)prepare;
- (int)transition;
- (id)viewUsingEaseOutCurve;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSplitTransitionView : UIView {
    bool  _centerFilled;
    id /* block */  _completionBlock;
    double  _currentProgress;
    CADisplayLink * _displayLink;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endFrame;
    double  _finalTransitionStartTime;
    double  _finishDuration;
    double  _finishProgress;
    bool  _isRebuilding;
    bool  _isSplitTranslation;
    double  _liftOffProgress;
    UIKeyboardSliceSet * _sliceSet;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startFrame;
    <UIKeyboardSplitTransitionDataSource> * _transitionDataSource;
    <UIKeyboardKeyplaneTransitionDelegate> * _transitionDelegate;
}

@property (readonly) NSArray *backgroundLayers;
@property (copy) id /* block */ completionBlock;
@property (readonly) NSArray *shadowLayers;
@property (nonatomic) <UIKeyboardSplitTransitionDataSource> *splitTransitionDataSource;
@property (nonatomic) <UIKeyboardKeyplaneTransitionDelegate> *splitTransitionDelegate;

- (id)backgroundLayers;
- (id)bottomDropShadow;
- (bool)canDisplayTransition;
- (id)centerDropShadow;
- (id)colorsForBackgroundLayer:(int)arg1;
- (id /* block */)completionBlock;
- (void)dealloc;
- (struct CGImage { }*)defaultKeyboardImage;
- (void)didMoveToWindow;
- (void)finalizeTransition;
- (void)finishWithProgress:(double)arg1 completionBlock:(id /* block */)arg2;
- (void)initializeLayers;
- (struct CGImage { }*)keyImageWithToken:(id)arg1;
- (id)outerCenterDropShadow;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectEnclosingKeyplane:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSplitTransitionDataSource:(id)arg1;
- (void)setSplitTransitionDelegate:(id)arg1;
- (id)shadowLayers;
- (bool)shouldAllowRubberiness;
- (bool)showDictationKey;
- (bool)showIntlKey;
- (struct CGSize { double x1; double x2; })sizeForShadowLayer:(int)arg1;
- (struct CGImage { }*)splitKeyboardImage;
- (id)splitTransitionDataSource;
- (id)splitTransitionDelegate;
- (id)topDropShadow;
- (void)transformForProgress:(double)arg1;
- (bool)transitionIsVisible;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(double)arg1;

@end

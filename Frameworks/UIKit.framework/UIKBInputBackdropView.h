/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBInputBackdropView : UIView {
    bool  _hasEndRect;
    bool  _hasStartRect;
    unsigned long long  _innerCorners;
    UIKBBackdropView * _inputBackdropFullView;
    UIKBBackdropView * _inputBackdropLeftView;
    UIKBBackdropView * _inputBackdropRightView;
    bool  _isTransitioning;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _savedEndRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _savedStartRect;
    long long  _style;
    double  _transitionGap;
    double  _transitionLeftOffset;
}

@property (nonatomic, retain) UIKBBackdropView *inputBackdropFullView;
@property (nonatomic, retain) UIKBBackdropView *inputBackdropLeftView;
@property (nonatomic, retain) UIKBBackdropView *inputBackdropRightView;
@property (readonly) long long style;

+ (bool)_retroactivelyRequiresConstraintBasedLayout;

- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(bool)arg1;
- (bool)_isTransitioning;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5;
- (void)_setInitialProgressWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 primaryBackdrop:(bool)arg2;
- (id)inputBackdropFullView;
- (id)inputBackdropLeftView;
- (id)inputBackdropRightView;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andRightViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 innerCorners:(int)arg3;
- (void)setInputBackdropFullView:(id)arg1;
- (void)setInputBackdropLeftView:(id)arg1;
- (void)setInputBackdropRightView:(id)arg1;
- (void)setTintOpacity:(double)arg1;
- (long long)style;
- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(long long)arg1 isSplit:(bool)arg2;

@end

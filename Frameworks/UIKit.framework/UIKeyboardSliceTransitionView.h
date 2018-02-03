/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView {
    NSMutableDictionary * _controlKeys;
    struct CGImage { } * _defaultKeyplaneImage;
    UIKBCacheToken * _keyplaneToken;
    CALayer * _leftKeys;
    long long  _orientation;
    struct { 
        unsigned int position : 1; 
        unsigned int slices : 1; 
        unsigned int backgroundAndShadows : 1; 
        unsigned int backgroundGradients : 1; 
        unsigned int topEdgeHighlight : 1; 
        unsigned int shiftKeys : 1; 
        unsigned int returnKeys : 1; 
        unsigned int moreIntlKeys : 1; 
    }  _rebuildFlags;
    CALayer * _rightKeys;
    CALayer * _spaceFill;
    struct CGImage { } * _splitKeyplaneImage;
    CALayer * _topEdgeHighlight;
}

- (void)_delayedUpdateTransition;
- (double)adjustedLeftWidthAtMergePoint;
- (double)adjustedRightWidthAtMergePoint;
- (bool)canDisplayTransition;
- (id)crossfadeOpacityAnimation;
- (void)dealloc;
- (struct CGImage { }*)defaultKeyboardImage;
- (struct CGImage { }*)getKeyboardImageAsSplit:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initializeLayers;
- (id)meshTransformForProgress:(double)arg1;
- (void)rebuildBackgroundAndShadowTransitions;
- (void)rebuildBackgroundGradientTransitions;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)rebuildMoreIntlKeys;
- (void)rebuildPositionTransition;
- (void)rebuildReturnSlices;
- (void)rebuildShadows;
- (void)rebuildShiftSlices;
- (void)rebuildSliceTransitions;
- (void)rebuildTopEdgeHighlightTransition;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)refreshKeyplaneImages;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setRebuildFlags;
- (struct CGImage { }*)splitKeyboardImage;
- (void)transformForProgress:(double)arg1;
- (void)updateTransition;
- (void)updateTransitionForSlice:(id)arg1 withStart:(id)arg2 startContents:(id)arg3 end:(id)arg4 endContents:(id)arg5 updateContents:(bool)arg6;
- (void)updateWithProgress:(double)arg1;

@end

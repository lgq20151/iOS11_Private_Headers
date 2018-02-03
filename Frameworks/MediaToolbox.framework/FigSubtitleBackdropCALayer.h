/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleBackdropCALayer : FigBaseCALayer {
    /* Warning: unhandled struct encoding: '{OpaqueFigSubtitleBackdropCALayerInternal=@@BBd@@@}' */ struct OpaqueFigSubtitleBackdropCALayerInternal { id x1; bool x2; bool x3; double x4; id x5; id x6; } * bdLayerInternal;
}

- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContents:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (bool)shouldEnableBackdropLayer;
- (void)updateBackdropLayer;
- (void)updateHDRContentState:(bool)arg1;
- (void)updateWindowOpacity:(double)arg1;

@end

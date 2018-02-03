/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject {
    UIView * _highlightTransformTargetView;
    bool  _highlighted;
    UIMotionEffectGroup * _installedHighlightedActionMotionEffectsGroup;
    bool  _pressed;
}

@property (nonatomic) UIView *highlightTransformTargetView;
@property (nonatomic) bool highlighted;
@property (nonatomic) bool pressed;

- (void).cxx_destruct;
- (void)_applyHighlightTransform;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_enlargedTransformForSize:(struct CGSize { double x1; double x2; })arg1 pressed:(bool)arg2;
- (void)_insertMotionEffects;
- (id)_newMotionEffectsGroupForHighlightedAction;
- (void)_removeMotionEffects;
- (id)highlightTransformTargetView;
- (bool)highlighted;
- (id)initWithHighlightTransformTargetView:(id)arg1;
- (bool)pressed;
- (void)setHighlightTransformTargetView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPressed:(bool)arg1;

@end

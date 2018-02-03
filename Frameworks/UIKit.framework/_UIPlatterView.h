/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPlatterView : UIView {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _additionalTransform;
    NSValue * _anchorPointValueToAdjustToOnMoveToWindow;
    bool  _appliesOriginalRotation;
    UIView * _backgroundView;
    bool  _backgroundVisible;
    UIView * _componentView;
    bool  _constrainSize;
    bool  _constrainSizeWhenNotLifted;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _containerCounterRotationTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _containerCounterScaleTransform;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    _UIPlatterShadowView * _diffuseShadowView;
    bool  _flipped;
    bool  _lifted;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    double  _orientationRotation;
    struct CGSize { 
        double width; 
        double height; 
    }  _overrideSize;
    _UIShapeView * _platterMaskView;
    _UIShapeView * _portalMaskView;
    _UIPortalView * _portalView;
    UIView * _portalWrapperView;
    bool  _precisionMode;
    _DUIPreview * _preview;
    _UIPlatterShadowView * _rimShadowView;
    double  _rotation;
    bool  _shadowVisible;
    double  _stackRotation;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } additionalTransform;
@property (nonatomic, retain) NSValue *anchorPointValueToAdjustToOnMoveToWindow;
@property (nonatomic) bool appliesOriginalRotation;
@property (nonatomic, readonly) UIView *backgroundView;
@property (getter=isBackgroundVisible, nonatomic) bool backgroundVisible;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } badgeLocation;
@property (nonatomic, retain) UIView *componentView;
@property (nonatomic) bool constrainSize;
@property (nonatomic) bool constrainSizeWhenNotLifted;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } containerCounterRotationTransform;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } containerCounterScaleTransform;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) _UIPlatterShadowView *diffuseShadowView;
@property (getter=isFlipped, nonatomic) bool flipped;
@property (getter=isLifted, nonatomic) bool lifted;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) double orientationRotation;
@property (nonatomic) struct CGSize { double x1; double x2; } overrideSize;
@property (nonatomic, readonly) _UIShapeView *platterMaskView;
@property (nonatomic, readonly) _UIShapeView *portalMaskView;
@property (nonatomic, retain) _UIPortalView *portalView;
@property (nonatomic, readonly) UIView *portalWrapperView;
@property (nonatomic) bool precisionMode;
@property (nonatomic, readonly, copy) _DUIPreview *preview;
@property (nonatomic, readonly) _UIPlatterShadowView *rimShadowView;
@property (nonatomic) double rotation;
@property (getter=isShadowVisible, nonatomic) bool shadowVisible;
@property (nonatomic) UIView *sourceView;
@property (nonatomic) double stackRotation;

- (void).cxx_destruct;
- (void)_unmaskPlatterView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })additionalTransform;
- (id)anchorPointValueToAdjustToOnMoveToWindow;
- (bool)appliesOriginalRotation;
- (id)backgroundView;
- (struct CGPoint { double x1; double x2; })badgeLocation;
- (id)componentView;
- (bool)constrainSize;
- (bool)constrainSizeWhenNotLifted;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })containerCounterRotationTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })containerCounterScaleTransform;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)didMoveToSuperview;
- (id)diffuseShadowView;
- (id)initWithDUIPreview:(id)arg1;
- (bool)isBackgroundVisible;
- (bool)isFlipped;
- (bool)isLifted;
- (bool)isShadowVisible;
- (struct CGPoint { double x1; double x2; })offset;
- (double)orientationRotation;
- (struct CGSize { double x1; double x2; })overrideSize;
- (id)platterMaskView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)portalMaskView;
- (id)portalView;
- (id)portalWrapperView;
- (bool)precisionMode;
- (id)preview;
- (id)rimShadowView;
- (double)rotation;
- (double)scaleFactor;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })scaleTransform;
- (void)setAdditionalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setAnchorPointValueToAdjustToOnMoveToWindow:(id)arg1;
- (void)setAppliesOriginalRotation:(bool)arg1;
- (void)setBackgroundVisible:(bool)arg1;
- (void)setComponentView:(id)arg1;
- (void)setComponentViews:(id)arg1;
- (void)setConstrainSize:(bool)arg1;
- (void)setConstrainSizeWhenNotLifted:(bool)arg1;
- (void)setContainerCounterRotationTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setContainerCounterScaleTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setFlipped:(bool)arg1;
- (void)setLifted:(bool)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOrientationRotation:(double)arg1;
- (void)setOverrideSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortalView:(id)arg1;
- (void)setPrecisionMode:(bool)arg1;
- (void)setRotation:(double)arg1;
- (void)setShadowVisible:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (void)setStackRotation:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sourceView;
- (double)stackRotation;
- (void)takeCounterTransformsToAddToContainer:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })targetTransform;
- (void)updateTransform;

@end

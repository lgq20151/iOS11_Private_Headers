/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStackedImageContainerLayer : CALayer <CALayerDelegate> {
    bool  _animatingStateChange;
    bool  _animatingToNormalState;
    double  _animationDelay;
    double  _animationDelayReference;
    UIView * _animationView;
    _UIStackedImageConfiguration * _configuration;
    unsigned long long  _controlState;
    CALayer * _cursorLayer;
    CALayer * _cursorLayerContainer;
    CATransformLayer * _cursorRotationTransformLayer;
    bool  _deferredInflationPending;
    id  _flatImage;
    CALayer * _flatLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusDirection;
    CALayer * _focusKeylineStrokeLayer;
    CALayer * _frontmostPerspectiveTransformLayer;
    CATransformLayer * _frontmostRotationTransformLayer;
    double  _idleModeFocusSizeOffset;
    NSArray * _imageLayers;
    CALayer * _imageLayersContainer;
    CATransformLayer * _imagePerspectiveTransformLayer;
    CATransformLayer * _imageRotationTransformLayer;
    NSString * _imageStackContentsGravity;
    <UINamedLayerStack> * _layerStack;
    bool  _layerStackInflated;
    unsigned long long  _layerStackInflationSeed;
    bool  _layerStackSupportsInflation;
    _UIStackedImageLayerDelegate * _layoutDelegate;
    CALayer * _maskLayer;
    CATransformLayer * _maskPerspectiveTransformLayer;
    CATransformLayer * _maskRotationTransformLayer;
    double  _maximumParallaxDepth;
    bool  _nonOpaqueShadow;
    CALayer * _overlayContainerLayer;
    CALayer * _overlayLayer;
    NSArray * _parallaxImages;
    NSArray * _parallaxLayerDepths;
    struct CGSize { 
        double width; 
        double height; 
    }  _radiosityImageScale;
    CALayer * _radiosityLayer;
    bool  _radiosityNeedsLayout;
    double  _radiosityRequestTime;
    double  _rotationAmount;
    double  _scale;
    CALayer * _selectedPlaceholderLayer;
    double  _selectionDuration;
    double  _selectionStartTime;
    long long  _selectionStyle;
    CALayer * _shadowLayer;
    bool  _singleLayerNoMask;
    CALayer * _specularLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationOffset;
    CALayer * _unmaskedOverlayContainerLayer;
    CALayer * _unmaskedOverlayLayer;
    CATransformLayer * _unmaskedOverlayPerspectiveTransformLayer;
    CATransformLayer * _unmaskedOverlayRotationTransformLayer;
}

@property (nonatomic, retain) _UIStackedImageConfiguration *configuration;
@property (nonatomic) unsigned long long controlState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusDirection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UINamedLayerStack> *layerStack;
@property (getter=isPressed, nonatomic) bool pressed;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

+ (id)_layerStackObservingKeys;
+ (struct CGSize { double x1; double x2; })_scaledSizeForSize:(struct CGSize { double x1; double x2; })arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;

- (void).cxx_destruct;
- (void)_applyFocusDirectionTransform;
- (void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1;
- (bool)_aspectMatchesLayerStack;
- (struct CGImage { }*)_cgImageForLayeredImage:(id)arg1;
- (bool)_configuredForNonOpaqueShadow;
- (id)_contentLayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cursorBounds;
- (void)_deselect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_displayFrameForModelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_fixedFrameTransformForDepth:(double)arg1 fudgeFactor:(double)arg2;
- (id)_flatLayer;
- (struct CGSize { double x1; double x2; })_focusCursorInsetSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_focusedScaleFactorForCurrentBounds;
- (double)_focusedShadowRadius;
- (double)_getShadowOpacity;
- (double)_idleModeFocusSizeOffset;
- (id)_imageLayersContainer;
- (id)_imageStackContentsGravity;
- (bool)_isFocused;
- (bool)_isFocusedIdle;
- (bool)_isFocusedOrFocusedIdle;
- (bool)_isHighlighted;
- (bool)_isNormal;
- (bool)_isSelected;
- (id)_layerBelowTitles;
- (struct CGPoint { double x1; double x2; })_layerStackToDisplayScaleFactor;
- (void)_layoutRadiosityLayer;
- (id)_overlayLayer;
- (id)_parallaxLayerDepths;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_perspectiveTransformForCurrentState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_positionAndSizeForLayerImage:(id)arg1;
- (id)_preferredLayoutDelegateForLayer:(id)arg1;
- (unsigned long long)_primaryControlStateForState:(unsigned long long)arg1;
- (bool)_radiosityEnabled;
- (id)_randomImage;
- (void)_removeLayerFromSuperlayer:(id)arg1;
- (void)_resetAnimatingToNormalState;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_rotationTransformForCurrentFocusDirection;
- (struct CGSize { double x1; double x2; })_roundedBoundsSize;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_scaleTransformForCurrentState;
- (struct CGSize { double x1; double x2; })_scaledSizeForCurrentState;
- (long long)_selectionStyle;
- (void)_setControlState:(unsigned long long)arg1 animated:(bool)arg2 focusAnimationCoordinator:(id)arg3 completion:(id /* block */)arg4;
- (void)_setDefaultParallaxLayerDepths;
- (void)_setFlatImage:(id)arg1;
- (void)_setFocusDirection:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)_setIdleModeFocusSizeOffset:(double)arg1;
- (void)_setImageStackContentsGravity:(id)arg1;
- (void)_setLayerStackInflated:(bool)arg1 seed:(unsigned long long)arg2;
- (void)_setOverlayLayer:(id)arg1;
- (void)_setParallaxImages:(id)arg1;
- (void)_setParallaxLayerDepths:(id)arg1;
- (void)_setSelectionStyle:(long long)arg1;
- (void)_setUnmaskedOverlayLayer:(id)arg1;
- (void)_setupFrontmostTransformLayers;
- (id)_shadowLayer;
- (void)_showImageLayers;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_specularTransformForCurrentState;
- (double)_unfocusedShadowRadius;
- (id)_unmaskedOverlayLayer;
- (void)_updateCornerRadiusFromConfig;
- (void)_updateFocusKeylineStrokeScale;
- (void)_updateFocusKeylineStrokeTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateFullBleedImageLayers;
- (void)_updateImageLayerFilterChains;
- (void)_updateImageLayerFilterValues;
- (void)_updateLayerForSelection;
- (void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1;
- (void)_updateNonOpaqueShadowStateFromLayerStack;
- (void)_updateNormalImageLayers;
- (void)_updateOverlayContainerLayerHierarchy:(bool)arg1;
- (void)_updatePerspective;
- (void)_updateRadiosityFromLayerStack;
- (void)_updateRotationAndTranslation:(id)arg1;
- (void)_updateShadowBounds;
- (void)_updateShadowPositionWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateShadowWithAnimationCoordinator:(id)arg1;
- (void)_updateSingleLayerNoMaskFromLayerStack;
- (void)_updateSpecularLayerContents;
- (void)_updateSpecularLayerContentsRect;
- (void)_wrapLayerInView:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)configuration;
- (unsigned long long)controlState;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })focusDirection;
- (id)init;
- (bool)isPressed;
- (bool)isSelected;
- (id)layerStack;
- (void)layoutSublayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeAllAnimations;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setControlState:(unsigned long long)arg1;
- (void)setControlState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setControlState:(unsigned long long)arg1 animated:(bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setLayerStack:(id)arg1;
- (void)setPressed:(bool)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2;
- (void)setPressed:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setRasterizationScale:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 focusAnimationCoordinator:(id)arg3;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {
    unsigned long long  _animationType;
    NSArray * _commonVisibleKeys;
    bool  _disableMeshOptimization;
    NSArray * _endGeometries;
    double  _offsetX;
    double  _opacityAnimationBeginTime;
    bool  _opacityAnimationDirectionForward;
    CADisplayLink * _opacityAnimationDisplayLink;
    double  _previousProgress;
    NSArray * _startGeometries;
    bool  _useInteractiveOpacity;
    double  _widthRatio;
}

@property (nonatomic) unsigned long long animationType;
@property (nonatomic, retain) NSArray *commonVisibleKeys;
@property (nonatomic) bool disableMeshOptimization;
@property (nonatomic, retain) NSArray *endGeometries;
@property (nonatomic) double opacityAnimationBeginTime;
@property (nonatomic) bool opacityAnimationDirectionForward;
@property (nonatomic, retain) CADisplayLink *opacityAnimationDisplayLink;
@property (nonatomic) double previousProgress;
@property (nonatomic, retain) NSArray *startGeometries;
@property (nonatomic) bool useInteractiveOpacity;

- (bool)_allowFacesToAdjoinToAdjacentFaces;
- (id)_animationsForEnd;
- (id)_animationsForStart;
- (void)_updateTransition;
- (unsigned long long)animationType;
- (void)commitTransitionRebuild;
- (id)commonVisibleKeys;
- (void)dealloc;
- (bool)disableMeshOptimization;
- (id)endGeometries;
- (id)geometriesForKeyplane:(id)arg1;
- (id)meshTransformForKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (double)opacityAnimationBeginTime;
- (bool)opacityAnimationDirectionForward;
- (id)opacityAnimationDisplayLink;
- (double)previousProgress;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)setAnimationType:(unsigned long long)arg1;
- (void)setCommonVisibleKeys:(id)arg1;
- (void)setDisableMeshOptimization:(bool)arg1;
- (void)setEndGeometries:(id)arg1;
- (void)setOpacityAnimationBeginTime:(double)arg1;
- (void)setOpacityAnimationDirectionForward:(bool)arg1;
- (void)setOpacityAnimationDisplayLink:(id)arg1;
- (void)setPreviousProgress:(double)arg1;
- (void)setStartGeometries:(id)arg1;
- (void)setUseInteractiveOpacity:(bool)arg1;
- (id)sortedCommonVisibleKeys;
- (id)startGeometries;
- (id)symmetricMeshTransformForKeyplane:(id)arg1;
- (void)updateOpacityAnimation:(id)arg1;
- (void)updateWithProgress:(double)arg1;
- (bool)useInteractiveOpacity;

@end

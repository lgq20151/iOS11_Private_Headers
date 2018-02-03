/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIVisualEffectImageView : UIImageView <_UIVisualEffectSubviewSource> {
    NSArray * _filters;
    _UIVisualEffectViewBackdropCaptureGroup * _primaryCaptureGroup;
    NSArray * _viewEffects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *viewEffects;

- (void).cxx_destruct;
- (void)_applyFilterValues:(id)arg1 baseName:(id)arg2 toLayer:(id)arg3;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(bool)arg3;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)addViewEffects:(id)arg1;
- (void)applyIdentityFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedFilterEffects;
- (void)applyRequestedViewEffects;
- (id)asBackdropView;
- (id)asImageView;
- (id)asLayer;
- (id)asView;
- (id)filters;
- (id)primaryCaptureGroup;
- (void)removeViewEffects;
- (void)setFilters:(id)arg1;
- (void)setPrimaryCaptureGroup:(id)arg1;
- (id)viewEffects;

@end

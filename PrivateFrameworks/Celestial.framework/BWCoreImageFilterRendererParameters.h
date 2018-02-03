/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWCoreImageFilterRendererParameters : NSObject <BWFilterRendererParameters> {
    NSArray * _filters;
    CIFilter * _originalOutputFilter;
    bool  _requiresDepthMap;
    bool  _requiresFaceLandmarks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CIFilter *originalOutputFilter;
@property (nonatomic, readonly) bool requiresDepthMap;
@property (nonatomic, readonly) bool requiresFaceLandmarks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) short type;

+ (bool)containsFilterRequiringFaceLandmarks:(id)arg1;
+ (void)initialize;

- (void)_ensureResourceRequirementsForFilters:(id)arg1 outputRequiresFaceLandmarks:(bool*)arg2 outputRequiresDepthMap:(bool*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)depthTypeForFilter:(id)arg1;
- (id)filters;
- (id)init;
- (id)initWithFilters:(id)arg1 originalOutputFilter:(id)arg2;
- (id)originalOutputFilter;
- (int)prepareForRenderingWithInputVideoFormat:(id)arg1;
- (bool)requiresDepthMap;
- (bool)requiresFaceLandmarks;
- (void)setFilters:(id)arg1;
- (void)setOriginalOutputFilter:(id)arg1;
- (bool)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2;
- (short)type;
- (void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;

@end

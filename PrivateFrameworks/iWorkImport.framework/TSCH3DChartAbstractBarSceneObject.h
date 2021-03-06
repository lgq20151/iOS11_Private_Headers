/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject

+ (Class)propertiesClass;
+ (void)setLowDetailedGeometriesForScene:(id)arg1;

- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 scene:(id)arg2;
- (float)chartMinZForScene:(id)arg1;
- (float)depthForScene:(id)arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })p_valueLabelPaddingForLabelPosition:(unsigned int)arg1;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;
- (bool)shouldRenderEachValue;
- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > { struct RenderElementInfo {} *x1; struct RenderElementInfo {} *x2; struct __compressed_pair<TSCH3D::RenderElementInfo *, std::__1::allocator<TSCH3D::RenderElementInfo> > { struct RenderElementInfo {} *x_3_1_1; } x3; }*)arg1 pipeline:(id)arg2;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })sortingPositionForElement:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1;
- (void)updateElementEffectsStates:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 depthToWidthRatio:(float)arg2;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState { struct array<TSCH3D::TexCoordTilingShaderEffectState::Data, 3> { struct Data { struct tvec2<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_1_3_2; } x_1_2_1; struct tvec2<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_2_3_2; } x_1_2_2; } x_1_1_1[3]; } x1; }*)arg1 series:(id)arg2 properties:(id)arg3 textureTiling:(id)arg4 areaSize:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg5 element:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg6;

@end

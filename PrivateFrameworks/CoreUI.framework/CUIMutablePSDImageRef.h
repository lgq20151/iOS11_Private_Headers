/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutablePSDImageRef : CUIPSDImageRef

- (void)addLayer:(id)arg1;
- (void)addLayoutMetricsChannel:(id)arg1;
- (void)addOrUpdateSlicesWithSliceRects:(id)arg1;
- (void)addOrUpdateSlicesWithXCutPositions:(id)arg1 yCutPositions:(id)arg2;
- (struct __CFData { }*)copyDefaultICCProfileData;
- (void)deleteLayerAtIndex:(unsigned int)arg1;
- (void)deleteLayoutMetricsChannelAtIndex:(unsigned int)arg1;
- (id)initWithPixelWidth:(unsigned long long)arg1 pixelHeight:(unsigned long long)arg2;
- (void)insertLayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertLayoutMetricsChannel:(id)arg1 atIndex:(unsigned int)arg2;
- (struct PSDGradient { double x1; double x2; bool x3; bool x4; bool x5; double x6; double x7; double x8; int x9; struct PSDColorRGBA { double x_10_1_1; double x_10_1_2; double x_10_1_3; double x_10_1_4; } x10; struct vector<PSDGradientColorStop, std::__1::allocator<PSDGradientColorStop> > { struct PSDGradientColorStop {} *x_11_1_1; struct PSDGradientColorStop {} *x_11_1_2; struct __compressed_pair<PSDGradientColorStop *, std::__1::allocator<PSDGradientColorStop> > { struct PSDGradientColorStop {} *x_3_2_1; } x_11_1_3; } x11; struct vector<PSDGradientOpacityStop, std::__1::allocator<PSDGradientOpacityStop> > { struct PSDGradientOpacityStop {} *x_12_1_1; struct PSDGradientOpacityStop {} *x_12_1_2; struct __compressed_pair<PSDGradientOpacityStop *, std::__1::allocator<PSDGradientOpacityStop> > { struct PSDGradientOpacityStop {} *x_3_2_1; } x_12_1_3; } x12; }*)newPSDGradientFromCUIPSDGradient:(id)arg1;
- (unsigned int)newSliceRectsArray:(struct PSDRect {}**)arg1 withSliceRects:(id)arg2;
- (unsigned int)newSliceRectsArray:(struct PSDRect {}**)arg1 withXCutPositions:(id)arg2 yCutPositions:(id)arg3;
- (unsigned int)newUInt32CArray:(unsigned int**)arg1 withNSArray:(id)arg2 prependNumber:(id)arg3 appendNumber:(id)arg4;
- (unsigned int)psdLayerBlendModeForCGBlendMode:(int)arg1;
- (bool)saveToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)saveWithCompletionHandler:(id /* block */)arg1;
- (void)setFileURL:(id)arg1;
- (void)updateSliceName:(id)arg1 atIndex:(unsigned int)arg2;

@end

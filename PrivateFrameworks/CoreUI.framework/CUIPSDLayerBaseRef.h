/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerBaseRef : NSObject {
    CUIPSDImageRef * _imageRef;
    unsigned int  _layerIndex;
}

@property (readonly) int blendMode;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly) double fillOpacity;
@property (readonly) bool hasLayerMask;
@property (readonly) bool hasVectorMask;
@property (readonly) double opacity;
@property (readonly) bool visibility;

- (struct CGImage { }*)_createMaskFromAlphaChannel:(long long)arg1;
- (id)_psdImageRef;
- (struct CPSDLayerRecord { int (**x1)(); struct CPSDFile {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; struct vector<CPSDChannelLengthInfo, std::__1::allocator<CPSDChannelLengthInfo> > { struct CPSDChannelLengthInfo {} *x_8_1_1; struct CPSDChannelLengthInfo {} *x_8_1_2; struct __compressed_pair<CPSDChannelLengthInfo *, std::__1::allocator<CPSDChannelLengthInfo> > { struct CPSDChannelLengthInfo {} *x_3_2_1; } x_8_1_3; } x8; unsigned int x9; unsigned int x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15; struct CPSDLayerMaskData { int (**x_16_1_1)(); struct CPSDFile {} *x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; unsigned int x_16_1_7; unsigned char x_16_1_8; unsigned char x_16_1_9; unsigned short x_16_1_10; unsigned int x_16_1_11; unsigned int x_16_1_12; unsigned int x_16_1_13; unsigned int x_16_1_14; unsigned char x_16_1_15; unsigned char x_16_1_16; } x16; struct CPSDLayerBlendingRanges { int (**x_17_1_1)(); struct CPSDFile {} *x_17_1_2; unsigned int x_17_1_3; unsigned int x_17_1_4; unsigned int x_17_1_5; struct vector<CPSDChannelBlendingInfo, std::__1::allocator<CPSDChannelBlendingInfo> > { struct CPSDChannelBlendingInfo {} *x_6_2_1; struct CPSDChannelBlendingInfo {} *x_6_2_2; struct __compressed_pair<CPSDChannelBlendingInfo *, std::__1::allocator<CPSDChannelBlendingInfo> > { struct CPSDChannelBlendingInfo {} *x_3_3_1; } x_6_2_3; } x_17_1_6; } x17; }*)_psdLayerRecord;
- (int)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)fillOpacity;
- (bool)hasLayerMask;
- (bool)hasVectorMask;
- (bool)isLayerGroup;
- (id)layerMaskRef;
- (id)name;
- (double)opacity;
- (id)vectorMaskRef;
- (bool)visibility;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>

@property (nonatomic, readonly) const void*baseAddress;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) <MTLTexture> *metalTexture;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic, readonly) struct __IOSurface { }*surface;

- (const void*)baseAddress;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface { }*)arg1 texture:(struct Texture { union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; void *x_1_1_2; } x1; })arg2 allowSRGB:(bool)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; struct CGContext {} *x10; float x11; bool x12; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_13_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_13_1_2; } x13; struct CGAffineTransform { double x_14_1_1; double x_14_1_2; double x_14_1_3; double x_14_1_4; double x_14_1_5; double x_14_1_6; } x14; unsigned int x15; unsigned long long x16; unsigned long long x17; int x18; bool x19; struct TreeCacheElement { unsigned long long x_20_1_1; struct Kernel {} *x_20_1_2; } x20[1024]; unsigned long long x21; struct ObjectCache<CI::Node> {} *x22; struct ObjectCache<CI::Node> {} *x23; double x24; double x25; id x26; struct RenderTask {} x27; int x28; bool x29; unsigned long long x30; id x31; }*)arg5;
- (id)metalTexture;

@end

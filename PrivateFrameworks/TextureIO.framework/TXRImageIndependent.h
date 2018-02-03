/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRImageIndependent : TXRImage {
    unsigned long long  _alphaInfo;
    void _dimensions;
    unsigned long long  _pixelFormat;
}

@property (nonatomic) unsigned long long alphaInfo;
@property (nonatomic, readonly) void dimensions;
@property (nonatomic, readonly) unsigned long long pixelFormat;

- (unsigned long long)alphaInfo;
- (void)dimensions;
- (bool)exportToURL:(id)arg1 uttype:(const struct __CFString { }*)arg2 error:(id*)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithCGImage:(struct CGImage { }*)arg1 pixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)initWithDimensions:(void *)arg1 pixelFormat:(void *)arg2 alphaInfo:(void *)arg3 bufferAllocator:(void *)arg4; // needs 4 arg types, found 3: unsigned long long, unsigned long long, id
- (id)initWithDimensions:(void *)arg1 pixelFormat:(void *)arg2 alphaInfo:(void *)arg3 bytesPerRow:(void *)arg4 bytesPerImage:(void *)arg5 buffer:(void *)arg6 offset:(void *)arg7; // needs 7 arg types, found 6: unsigned long long, unsigned long long, unsigned long long, unsigned long long, id, unsigned long long
- (id)initWithImage:(void *)arg1 dimensions:(void *)arg2 pixelFormat:(void *)arg3; // needs 3 arg types, found 2: id, unsigned long long
- (id)initWithImage:(void *)arg1 dimensions:(void *)arg2 pixelFormat:(void *)arg3 alphaInfo:(void *)arg4; // needs 4 arg types, found 3: id, unsigned long long, unsigned long long
- (struct CGImage { }*)newCGImageWithColorSpace:(struct CGColorSpace { }*)arg1 error:(id*)arg2;
- (unsigned long long)pixelFormat;
- (void)setAlphaInfo:(unsigned long long)arg1;

@end
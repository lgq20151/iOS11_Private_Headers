/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRTextureInfo : NSObject {
    unsigned long long  _alphaInfo;
    unsigned long long  _arrayLength;
    bool  _cubemap;
    void _dimensions;
    NSError * _error;
    unsigned long long  _mipmapLevelCount;
    unsigned long long  _pixelFormat;
}

@property (nonatomic) unsigned long long alphaInfo;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) bool cubemap;
@property (nonatomic) void dimensions;
@property (readonly) NSError *error;
@property (nonatomic) unsigned long long mipmapLevelCount;
@property (nonatomic) unsigned long long pixelFormat;

- (void).cxx_destruct;
- (unsigned long long)alphaInfo;
- (unsigned long long)arrayLength;
- (bool)cubemap;
- (void)dimensions;
- (id)error;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)pixelFormat;
- (void)setAlphaInfo:(unsigned long long)arg1;
- (void)setArrayLength:(unsigned long long)arg1;
- (void)setCubemap:(bool)arg1;
- (void)setDimensions;
- (void)setMipmapLevelCount:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;

@end

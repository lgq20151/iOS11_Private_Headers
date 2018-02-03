/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoFormat : BWFormat {
    unsigned long long  _bytesPerRowAlignment;
    unsigned int  _cacheMode;
    int  _colorSpaceProperties;
    unsigned long long  _extendedHeight;
    unsigned long long  _extendedWidth;
    unsigned long long  _height;
    NSDictionary * _pixelBufferAttributes;
    unsigned int  _pixelFormat;
    unsigned long long  _planeAlignment;
    bool  _prewireBuffers;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned int cacheMode;
@property (nonatomic, readonly) int colorSpaceProperties;
@property (nonatomic) unsigned long long extendedHeight;
@property (nonatomic) unsigned long long extendedWidth;
@property (nonatomic) unsigned long long height;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) bool prewireBuffers;
@property (nonatomic) unsigned long long width;

+ (id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2;
+ (int)colorSpacePropertiesForSourceThatSupportsWideColor:(bool)arg1 sourceColorSpace:(int)arg2 sourcePixelFormat:(unsigned int)arg3 sourceDimensions:(struct { int x1; int x2; })arg4 requestedPixelFormat:(unsigned int)arg5;
+ (int)colorSpacePropertiesWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned int)arg2 sourceDimensions:(struct { int x1; int x2; })arg3 requestedPixelFormat:(unsigned int)arg4;
+ (id)formatByResolvingRequirements:(id)arg1;
+ (void)initialize;
+ (id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg1;

- (id)_initWithResolvedPixelBufferAttributes:(id)arg1 colorSpaceProperties:(int)arg2;
- (unsigned long long)bytesPerRowAlignment;
- (unsigned int)cacheMode;
- (int)colorSpaceProperties;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)extendedHeight;
- (unsigned long long)extendedWidth;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long long)height;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;
- (id)pixelBufferAttributes;
- (unsigned int)pixelFormat;
- (unsigned long long)planeAlignment;
- (bool)prewireBuffers;
- (void)setBytesPerRowAlignment:(unsigned long long)arg1;
- (void)setCacheMode:(unsigned int)arg1;
- (void)setExtendedHeight:(unsigned long long)arg1;
- (void)setExtendedWidth:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setPlaneAlignment:(unsigned long long)arg1;
- (void)setPrewireBuffers:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end

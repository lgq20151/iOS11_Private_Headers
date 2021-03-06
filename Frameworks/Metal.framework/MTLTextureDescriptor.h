/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTextureDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long mipmapLevelCount;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) unsigned long long usage;
@property (nonatomic) unsigned long long width;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)texture2DDescriptorWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 mipmapped:(bool)arg4;
+ (id)textureCubeDescriptorWithPixelFormat:(unsigned long long)arg1 size:(unsigned long long)arg2 mipmapped:(bool)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

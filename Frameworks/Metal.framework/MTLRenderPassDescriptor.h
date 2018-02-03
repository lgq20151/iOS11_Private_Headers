/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {
    unsigned long long  _defaultRasterSampleCount;
    unsigned long long  _defaultSampleCount;
    unsigned long long  _imageblockSampleLength;
    unsigned long long  _renderTargetArrayLength;
    unsigned long long  _threadgroupMemoryLength;
    unsigned long long  _tileHeight;
    unsigned long long  _tileWidth;
}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) unsigned long long defaultRasterSampleCount;
@property (nonatomic) unsigned long long defaultSampleCount;
@property (nonatomic, copy) MTLRenderPassDepthAttachmentDescriptor *depthAttachment;
@property (nonatomic) unsigned long long imageblockSampleLength;
@property (nonatomic) unsigned long long renderTargetArrayLength;
@property (nonatomic) unsigned long long renderTargetHeight;
@property (nonatomic) unsigned long long renderTargetWidth;
@property (nonatomic, copy) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment;
@property (nonatomic) unsigned long long threadgroupMemoryLength;
@property (nonatomic) unsigned long long tileHeight;
@property (nonatomic) unsigned long long tileWidth;
@property (nonatomic, retain) <MTLBuffer> *visibilityResultBuffer;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)renderPassDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)defaultRasterSampleCount;
- (unsigned long long)defaultSampleCount;
- (unsigned long long)getSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)imageblockSampleLength;
- (unsigned long long)renderTargetArrayLength;
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;
- (void)setDefaultSampleCount:(unsigned long long)arg1;
- (void)setImageblockSampleLength:(unsigned long long)arg1;
- (void)setRenderTargetArrayLength:(unsigned long long)arg1;
- (void)setSamplePositions:(const struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1;
- (void)setTileHeight:(unsigned long long)arg1;
- (void)setTileWidth:(unsigned long long)arg1;
- (unsigned long long)threadgroupMemoryLength;
- (unsigned long long)tileHeight;
- (unsigned long long)tileWidth;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor {
    unsigned long long  _depthResolveFilter;
}

@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned long long depthResolveFilter;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned long long)depthResolveFilter;
- (void)setDepthResolveFilter:(unsigned long long)arg1;

@end

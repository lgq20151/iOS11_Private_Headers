/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {
    struct MTLStencilDescriptorPrivate { 
        unsigned long long stencilCompareFunction; 
        unsigned long long stencilFailureOperation; 
        unsigned long long depthFailureOperation; 
        unsigned long long depthStencilPassOperation; 
        unsigned int readMask; 
        unsigned int writeMask; 
    }  _private;
}

@property (readonly) const struct MTLStencilDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*stencilPrivate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)depthFailureOperation;
- (unsigned long long)depthStencilPassOperation;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned int)readMask;
- (void)setDepthFailureOperation:(unsigned long long)arg1;
- (void)setDepthStencilPassOperation:(unsigned long long)arg1;
- (void)setReadMask:(unsigned int)arg1;
- (void)setStencilCompareFunction:(unsigned long long)arg1;
- (void)setStencilFailureOperation:(unsigned long long)arg1;
- (void)setWriteMask:(unsigned int)arg1;
- (unsigned long long)stencilCompareFunction;
- (unsigned long long)stencilFailureOperation;
- (const struct MTLStencilDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; }*)stencilPrivate;
- (unsigned int)writeMask;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState {
    MTLDepthStencilDescriptor * _descriptor;
}

@property (nonatomic, readonly) MTLDepthStencilDescriptor *descriptor;

- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithBaseDepthStencilState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _ExplorerDotLayer : CATransformLayer {
    CALayer * _contentLayer;
    CALayer * _lidLayer;
    CAGradientLayer * _overlayLayer;
}

@property (nonatomic, readonly) CALayer *contentLayer;
@property (nonatomic, readonly) CALayer *lidLayer;
@property (nonatomic, readonly) CAGradientLayer *overlayLayer;

- (void).cxx_destruct;
- (id)contentLayer;
- (id)init;
- (void)layoutSublayers;
- (id)lidLayer;
- (id)overlayLayer;

@end
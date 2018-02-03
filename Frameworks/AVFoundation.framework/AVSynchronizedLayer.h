/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSynchronizedLayer : CALayer {
    AVSynchronizedLayerInternal * _syncLayer;
}

@property (nonatomic, retain) AVPlayerItem *playerItem;

+ (id)synchronizedLayerWithPlayerItem:(id)arg1;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)layerDidBecomeVisible:(bool)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;

@end

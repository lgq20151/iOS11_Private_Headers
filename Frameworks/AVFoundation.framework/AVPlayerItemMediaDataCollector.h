/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal * _collectorInternal;
}

- (bool)_attachToPlayerItem:(id)arg1;
- (void)_detatchFromPlayerItem;
- (id)_weakReference;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

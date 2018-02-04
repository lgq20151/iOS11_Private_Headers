/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVolumeController : NSObject {
    bool  _muted;
    NSHashTable * _observers;
    double  _volume;
    SXKeyValueObserver * _volumeObserver;
}

@property (nonatomic) bool muted;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) double volume;
@property (nonatomic, retain) SXKeyValueObserver *volumeObserver;

- (void).cxx_destruct;
- (void)addVolumeObserver:(id)arg1;
- (id)initWithPreferredMuteState:(bool)arg1;
- (bool)muted;
- (id)observers;
- (void)removeVolumeObserver:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(double)arg1;
- (void)setVolumeObserver:(id)arg1;
- (void)toggleMute;
- (double)volume;
- (id)volumeObserver;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerRequest : MPRequest {
    MPCPlayerPath * _playerPath;
    MPPropertySet * _playingItemProperties;
    MPPropertySet * _queueItemProperties;
    MPPropertySet * _queueSectionProperties;
    struct { 
        long long reverseCount; 
        long long forwardCount; 
    }  _tracklistRange;
}

@property (nonatomic, retain) MPCPlayerPath *playerPath;
@property (nonatomic, copy) MPPropertySet *playingItemProperties;
@property (nonatomic, copy) MPPropertySet *queueItemProperties;
@property (nonatomic, copy) MPPropertySet *queueSectionProperties;
@property (nonatomic) struct { long long x1; long long x2; } tracklistRange;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)middlewareClasses;
- (id)performWithCompletion:(id /* block */)arg1;
- (id)playerPath;
- (id)playingItemProperties;
- (id)queueItemProperties;
- (id)queueSectionProperties;
- (void)setPlayerPath:(id)arg1;
- (void)setPlayingItemProperties:(id)arg1;
- (void)setQueueItemProperties:(id)arg1;
- (void)setQueueSectionProperties:(id)arg1;
- (void)setTracklistRange:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })tracklistRange;

@end
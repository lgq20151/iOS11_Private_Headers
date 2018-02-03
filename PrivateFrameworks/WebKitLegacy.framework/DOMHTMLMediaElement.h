/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMHTMLMediaElement : DOMHTMLElement

@property bool autoplay;
@property (readonly) DOMTimeRanges *buffered;
@property bool controls;
@property (copy) NSString *crossOrigin;
@property (readonly, copy) NSString *currentSrc;
@property double currentTime;
@property bool defaultMuted;
@property double defaultPlaybackRate;
@property (readonly) double duration;
@property (readonly) bool ended;
@property (readonly) DOMMediaError *error;
@property bool loop;
@property (copy) NSString *mediaGroup;
@property bool muted;
@property (readonly) unsigned short networkState;
@property (readonly) bool paused;
@property double playbackRate;
@property (readonly) DOMTimeRanges *played;
@property (copy) NSString *preload;
@property (readonly) unsigned short readyState;
@property (readonly) DOMTimeRanges *seekable;
@property (readonly) bool seeking;
@property (copy) NSString *src;
@property double volume;
@property bool webkitClosedCaptionsVisible;
@property (readonly) bool webkitHasClosedCaptions;
@property bool webkitPreservesPitch;

- (bool)autoplay;
- (id)buffered;
- (id)canPlayType:(id)arg1;
- (bool)controls;
- (id)crossOrigin;
- (id)currentSrc;
- (double)currentTime;
- (bool)defaultMuted;
- (double)defaultPlaybackRate;
- (double)duration;
- (bool)ended;
- (id)error;
- (void)fastSeek:(double)arg1;
- (double)getStartDate;
- (void)load;
- (bool)loop;
- (id)mediaGroup;
- (bool)muted;
- (unsigned short)networkState;
- (void)pause;
- (bool)paused;
- (void)play;
- (double)playbackRate;
- (id)played;
- (id)preload;
- (unsigned short)readyState;
- (id)seekable;
- (bool)seeking;
- (void)setAutoplay:(bool)arg1;
- (void)setControls:(bool)arg1;
- (void)setCrossOrigin:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDefaultMuted:(bool)arg1;
- (void)setDefaultPlaybackRate:(double)arg1;
- (void)setLoop:(bool)arg1;
- (void)setMediaGroup:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPreload:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)setVolume:(double)arg1;
- (void)setWebkitClosedCaptionsVisible:(bool)arg1;
- (void)setWebkitPreservesPitch:(bool)arg1;
- (id)src;
- (double)volume;
- (bool)webkitClosedCaptionsVisible;
- (bool)webkitHasClosedCaptions;
- (bool)webkitPreservesPitch;

@end

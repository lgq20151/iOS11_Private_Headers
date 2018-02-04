/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate> {
    NSDictionary * _alternateTracks;
    MPAlternateTextTrack * _currentTextTrack;
    bool  _disableAlternateTextTrackRendering;
    MPAVItem * _item;
    AVPlayerItemLegibleOutput * _legibleOutput;
    NSArray * _outOfBandTextTracks;
    NSMutableDictionary * _trackChangeDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAlternateTextTrackRendering;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, retain) NSArray *outOfBandTextTracks;
@property (nonatomic, retain) MPAlternateTextTrack *selectedAlternateTextTrack;
@property (readonly) Class superclass;

+ (id)subtitleLanguages;

- (void).cxx_destruct;
- (id)_currentTextTrackAccordingToAVF;
- (id)_keyForTrackType:(unsigned long long)arg1;
- (void)_suppressAVFSubtitleRendering;
- (void)beginTrackChanges;
- (void)commitTrackChanges;
- (id)currentTrackForType:(unsigned long long)arg1;
- (bool)disableAlternateTextTrackRendering;
- (void)enableLegibleOutputIfNecessary;
- (bool)hasTracksForTypes:(unsigned long long)arg1;
- (unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1;
- (id)initWithItem:(id)arg1;
- (bool)isLoaded;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)outOfBandTextTracks;
- (void)reloadData;
- (void)reloadDataWithChangedCaptionDisplayType:(bool)arg1;
- (id)selectedAlternateTextTrack;
- (void)setDisableAlternateTextTrackRendering:(bool)arg1;
- (void)setOutOfBandTextTracks:(id)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned long long)arg2;
- (unsigned long long)trackCountForTypes:(unsigned long long)arg1;
- (id)tracksForType:(unsigned long long)arg1;

@end
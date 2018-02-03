/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItem : NSObject <NSCopying> {
    AVPlayerItemInternal * _playerItem;
}

@property (nonatomic, retain) <NSObject><NSCopying> *AVKitData;
@property (getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:, nonatomic) bool _externalProtectionRequiredForPlayback;
@property (getter=_isRental, nonatomic, readonly) bool _rental;
@property (nonatomic, readonly) NSDate *_rentalExpirationDate;
@property (nonatomic, readonly) NSDate *_rentalPlaybackExpirationDate;
@property (getter=_isRentalPlaybackStarted, nonatomic, readonly) bool _rentalPlaybackStarted;
@property (nonatomic, readonly) NSDate *_rentalPlaybackStartedDate;
@property (nonatomic, readonly) NSDate *_rentalStartDate;
@property (getter=isApplicationAuthorizedForPlayback, nonatomic, readonly) bool applicationAuthorizedForPlayback;
@property (getter=isAuthorizationRequiredForPlayback, nonatomic, readonly) bool authorizationRequiredForPlayback;
@property (getter=isContentAuthorizedForPlayback, nonatomic, readonly) bool contentAuthorizedForPlayback;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *mediaDataCollectors;
@property (nonatomic, copy) NSString *mediaKind;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic) bool playHapticTracks;
@property (nonatomic) unsigned long long restrictions;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, readonly) long long status;

+ (struct OpaqueCMTimebase { }*)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
+ (int)_createFigPlaybackItemForFigPlayer:(struct OpaqueFigPlayer { }*)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned int)arg4 playbackItem:(struct OpaqueFigPlaybackItem {}**)arg5;
+ (bool)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (bool)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (bool)_hasOverrideForSelector:(SEL)arg1;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
+ (bool)automaticallyNotifiesObserversOfAllowProgressiveResume;
+ (bool)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+ (bool)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (bool)automaticallyNotifiesObserversOfAsset;
+ (bool)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (bool)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (bool)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (bool)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+ (bool)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (bool)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (bool)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (bool)automaticallyNotifiesObserversOfPresentationSize;
+ (bool)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (bool)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (bool)automaticallyNotifiesObserversOfStatus;
+ (bool)automaticallyNotifiesObserversOfTracks;
+ (bool)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+ (bool)automaticallyNotifiesObserversOfVariantIndex;
+ (void)initialize;
+ (id)playerItemWithAsset:(id)arg1;
+ (id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
+ (id)playerItemWithURL:(id)arg1;
+ (long long)propertyStorageCachePolicy;

- (id)AVKitData;
- (struct CGSize { double x1; double x2; })IFramePrefetchTargetDimensions;
- (unsigned int)RTCReportingFlags;
- (int)_CreateSeekID;
- (id)_URL;
- (void)_addFAListeners;
- (void)_addFPListeners;
- (void)_addLegibleOutput:(id)arg1;
- (void)_addMetadataCollector:(id)arg1;
- (void)_addMetadataOutput:(id)arg1;
- (void)_addSyncLayer:(id)arg1;
- (bool)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2;
- (void)_addVideoOutput:(id)arg1;
- (void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (bool)_alwaysMonitorsPlayability;
- (void)_applyCurrentAudioMix;
- (void)_applyMediaSelectionOptions;
- (void)_applySeekingWaitsForVideoCompositionRendering;
- (void)_applyTextStyleRules;
- (void)_attachToFigPlayer;
- (void)_attachToPlayer:(id)arg1;
- (id)_audioTimePitchAlgorithm;
- (long long)_availableFileSize;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (id)_cachedTracks;
- (bool)_canPlayFastForward;
- (bool)_canPlayFastReverse;
- (bool)_canPlayReverse;
- (bool)_canPlaySlowForward;
- (bool)_canStepBackward;
- (bool)_canStepForward;
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id /* block */)arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_clearCachedMediaSelectionGroup:(id)arg1;
- (void)_configurePlaybackItem;
- (void)_configureVideoCompositionColorProperties;
- (bool)_continuesPlayingDuringPrerollForRateChange;
- (bool)_continuesPlayingDuringPrerollForSeek;
- (struct OpaqueFigPlaybackItem { }*)_copyFigPlaybackItem;
- (struct OpaqueCMTimebase { }*)_copyProxyTimebase;
- (id)_copyStateDispatchQueue;
- (struct OpaqueCMTimebase { }*)_copyTimebase;
- (void)_didAccessKVOForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_duration;
- (id)_enabledTrackFormatDescriptions;
- (id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateMetadataOutputs;
- (void)_evaluateVideoOutputs;
- (struct OpaqueFigCPEProtector { }*)_figCPEProtector;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 withLegibleOutputsDictionaryKey:(id)arg5;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4;
- (long long)_fileSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_forwardPlaybackEndTime;
- (id)_fpNotificationNames;
- (bool)_getCachedNonForcedSubtitleEnabled:(bool*)arg1;
- (bool)_getCachedPresentationSize:(struct CGSize { double x1; double x2; }*)arg1;
- (bool)_hasEnabledAudio;
- (bool)_hasEnabledVideo;
- (bool)_hasEnqueuedVideoFrame;
- (bool)_hasSelectionInCachedMediaSelectionGroup:(id)arg1;
- (void)_informObserversAboutAvailabilityOfDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfTracks;
- (void)_insertAfterItem:(id)arg1;
- (void)_invokeReadyForEnqueueingHandlers;
- (bool)_isAFileBasedItemThatsReadyToPlay;
- (bool)_isExternalProtectionRequiredForPlayback;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
- (bool)_isNonForcedSubtitleDisplayEnabled;
- (bool)_isReadyForBasicInspection;
- (bool)_isReadyForInspectionOfDuration;
- (bool)_isReadyForInspectionOfMediaSelectionOptions;
- (bool)_isReadyForInspectionOfPresentationSize;
- (bool)_isReadyForInspectionOfTracks;
- (bool)_isRental;
- (bool)_isRentalPlaybackStarted;
- (id)_keysAndValuesForCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1;
- (void)_kickAssetObserversIfAppropriate;
- (id)_legibleOutputForKey:(id)arg1;
- (id)_legibleOutputsForKeys;
- (bool)_limitReadAhead;
- (id)_loadedTimeRanges;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id /* block */)arg1;
- (void)_markAsNeedingNewAssetWithFigPlaybackItem;
- (void)_markAsReadyForBasicInspection;
- (void)_markAsReadyForInspectionOfDuration;
- (void)_markAsReadyForInspectionOfMediaSelectionOptions;
- (void)_markAsReadyForInspectionOfPresentationSize;
- (void)_markAsReadyForInspectionOfTracks;
- (void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_maximumForwardBufferDuration;
- (id)_mediaKind;
- (id)_mediaOptionsSelectedByClient;
- (id)_mediaOptionsSelectedByClientForKey:(id)arg1;
- (id)_metadataCollectors;
- (id)_metadataOutputForKey:(id)arg1;
- (id)_metadataOutputsForKeys;
- (id)_nextItem;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary { }*)arg1;
- (long long)_playbackLikelyToKeepUpTrigger;
- (id)_playbackProperties;
- (id)_player;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (id)_playerConnection;
- (void)_playerDidAccessCurrentItemKeypaths;
- (void)_playerWillAccessCurrentItemKeypaths;
- (id)_preferredPixelBufferAttributes;
- (struct CGSize { double x1; double x2; })_presentationSize;
- (id)_previousItem;
- (id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1;
- (id)_propertyStorage;
- (void)_quietlySetAggressivelyCachesVideoFrames:(bool)arg1;
- (void)_quietlySetAlwaysMonitorsPlayability:(bool)arg1;
- (void)_quietlySetBlendsVideoFrames:(bool)arg1;
- (void)_quietlySetCanUseNetworkResourcesForLiveStreamingWhilePaused:(bool)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(bool)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(bool)arg1;
- (void)_quietlySetEQPreset:(int)arg1;
- (void)_quietlySetFigTimePitchAlgorithm:(struct __CFString { }*)arg1;
- (void)_quietlySetForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetImageQueueInterpolationCurve:(id)arg1;
- (void)_quietlySetLimitReadAhead:(bool)arg1;
- (void)_quietlySetMaximumForwardBufferDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetMaximumTrailingBufferDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetMediaKind:(id)arg1;
- (void)_quietlySetMinimumIntervalForIFrameOnlyPlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetNonForcedSubtitleDisplayEnabled:(bool)arg1;
- (void)_quietlySetPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (void)_quietlySetPlaybackProperties:(id)arg1;
- (void)_quietlySetRTCReportingFlags:(unsigned int)arg1;
- (void)_quietlySetRestrictions:(unsigned long long)arg1;
- (void)_quietlySetReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetReversesMoreVideoFramesInMemory:(bool)arg1;
- (void)_quietlySetServiceIdentifier:(id)arg1;
- (void)_quietlySetSoundCheckVolumeNormalization:(float)arg1;
- (void)_quietlySetSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)_quietlySetUsesIFrameOnlyPlaybackForHighRateScaledEdits:(bool)arg1;
- (void)_quietlySetUsesMinimalLatencyForVideoCompositionRendering:(bool)arg1;
- (void)_quietlySetVariantIndex:(long long)arg1;
- (void)_quietlySetVolumeAdjustment:(float)arg1;
- (void)_quietlySetWillNeverSeekBackwardsHint:(bool)arg1;
- (void)_removeFAListeners;
- (void)_removeFPListeners;
- (void)_removeFromItems;
- (void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
- (void)_removeLegibleOutput:(id)arg1;
- (void)_removeMediaOptionsSelectedByClient;
- (void)_removeMetadataCollector:(id)arg1;
- (void)_removeMetadataOutput:(id)arg1;
- (void)_removeSyncLayer:(id)arg1;
- (void)_removeVideoOutput:(id)arg1;
- (void)_renderingSuppressionDidChangeForOutput:(id)arg1;
- (id)_rentalExpirationDate;
- (id)_rentalPlaybackExpirationDate;
- (id)_rentalPlaybackStartedDate;
- (id)_rentalStartDate;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_reversePlaybackEndTime;
- (id)_seekableTimeRanges;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1;
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(bool)arg3;
- (void)_selectMediaOption:(id)arg1 inNonStreamingGroup:(id)arg2 cacheIfAppropriate:(bool)arg3;
- (void)_selectMediaOption:(id)arg1 inStreamingGroup:(id)arg2 cacheIfAppropriate:(bool)arg3;
- (void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2;
- (void)_setAsset:(id)arg1;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_setAudibleDRMInfo:(id)arg1;
- (void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1 forTrackID:(int)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2;
- (void)_setEQPreset:(int)arg1;
- (void)_setExternalProtectionRequiredForPlayback:(bool)arg1;
- (void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2;
- (void)_setRampInOutInfo:(id)arg1;
- (void)_setSuppressesVideoLayers:(bool)arg1;
- (void)_setSyncLayersOnFigPlaybackItem:(id)arg1;
- (void)_setTimedMetadata:(id)arg1;
- (void)_setURL:(id)arg1;
- (void)_setVideoCompositionColorPrimaries:(id)arg1;
- (void)_setVideoCompositionColorTransferFunction:(id)arg1;
- (void)_setVideoCompositionColorYCbCrMatrix:(id)arg1;
- (void)_setVideoCompositionFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1;
- (void)_setVideoCompositor:(void*)arg1;
- (bool)_suppressesVideoLayers;
- (bool)_suppressionForOutputs:(id)arg1;
- (id)_trackWithTrackID:(int)arg1;
- (id)_tracks;
- (id)_tracksFromAssetTrackIDs;
- (id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg2;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(bool)arg2;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 basedOnOutputs:(id)arg2;
- (void)_updatePropertyCacheAndTriggerKVOForPlayer:(id)arg1 usingKeys:(id)arg2;
- (void)_updateTaggedMetadataArray:(id)arg1;
- (void)_updateTimebase;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 basedOnOutputs:(id)arg2;
- (bool)_usesMinimalLatencyForVideoCompositionRendering;
- (id)_videoOutputs;
- (id)_weakReference;
- (void)_willAccessKVOForKey:(id)arg1;
- (bool)_willNeverSeekBackwardsHint;
- (id)accessLog;
- (void)addMediaDataCollector:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)addOutput:(id)arg1;
- (bool)aggressivelyCachesVideoFrames;
- (bool)allowProgressiveResume;
- (bool)allowProgressiveStartup;
- (bool)allowProgressiveSwitchUp;
- (bool)allowsExtendedReadAhead;
- (bool)alwaysMonitorsPlayability;
- (id)asset;
- (id)audioMix;
- (id)audioTimePitchAlgorithm;
- (id)automaticallyLoadedAssetKeys;
- (bool)blendsVideoFrames;
- (bool)canPlayFastForward;
- (bool)canPlayFastReverse;
- (bool)canPlayReverse;
- (bool)canPlaySlowForward;
- (bool)canPlaySlowReverse;
- (bool)canStepBackward;
- (bool)canStepForward;
- (bool)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (void)cancelPendingSeeks;
- (bool)continuesPlayingDuringPrerollForRateChange;
- (bool)continuesPlayingDuringPrerollForSeek;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDate;
- (id)currentEstimatedDate;
- (id)currentMediaSelection;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)customVideoCompositor;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didChangeValueForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)error;
- (id)errorLog;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (id)gaplessInfo;
- (bool)hasEnabledAudio;
- (bool)hasEnabledVideo;
- (bool)hasVideo;
- (id)imageQueueInterpolationCurve;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initialDate;
- (id)initialEstimatedDate;
- (bool)isApplicationAuthorizedForPlayback;
- (bool)isAuthorizationRequiredForPlayback;
- (bool)isContentAuthorizedForPlayback;
- (bool)isNonForcedSubtitleDisplayEnabled;
- (bool)isPlaybackBufferEmpty;
- (bool)isPlaybackBufferFull;
- (bool)isPlaybackLikelyToKeepUp;
- (bool)limitReadAhead;
- (double)liveUpdateInterval;
- (id)loadedTimeRanges;
- (float)maximumBitRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumForwardBufferDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumTrailingBufferDuration;
- (id)mediaDataCollectors;
- (id)mediaKind;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumIntervalForIFrameOnlyPlayback;
- (bool)networkUsuallyExceedsMaxBitRate;
- (id)outputs;
- (bool)playHapticTracks;
- (id)playabilityMetrics;
- (long long)playbackLikelyToKeepUpTrigger;
- (bool)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1;
- (double)preferredForwardBufferDuration;
- (struct CGSize { double x1; double x2; })preferredMaximumResolution;
- (double)preferredPeakBitRate;
- (struct CGSize { double x1; double x2; })preferredPeakPresentationSize;
- (struct CGSize { double x1; double x2; })presentationSize;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (void)removeMediaDataCollector:(id)arg1;
- (void)removeOutput:(id)arg1;
- (bool)requiresAccessLog;
- (unsigned long long)restrictions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (bool)reversesMoreVideoFramesInMemory;
- (bool)savesDownloadedDataToDiskWhenDone;
- (bool)seekToDate:(id)arg1;
- (bool)seekToDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (id)seekableTimeRanges;
- (double)seekableTimeRangesLastModifiedTime;
- (bool)seekingWaitsForVideoCompositionRendering;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)serviceIdentifier;
- (void)setAVKitData:(id)arg1;
- (void)setAggressivelyCachesVideoFrames:(bool)arg1;
- (void)setAllowProgressiveResume:(bool)arg1;
- (void)setAllowProgressiveStartup:(bool)arg1;
- (void)setAllowProgressiveSwitchUp:(bool)arg1;
- (void)setAllowsExtendedReadAhead:(bool)arg1;
- (void)setAlwaysMonitorsPlayability:(bool)arg1;
- (void)setAudioMix:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setBlendsVideoFrames:(bool)arg1;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(bool)arg1;
- (void)setContinuesPlayingDuringPrerollForRateChange:(bool)arg1;
- (void)setContinuesPlayingDuringPrerollForSeek:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setGaplessInfo:(id)arg1;
- (void)setIFramePrefetchTargetDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageQueueInterpolationCurve:(id)arg1;
- (void)setInitialDate:(id)arg1;
- (void)setInitialEstimatedDate:(id)arg1;
- (void)setLimitReadAhead:(bool)arg1;
- (void)setMaximumBitRate:(float)arg1;
- (void)setMaximumForwardBufferDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaximumTrailingBufferDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMediaKind:(id)arg1;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setNetworkUsuallyExceedsMaxBitRate:(bool)arg1;
- (void)setNonForcedSubtitleDisplayEnabled:(bool)arg1;
- (void)setPlayHapticTracks:(bool)arg1;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (void)setPreferredMaximumResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setPreferredPeakPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRTCReportingFlags:(unsigned int)arg1;
- (void)setRequiresAccessLog:(bool)arg1;
- (void)setRestrictions:(unsigned long long)arg1;
- (void)setReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setReversesMoreVideoFramesInMemory:(bool)arg1;
- (void)setSavesDownloadedDataToDiskWhenDone:(bool)arg1;
- (void)setSeekingWaitsForVideoCompositionRendering:(bool)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1;
- (void)setSuppressesAudioOnlyVariants:(bool)arg1;
- (void)setTextStyleRules:(id)arg1;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(bool)arg1;
- (void)setUsesMinimalLatencyForVideoCompositionRendering:(bool)arg1;
- (void)setVariantIndex:(long long)arg1;
- (void)setVideoApertureMode:(id)arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVolumeAdjustment:(float)arg1;
- (void)setWillNeverSeekBackwardsHint:(bool)arg1;
- (float)soundCheckVolumeNormalization;
- (float)speedThresholdForIFrameOnlyPlayback;
- (long long)status;
- (void)stepByCount:(long long)arg1;
- (bool)suppressesAudioOnlyVariants;
- (id)textStyleRules;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)timedMetadata;
- (id)tracks;
- (bool)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (bool)usesMinimalLatencyForVideoCompositionRendering;
- (id)valueForKeyForKVO:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)variantIndex;
- (id)videoApertureMode;
- (id)videoComposition;
- (float)volumeAdjustment;
- (void)willChangeValueForKey:(id)arg1;
- (bool)willNeverSeekBackwardsHint;

@end

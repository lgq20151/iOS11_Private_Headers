/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;

- (bool)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id*)arg3;
- (bool)_validateLanguageCode:(id)arg1;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (bool)canPerformMultiplePasses;
- (bool)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
- (void)setAlternateGroupID:(short)arg1;
- (void)setExpectsMediaDataInRealTime:(bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)setMediaDataLocation:(id)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(bool)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setProvisionalAlternateGroupID:(short)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (long long)status;

@end

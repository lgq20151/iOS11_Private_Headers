/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    struct OpaqueFigMutableComposition { } * _figMutableComposition;
}

@property (getter=_mutableComposition, nonatomic, readonly) struct OpaqueFigMutableComposition { }*mutableComposition;

- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (void)dealloc;
- (int)decodabilityValidationResult;
- (void)finalize;
- (bool)isDecodable;
- (bool)isPlayable;
- (int)playabilityValidationResult;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;

@end

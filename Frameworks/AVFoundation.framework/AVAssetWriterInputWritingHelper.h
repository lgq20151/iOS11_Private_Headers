/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate, AVKeyPathDependencyHost, AVWeakObservable> {
    AVFigAssetWriterTrack * _assetWriterTrack;
    AVAssetWriterInputPassDescription * _currentPassDescription;
    AVKeyPathDependencyManager * _keyPathDependencyManager;
    AVAssetWriterInputMediaDataRequester * _mediaDataRequester;
    bool  _observingSelf;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
}

@property (getter=_assetWriterTrack, nonatomic, readonly) AVFigAssetWriterTrack *assetWriterTrack;
@property (nonatomic, retain) AVAssetWriterInputPassDescription *currentPassDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_assetWriterTrack;
- (void)_attachToMediaDataRequester:(id)arg1;
- (void)_detachFromMediaDataRequester:(id)arg1;
- (void)_nudgeMediaDataRequesterIfAppropriate;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (void)beginPassIfAppropriate;
- (bool)canPerformMultiplePasses;
- (id)currentPassDescription;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)didStartInitialSession;
- (void)finalize;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3;
- (bool)isReadyForMoreMediaData;
- (void)markAsFinished;
- (void)markAsFinishedAndTransitionCurrentHelper:(id)arg1;
- (void)markCurrentPassAsFinished;
- (bool)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)prepareToEndSession;
- (bool)prepareToFinishWritingReturningError:(id*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)setCurrentPassDescription:(id)arg1;
- (long long)status;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;

@end

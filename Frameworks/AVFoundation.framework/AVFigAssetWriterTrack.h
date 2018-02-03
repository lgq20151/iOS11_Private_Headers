/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetWriterTrack : NSObject {
    bool  _aboveHighWaterLevel;
    NSObject<OS_dispatch_queue> * _aboveHighWaterLevelQueue;
    struct OpaqueFigAssetWriter { } * _figAssetWriter;
    AVMediaFileType * _mediaFileType;
    NSString * _mediaType;
    NSOperationQueue * _operationQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sampleBufferCoalescingInterval;
    int  _trackID;
    AVWeakReference * _weakReference;
}

@property (getter=isAboveHighWaterLevel, readonly) bool aboveHighWaterLevel;
@property (nonatomic, readonly) bool encoderSupportsMultiPass;
@property (nonatomic, readonly) struct OpaqueFigAssetWriter { }*figAssetWriter;
@property (nonatomic, readonly) AVMediaFileType *mediaFileType;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*pixelBufferPool;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sampleBufferCoalescingInterval;
@property (nonatomic, readonly) int trackID;

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(bool)arg6 attachedAdaptor:(id)arg7 error:(id*)arg8;

- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(bool)arg3 error:(id*)arg4;
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1;
- (void)_refreshAboveHighWaterLevel;
- (bool)addPixelBuffer:(struct __CVBuffer { }*)arg1 atPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(id*)arg3;
- (bool)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (bool)beginPassReturningError:(id*)arg1;
- (void)dealloc;
- (bool)encoderSupportsMultiPass;
- (void)endPassWithCompletionHandler:(id /* block */)arg1;
- (struct OpaqueFigAssetWriter { }*)figAssetWriter;
- (void)finalize;
- (id)init;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(bool)arg6 error:(id*)arg7;
- (bool)isAboveHighWaterLevel;
- (bool)markEndOfDataReturningError:(id*)arg1;
- (id)mediaFileType;
- (id)mediaType;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)prepareToEndSession;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sampleBufferCoalescingInterval;
- (void)setAlternateGroupID:(short)arg1;
- (void)setExcludeFromAutoSelection:(bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setFigDimensions:(id)arg1;
- (void)setFigMetadata:(id)arg1;
- (void)setFigTrackMatrix:(id)arg1;
- (void)setFormatDescriptions:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)setMediaDataLocation:(id)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setPreferredChunkAlignment:(long long)arg1;
- (void)setPreferredChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredChunkSize:(long long)arg1;
- (void)setProvisionalAlternateGroupID:(short)arg1;
- (void)setSampleBufferCoalescingInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setTrackVolume:(float)arg1;
- (int)trackID;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCustomVideoCompositorSession : NSObject {
    void * _callbackContextToken;
    <AVVideoCompositing> * _clientCustomCompositor;
    NSObject<OS_dispatch_queue> * _clientCustomCompositorQ;
    NSError * _clientError;
    NSObject<OS_dispatch_queue> * _clientErrorQ;
    NSDictionary * _clientRequiredPixelBufferAttributes;
    struct OpaqueFigVideoCompositor { } * _figCustomCompositor;
    NSObject<OS_dispatch_queue> * _finishedRequestQ;
    bool  _hasRegisteredFigCustomCompositorCallbacks;
    AVVideoCompositionRenderContext * _renderContext;
    NSObject<OS_dispatch_queue> * _renderContextQ;
    AVVideoComposition * _videoComposition;
    bool  _videoCompositionDidChange;
    NSObject<OS_dispatch_queue> * _videoCompositionQ;
    AVWeakReference * _weakSelf;
}

@property (nonatomic, readonly) bool supportsWideColorSourceFrames;

+ (bool)_colorPropertiesAreSetInVideoComposition:(id)arg1;
+ (id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2;

- (void)_cleanupFigCallbacks;
- (int)_compositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void*)arg4;
- (struct OpaqueFigVideoCompositor { }*)_copyFigVideoCompositor;
- (void)_customCompositorFigPropertyDidChange;
- (int)_customCompositorShouldCancelPendingFrames;
- (int)_setupFigCallbacks;
- (void)_willDeallocOrFinalize;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg1 didFinishWithComposedPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg1 didFinishWithError:(id)arg2;
- (void)compositionFrameDidCancel:(struct OpaqueFigVideoCompositorFrame { }*)arg1;
- (id)customVideoCompositor;
- (void)dealloc;
- (void)detachVideoComposition;
- (void)finalize;
- (id)getAndClearClientError;
- (id)initWithVideoComposition:(id)arg1;
- (void)setVideoComposition:(id)arg1;
- (bool)supportsWideColorSourceFrames;

@end

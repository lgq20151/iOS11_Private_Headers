/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigScreenCaptureController : NSObject {
    <FigScreenCaptureFrameHandlerDelegate> * _delegateWeak;
    struct OpaqueFigSimpleMutex { } * _lock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minIntervalBetweenFrames;
    struct OpaqueFigVirtualDisplaySession { } * _session;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) <FigScreenCaptureFrameHandlerDelegate> *delegate;
@property (nonatomic) struct OpaqueFigSimpleMutex { }*lock;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minIntervalBetweenFrames;
@property (nonatomic) struct OpaqueFigVirtualDisplaySession { }*session;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)screenCaptureControllerWithSize:(struct CGSize { double x1; double x2; })arg1 minIntervalBetweenFrames:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

- (void)dealloc;
- (id)delegate;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(unsigned int)arg4;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 minIntervalBetweenFrames:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct OpaqueFigSimpleMutex { }*)lock;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minIntervalBetweenFrames;
- (struct OpaqueFigVirtualDisplaySession { }*)session;
- (void)setDelegate:(id)arg1;
- (void)setLock:(struct OpaqueFigSimpleMutex { }*)arg1;
- (void)setMinIntervalBetweenFrames:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSession:(struct OpaqueFigVirtualDisplaySession { }*)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)startCapture;
- (void)stopCapture;

@end

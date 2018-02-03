/* made by EzioChiu.
 */

@protocol BWFigVideoCaptureStreamStillImageCaptureDelegate <NSObject>

@required

- (void)captureStream:(BWFigVideoCaptureStream *)arg1 didCapturePreBracketedEV0ImageWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)captureStream:(BWFigVideoCaptureStream *)arg1 didCompleteStillImageCaptureWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 referenceFrameBracketedCaptureSequenceNumber:(NSNumber *)arg3;
- (void)captureStream:(BWFigVideoCaptureStream *)arg1 stillImageCaptureError:(int)arg2;
- (void)captureStreamWillBeginStillImageCapture:(BWFigVideoCaptureStream *)arg1;

@end

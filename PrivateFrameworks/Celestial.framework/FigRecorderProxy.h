/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigRecorderProxy : FigCaptureSessionProxy {
    long long  _identifier;
    <FigCaptureSessionPreviewTapDelegate> * _previewTapDelegate;
    bool  _previewTapOpened;
    struct OpaqueFigRecorder { } * _recorder;
}

- (void)closePreviewTap;
- (void)dealloc;
- (long long)identifier;
- (id)initWithFigRecorder:(struct OpaqueFigRecorder { }*)arg1 identifier:(long long)arg2;
- (int)openPreviewTapWithDelegate:(id)arg1;

@end

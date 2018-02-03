/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigSmartcam : NSObject {
    struct { 
        float sceneConfidences[13]; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } sceneConfidencesTimestamp; 
    }  _hints;
    NSLock * _hintsLock;
    <FigSmartcamClassifier> * _imageClassifier;
    int  _inputImageHeight;
    unsigned int  _inputImagePixelFormat;
    int  _inputImageWidth;
    struct OpaqueFigCaptureISPProcessingSession { } * _ispProcessingSession;
}

@property (readonly) int inputImageHeight;
@property (readonly) unsigned int inputImagePixelFormat;
@property (readonly) int inputImageWidth;

- (struct { int x1; int x2; int x3; })classifierVersion;
- (void)dealloc;
- (id)initWithProcessingType:(int)arg1 ispProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg2;
- (id)initWithProcessingType:(int)arg1 ispProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg2 inputImageWidth:(int)arg3 inputImageHeight:(int)arg4 inputImageFormat:(unsigned int)arg5;
- (bool)inputImage:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)inputImageHeight;
- (unsigned int)inputImagePixelFormat;
- (int)inputImageWidth;
- (bool)sceneClassifierWith:(struct __CVBuffer { }*)arg1 result:(float*)arg2;
- (void)sceneHints:(struct { float x1[13]; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1;

@end

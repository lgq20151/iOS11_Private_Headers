/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceFormatInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  defaultActiveMaxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  defaultActiveMinFrameDuration;
    FigCaptureSourceFormat * sourceFormat;
    NSArray * supportedDepthDataFormats;
    NSArray * videoSupportedFrameRateRanges;
}

@end

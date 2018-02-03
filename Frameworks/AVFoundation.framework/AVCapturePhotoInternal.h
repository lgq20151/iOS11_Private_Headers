/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoInternal : NSObject {
    unsigned int  actualPhotoProcessingFlags;
    AVCaptureBracketedStillImageSettings * bracketSettings;
    AVCameraCalibrationData * cameraCalibrationData;
    AVDepthData * depthData;
    bool  didTryToDecodeDepthData;
    NSDictionary * embeddedThumbnailPhotoFormat;
    struct __CVBuffer { } * embeddedThumbnailSourcePixelBuffer;
    unsigned int  expectedPhotoProcessingFlags;
    bool  isRawPhoto;
    NSDictionary * metadata;
    unsigned long long  photoCount;
    struct __CVBuffer { } * photoPixelBuffer;
    struct __IOSurface { } * photoSurface;
    unsigned long long  photoSurfaceSize;
    AVApplePortraitMetadata * portraitMetadata;
    struct __CVBuffer { } * previewPixelBuffer;
    AVCaptureResolvedPhotoSettings * resolvedSettings;
    unsigned long long  sequenceCount;
    NSString * sourceDeviceType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  timestamp;
    AVCapturePhotoSettings * unresolvedSettings;
}

@end

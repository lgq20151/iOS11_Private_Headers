/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoOutputInternal : NSObject {
    int  HDRSceneObserverCount;
    NSArray * availableLivePhotoVideoCodecTypes;
    NSArray * availablePhotoCodecTypes;
    NSArray * availablePhotoFileTypes;
    NSArray * availablePhotoPixelFormatTypes;
    NSArray * availableRawPhotoFileTypes;
    NSArray * availableRawPhotoPixelFormatTypes;
    NSObject<OS_dispatch_group> * beginEndIrisMovieCaptureHostTimeDispatchGroup;
    NSObject<OS_dispatch_queue> * beginEndIrisMovieCaptureHostTimeQueue;
    bool  depthDataDeliveryEnabled;
    bool  depthDataDeliverySupported;
    bool  dualCameraDualPhotoDeliveryEnabled;
    bool  dualCameraDualPhotoDeliverySupported;
    bool  dualCameraFusionSupported;
    bool  filterRenderingEnabled;
    int  flashSceneObserverCount;
    struct ct_green_tea_logger_s { } * greenTeaLogger;
    bool  highResolutionCaptureEnabled;
    bool  imageOptimizationForOfflineVideoStabilizationSupported;
    bool  isFlashScene;
    bool  isHDRScene;
    bool  isStillImageStabilizationScene;
    long long  lastSettingsUniqueID;
    bool  lensStabilizationDuringBracketedCaptureSupported;
    bool  livePhotoAutoTrimmingEnabled;
    bool  livePhotoCaptureEnabled;
    bool  livePhotoCaptureSupported;
    bool  livePhotoCaptureSuspended;
    struct { 
        int width; 
        int height; 
    }  livePhotoMovieDimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  livePhotoMovieDuration;
    bool  livePhotoMovieProcessingSuspended;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  livePhotoMovieVideoFrameDuration;
    unsigned long long  maxBracketedCapturePhotoCount;
    bool  optimizesImagesForOfflineVideoStabilization;
    AVCapturePhotoSettings * photoSettingsForSceneMonitoring;
    NSMutableArray * prepareRequests;
    NSMutableArray * requests;
    struct OpaqueFigSimpleMutex { } * requestsLock;
    NSObject<OS_dispatch_queue> * sceneDetectionObserversDispatchQueue;
    NSString * sourceDeviceType;
    int  stillImageStabilizationSceneObserverCount;
    bool  stillImageStabilizationSupported;
    NSArray * supportedFlashModes;
    NSArray * supportedHDRModes;
    AVWeakReference * weakReference;
}

@end

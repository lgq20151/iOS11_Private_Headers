/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureConnectionInternal : NSObject {
    bool  active;
    long long  activeVideoStabilizationMode;
    NSArray * audioChannelLevels;
    NSMutableArray * audioChannels;
    AVCaptureInputPort * audioInputPort;
    bool  automaticallyAdjustsVideoMirroring;
    bool  cameraIntrinsicMatrixDeliveryEnabled;
    bool  cameraIntrinsicMatrixDeliverySupported;
    int  changeSeed;
    NSString * connectionID;
    AVCaptureInputPort * depthDataInputPort;
    bool  enabled;
    bool  hasActiveObservers;
    bool  hasVideoMinFrameDurationObserver;
    NSMutableArray * inputPorts;
    long long  lastGetAudioLevelsTime;
    AVCaptureInputPort * metadataInputPort;
    AVCaptureInputPort * metadataItemInputPort;
    AVWeakReference * outputWeakReference;
    long long  preferredVideoStabilizationMode;
    AVCaptureDevice * sourceDevice;
    AVCaptureInputPort * videoInputPort;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  videoMaxFrameDuration;
    double  videoMaxScaleAndCropFactor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  videoMinFrameDuration;
    bool  videoMirrored;
    bool  videoMirroringSupported;
    long long  videoOrientation;
    bool  videoOrientationSupported;
    AVWeakReference * videoPreviewLayerWeakReference;
    int  videoRetainedBufferCountHint;
    double  videoScaleAndCropFactor;
    bool  videoStabilizationEnabled;
}

@end

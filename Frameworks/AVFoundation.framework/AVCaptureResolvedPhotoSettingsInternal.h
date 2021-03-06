/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {
    bool  EV0PhotoDeliveryEnabled;
    bool  HDREnabled;
    bool  adjustedPhotoFiltersEnabled;
    bool  dualCameraFusionEnabled;
    struct { 
        int width; 
        int height; 
    }  embeddedThumbnailDimensions;
    bool  flashEnabled;
    struct { 
        int width; 
        int height; 
    }  livePhotoMovieDimensions;
    bool  livePhotoMovieEnabled;
    struct { 
        int width; 
        int height; 
    }  photoDimensions;
    NSArray * photoManifest;
    struct { 
        int width; 
        int height; 
    }  previewDimensions;
    struct { 
        int width; 
        int height; 
    }  rawPhotoDimensions;
    bool  squareCropEnabled;
    bool  stillImageStabilizationEnabled;
    bool  turboModeEnabled;
    long long  uniqueID;
}

- (void)dealloc;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVWeakReferencingDelegateStorage * delegateOverrideStorage;
    AVWeakReferencingDelegateStorage * delegateStorage;
    bool  faceTrackingMetadataObjectTypesAvailable;
    NSArray * metadataObjectTypes;
    NSObject<OS_dispatch_queue> * objectQueue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rectOfInterest;
    struct OpaqueFigSimpleMutex { } * remoteQueueMutex;
    struct remoteQueueReceiverOpaque { } * remoteReceiverQueue;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end

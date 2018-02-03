/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDepthDataOutputInternal : NSObject {
    bool  alwaysDiscardsLateDepthData;
    AVWeakReferencingDelegateStorage * delegateOverrideStorage;
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSObject<OS_dispatch_queue> * depthDataQueue;
    bool  filteringEnabled;
    struct OpaqueFigSimpleMutex { } * remoteQueueMutex;
    struct remoteQueueReceiverOpaque { } * remoteReceiverQueue;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end

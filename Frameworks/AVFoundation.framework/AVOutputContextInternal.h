/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputContextInternal : NSObject {
    int  applicationPID;
    <AVOutputContextCommunicationChannelDelegate> * communicationChannelDelegate;
    <AVOutputContextImpl> * impl;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    unsigned long long  outputDeviceFeatures;
}

- (void).cxx_destruct;

@end

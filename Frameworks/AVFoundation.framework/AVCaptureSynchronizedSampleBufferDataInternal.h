/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSynchronizedSampleBufferDataInternal : NSObject {
    long long  droppedReason;
    bool  hasCorrespondingDepthData;
    struct opaqueCMSampleBuffer { } * sampleBuffer;
    bool  sampleBufferWasDropped;
}

@end

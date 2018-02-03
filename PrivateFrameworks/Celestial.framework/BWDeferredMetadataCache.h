/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeferredMetadataCache : NSObject {
    struct BWDeferredMetadataCacheEntry { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
        struct __CFDictionary {} *metadataDict; 
        short useCount; 
        short age; 
    }  _cache;
    struct OpaqueFigSimpleMutex { } * _lock;
    int  _numberOfExpectedSampleBuffersForEachPTS;
    struct OpaqueFigCaptureStream { } * _stream;
}

@property (nonatomic) int numberOfExpectedSampleBuffersForEachPTS;

- (void)addMetadataAttachmentToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withDutyCycleMetadataCache:(id)arg2;
- (void)dealloc;
- (void)flush;
- (id)initWithCaptureStream:(struct OpaqueFigCaptureStream { }*)arg1 atomicTransactions:(bool)arg2;
- (int)numberOfExpectedSampleBuffersForEachPTS;
- (void)setNumberOfExpectedSampleBuffersForEachPTS:(int)arg1;

@end

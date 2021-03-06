/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputStream : MRAVBufferedOutputStream {
    AVOutputContextCommunicationChannel * _communicationChannel;
    AVOutputContext * _outputContext;
}

@property (nonatomic, readonly) AVOutputContext *outputContext;

- (void)dealloc;
- (id)description;
- (bool)hasSpaceAvailable;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToMemory;
- (id)initWithOutputContext:(id)arg1;
- (id)initWithURL:(id)arg1 append:(bool)arg2;
- (id)outputContext;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

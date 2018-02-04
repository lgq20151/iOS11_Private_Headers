/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCGDataConsumer : NSObject {
    NSError * _error;
    <TSUStreamWriteChannel> * _writeChannel;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

+ (struct CGDataConsumer { }*)newCGDataConsumerForWriteChannel:(id)arg1;

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (id)init;
- (id)initWithWriteChannel:(id)arg1;
- (unsigned long long)putBytes:(const void*)arg1 count:(unsigned long long)arg2;

@end
/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSStream : NSObject

@property <NSStreamDelegate> *delegate;
@property (readonly, copy) NSError *streamError;
@property (readonly) unsigned long long streamStatus;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id*)arg2 outputStream:(id*)arg3;
+ (void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4;
+ (void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id*)arg3 outputStream:(id*)arg4;

- (void)close;
- (id)delegate;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end

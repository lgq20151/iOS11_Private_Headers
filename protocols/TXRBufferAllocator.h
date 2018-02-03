/* made by EzioChiu.
 */

@protocol TXRBufferAllocator <NSObject>

@required

- (<TXRBuffer> *)newBufferWithLength:(unsigned long long)arg1;

@optional

- (<TXRBuffer> *)newBufferWithBytesNoCopy:(void *)arg1 length:(void *)arg2 deallocNotification:(void *)arg3 error:(void *)arg4; // needs 4 arg types, found 10: void*, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned long long, void*, id*

@end

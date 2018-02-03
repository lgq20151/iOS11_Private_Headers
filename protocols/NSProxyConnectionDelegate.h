/* made by EzioChiu.
 */

@protocol NSProxyConnectionDelegate <NSObject>

@required

- (void)cleanup;
- (void)connected:(int)arg1;
- (void)outboundConnectionCompleteWithError:(int)arg1;
- (void)outboundConnectionReceivedData:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_data> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end

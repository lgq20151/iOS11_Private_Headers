/* made by EzioChiu.
 */

@protocol GEOMapDataPlugin <NSObject>

@required

- (void)receiveEndpointRequest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (void)remoteIsReadyNotification;

@end
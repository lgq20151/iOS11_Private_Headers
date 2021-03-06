/* made by EzioChiu.
 */

@protocol OSASyncProxyServices <NSObject>

@required

- (void)deliver:(NSString *)arg1 tasking:(NSString *)arg2 taskId:(NSString *)arg3 fromBlob:(NSData *)arg4;
- (void)listDevices:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)request:(void *)arg1 logList:(void *)arg2; // needs 2 arg types, found 11: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)request:(void *)arg1 logListWithOptions:(void *)arg2 onComplete:(void *)arg3; // needs 3 arg types, found 12: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)request:(void *)arg1 transferGroupWithOptions:(void *)arg2 onComplete:(void *)arg3; // needs 3 arg types, found 12: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)request:(void *)arg1 transferLog:(void *)arg2 onComplete:(void *)arg3; // needs 3 arg types, found 12: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)requestProxyMetadata:(void *)arg1 onComplete:(void *)arg2; // needs 2 arg types, found 11: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*

@end

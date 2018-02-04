/* made by EzioChiu.
 */

@protocol AccessoryHIDXPCClientProtocol <NSObject>

@required

- (void)getReportResponse:(void *)arg1 componentID:(void *)arg2 reportType:(void *)arg3 reportID:(void *)arg4 report:(void *)arg5 withReply:(void *)arg6; // needs 6 arg types, found 11: NSString *, unsigned short, unsigned char, unsigned char, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)inReport:(void *)arg1 componentID:(void *)arg2 report:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned short, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)registerHIDDescriptor:(void *)arg1 componentID:(void *)arg2 dictionary:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned short, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)unregisterAllDescriptors:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)unregisterHIDDescriptor:(void *)arg1 componentID:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
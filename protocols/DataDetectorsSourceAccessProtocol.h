/* made by EzioChiu.
 */

@protocol DataDetectorsSourceAccessProtocol

@required

- (void)fileForSourceRead:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)filesForSourceRead:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)writeSourceFromJSONFile:(void *)arg1 source:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSFileHandle *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)writeSourceFromRawData:(void *)arg1 source:(void *)arg2 signature:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 9: NSMutableArray *, NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

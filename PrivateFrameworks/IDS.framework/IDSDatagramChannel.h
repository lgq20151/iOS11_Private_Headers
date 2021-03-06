/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDatagramChannel : NSObject {
    _IDSDatagramChannel * _internal;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;

- (void).cxx_destruct;
- (void)_logReceivingStats:(unsigned long long)arg1;
- (void)_logSendingStats:(unsigned long long)arg1;
- (void)_setNeedEncryptionInfoPreference:(bool)arg1;
- (void)_writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 options:(struct { unsigned int x1; unsigned long long x2; }*)arg4 completionHandler:(id /* block */)arg5;
- (void)addNewIDSDataChannelLinkWithAttributes:(char *)arg1 linkAttributesLength:(unsigned short)arg2;
- (id)cachedMetadata;
- (void)close;
- (id)connectedLinks;
- (void)dealloc;
- (id)defaultLink;
- (id)description;
- (unsigned short)generateMetadata:(char *)arg1 maxSize:(unsigned long long)arg2 withDatagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 options:(struct { unsigned int x1; unsigned long long x2; }*)arg4;
- (id)initWithDestination:(id)arg1;
- (id)initWithSocketDescriptor:(int)arg1;
- (void)invalidate;
- (void)optinStreamIDs:(id)arg1;
- (void)optoutStreamIDs:(id)arg1;
- (void)processMetadataForDatagram:(char *)arg1 size:(unsigned long long)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; }*)arg3 options:(struct { unsigned int x1; unsigned long long x2; }*)arg4;
- (void)readDatagramWithCompletionHandler:(id /* block */)arg1;
- (void)readDatagramsWithCompletionHandler:(id /* block */)arg1;
- (void)readyToRead;
- (void)removeIDSDataChannelLinkContext:(BOOL)arg1 linkUUID:(id)arg2;
- (void)selectDefaultLink:(BOOL)arg1;
- (void)sendEventConnectedWithDummyLinkInfo;
- (void)sendMediaEncryptionInfoWithMKM:(id)arg1 MKS:(id)arg2 MKI:(unsigned int)arg3;
- (void)sendMediaMembershipChangedInfo:(unsigned char)arg1;
- (void)sendMetadata;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (void)setReadHandlerWithOptions:(id /* block */)arg1;
- (void)start;
- (int)underlyingFileDescriptor;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 options:(struct { unsigned int x1; unsigned long long x2; }*)arg4 completionHandler:(id /* block */)arg5;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 flags:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)writeDatagrams:(const void**)arg1 datagramSizes:(unsigned int*)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 datagramCount:(int)arg4 options:(struct { unsigned int x1; unsigned long long x2; }*)arg5 completionHandler:(id /* block */)arg6;

@end

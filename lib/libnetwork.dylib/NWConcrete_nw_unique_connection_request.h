/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_unique_connection_request : NSObject <OS_nw_unique_connection_request> {
    NWConcrete_nw_connection * connection;
    NSObject<OS_nw_endpoint> * endpoint;
    bool  isIncoming;
    bool  isPending;
    bool  pendingRequestAccepted;
    id /* block */  requestCompletionBlock;
    unsigned long long  sequenceNumber;
    BOOL  service;
    unsigned char  uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

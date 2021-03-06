/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request> {
    unsigned int  complete;
    id /* block */  completion;
    unsigned long long  consumed_data_count;
    NSObject<OS_dispatch_data> * data;
    NSObject<OS_nw_array> * data_array;
    unsigned int  idempotent;
    NSObject<OS_nw_outbound_message> * message;
    NWConcrete_nw_write_request * nwr_next;
    unsigned char  variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

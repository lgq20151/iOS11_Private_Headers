/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_socks5_connection : NSObject <OS_nw_socks5_connection> {
    id /* block */  sc_cancel;
    unsigned long long  sc_id;
    NSObject<OS_nw_connection> * sc_in_connection;
    unsigned int  sc_in_connection_failed_or_sent_write_close;
    NWConcrete_nw_socks5_connection * sc_internally_retained_object;
    union { 
        char *byte_pointer; 
        struct in_addr {} *ipv4_addr; 
        struct in6_addr {} *ipv6_addr; 
        char *domain; 
    }  sc_out_address;
    unsigned char  sc_out_address_domain_length;
    unsigned char  sc_out_address_type;
    NSObject<OS_nw_connection> * sc_out_connection;
    unsigned int  sc_out_connection_failed_or_sent_write_close;
    unsigned int  sc_out_disable_proxy;
    NSObject<OS_dispatch_queue> * sc_queue;
    unsigned short  sc_shoes_request_length_hbo;
    unsigned char  sc_state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 shoes:(bool)arg3 disableProxy:(bool)arg4;

@end

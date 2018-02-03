/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_tcp_connection : NSObject <OS_tcp_connection> {
    unsigned int  tc_adaptive_read_count;
    unsigned int  tc_adaptive_read_events;
    unsigned int  tc_adaptive_write_count;
    unsigned int  tc_adaptive_write_events;
    unsigned int  tc_allow_socket_access;
    unsigned long long  tc_attempt_timeout_nanos;
    unsigned int  tc_attempt_timeout_should_generate_event;
    unsigned int  tc_better_route;
    unsigned char  tc_by;
    id /* block */  tc_cancel_handler;
    unsigned int  tc_client_owns_dup_fd;
    NSObject<OS_dispatch_queue> * tc_client_queue;
    BOOL  tc_connection_activity;
    NSObject<OS_dispatch_source> * tc_connection_attempt_timer;
    NSObject<OS_xpc_object> * tc_context;
    int  tc_dup_fd;
    int  tc_error;
    id /* block */  tc_event;
    unsigned int  tc_event_connected_delivered;
    unsigned int  tc_event_disconnected_delivered;
    unsigned int  tc_event_read_close_delivered;
    unsigned int  tc_event_write_close_delivered;
    unsigned long long  tc_id;
    void * tc_internally_retained_object;
    unsigned int  tc_keepalive_count;
    unsigned int  tc_keepalive_events;
    unsigned int  tc_keepalive_interval;
    struct __CFError { } * tc_last_nw_error;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  tc_lock;
    unsigned int  tc_minimum_throughput;
    NSObject<OS_nw_endpoint> * tc_network_endpoint;
    NSObject<OS_nw_parameters> * tc_network_parameters;
    unsigned int  tc_not_viable;
    NSObject<OS_nw_path> * tc_nw_current_path;
    id /* block */  tc_nw_tls_message;
    id /* block */  tc_nw_tls_prepare;
    NSObject<OS_nw_connection> * tc_nwconn;
    long long  tc_quality;
    unsigned int  tc_sent_connected;
    unsigned int  tc_sent_tls_finished;
    unsigned int  tc_started;
    unsigned char  tc_state;
    unsigned int  tc_state_has_been_preparing;
    int  tc_tls_mode;
    int  tc_usage_model;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParameters:(id)arg1;

@end

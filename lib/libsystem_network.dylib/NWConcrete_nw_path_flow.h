/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_path_flow : NSObject <OS_nw_path_flow> {
    unsigned int  assigned;
    NSObject<OS_nw_array> * discovered_endpoints;
    unsigned int  ecn_enabled;
    unsigned int  fast_open_blocked;
    NSObject<OS_nw_interface> * interface;
    struct necp_client_result_interface { 
        unsigned int generation; 
        unsigned int index; 
    }  interface_struct;
    NSObject<OS_nw_endpoint> * local_endpoint;
    NSObject<OS_xpc_object> * nexus_agent;
    struct necp_client_result_netagent { 
        unsigned int generation; 
        unsigned char netagent_uuid[16]; 
    }  nexus_agent_struct;
    unsigned int  nexus_flow_index;
    unsigned char  nexus_instance;
    void * nexus_key;
    unsigned int  nexus_key_length;
    unsigned int  nexus_port;
    NSObject<OS_nw_endpoint> * remote_endpoint;
    unsigned char  tfo_cookie;
    unsigned char  tfo_cookie_len;
    unsigned int  viable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /usr/lib/system/libsystem_network.dylib

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Image: /usr/lib/libnetwork.dylib

- (id)description;

@end

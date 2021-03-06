/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_path : NSObject <OS_nw_path> {
    const struct sk_nexusadv { } * advisory;
    NSObject<OS_xpc_object> * asserted_browse_agents;
    NSObject<OS_nw_browse_descriptor> * browse_descriptor;
    unsigned int  changed_from_previous;
    unsigned char  client_id;
    NSObject<OS_nw_interface> * connected_interface;
    unsigned int  ctl_command_code;
    unsigned int  ctl_command_tcp_seq_num;
    unsigned int  ctl_command_valid;
    unsigned int  ctl_command_value;
    unsigned int  defunct;
    NSObject<OS_nw_interface> * delegate;
    NSObject<OS_nw_interface> * direct;
    NSObject<OS_nw_array> * discovered_endpoints;
    NSObject<OS_xpc_object> * dns_search_domains;
    NSObject<OS_nw_array> * dns_servers;
    unsigned int  ecn_enabled;
    unsigned int  effective_mtu;
    unsigned int  effective_traffic_class;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned char  fallback_agent;
    NSObject<OS_xpc_object> * fallback_agent_domains;
    NSObject<OS_xpc_object> * fallback_agent_types;
    NSObject<OS_nw_interface> * fallback_interface;
    unsigned int  fast_open_blocked;
    struct ifnet_stats_per_flow { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned short x21; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; } * flow_interface_stats;
    struct necp_all_stats { union { struct necp_tcp_stats { struct necp_stats_hdr { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned long long x_1_3_3; } x_1_2_1; struct necp_stat_counts { unsigned long long x_2_3_1; unsigned long long x_2_3_2; unsigned long long x_2_3_3; unsigned long long x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; unsigned int x_2_3_8; unsigned int x_2_3_9; unsigned int x_2_3_10; unsigned int x_2_3_11; unsigned int x_2_3_12; } x_1_2_2; struct necp_basic_metadata { unsigned int x_3_3_1; unsigned int x_3_3_2; } x_1_2_3; struct necp_extra_tcp_metadata { struct necp_tcp_probe_status { unsigned int x_1_4_1 : 1; unsigned int x_1_4_2 : 1; unsigned int x_1_4_3 : 1; unsigned int x_1_4_4 : 1; } x_4_3_1; unsigned int x_4_3_2; unsigned int x_4_3_3; unsigned int x_4_3_4; unsigned int x_4_3_5; unsigned int x_4_3_6; unsigned int x_4_3_7; unsigned int x_4_3_8; unsigned int x_4_3_9; unsigned int x_4_3_10; unsigned int x_4_3_11; struct activity_bitmap { unsigned long long x_12_4_1; unsigned long long x_12_4_2[2]; } x_4_3_12; } x_1_2_4; } x_1_1_1; } x1; } * flow_stats_area;
    NSObject<OS_nw_array> * flows;
    unsigned int  has_ipv4;
    unsigned int  has_ipv6;
    unsigned int  is_direct;
    unsigned int  is_local;
    unsigned int  link_quality_abort;
    unsigned int  necp_satisfied;
    NSObject<OS_xpc_object> * network_agent_dictionary;
    unsigned int  nexus_flow_index;
    unsigned char  nexus_instance;
    void * nexus_key;
    unsigned int  nexus_key_length;
    unsigned int  nexus_port;
    unsigned int  no_fallback_timer;
    NSObject<OS_nw_interface> * override_interface;
    NSObject<OS_nw_endpoint> * override_local_endpoint;
    unsigned int  override_viable;
    NSObject<OS_nw_parameters> * parameters;
    unsigned int  partial_checksum_offload;
    struct nw_path_necp_result { 
        unsigned int routing_result; 
        union { 
            unsigned int tunnel_interface_index; 
            unsigned int scoped_interface_index; 
            unsigned int flow_divert_control_unit; 
            unsigned int filter_control_unit; 
        } routing_result_parameter; 
        unsigned int filter_control_unit; 
        unsigned int service_action; 
        unsigned char service_uuid[16]; 
        unsigned int service_flags; 
        unsigned int service_data; 
        unsigned int routed_interface_index; 
        unsigned int direct_interface_index; 
        unsigned int direct_interface_generation; 
        unsigned int delegate_interface_index; 
        unsigned int delegate_interface_generation; 
        unsigned int policy_id; 
        struct necp_client_result_netagent {} *netagents; 
        unsigned int num_netagents; 
        unsigned char __pad[4]; 
    }  policy_result;
    unsigned int  probe_connectivity;
    NSObject<OS_xpc_object> * proxy_settings;
    int  reason;
    char * reason_description;
    unsigned char  recommended_mss;
    NSObject<OS_xpc_object> * stats_regions;
    int  status;
    unsigned char  tfo_cookie;
    unsigned char  tfo_cookie_len;
    unsigned char  tfo_flags;
    unsigned int  traffic_mgmt_background;
    unsigned int  viable;
    unsigned int  weak_fallback;
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

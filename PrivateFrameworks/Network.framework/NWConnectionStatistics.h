/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWConnectionStatistics : NSObject {
    unsigned int  _awdMetricID;
    PBCodable * _awdReport;
    NSString * _clientIdentifier;
    struct netcore_stats_tcp_report { 
        union { 
            struct { 
                struct netcore_stats_tcp_statistics_report { 
                    unsigned long long bytes_in; 
                    unsigned long long bytes_out; 
                    unsigned long long bytes_duplicate; 
                    unsigned long long bytes_ooo; 
                    unsigned long long bytes_retransmitted; 
                    unsigned long long packets_in; 
                    unsigned long long packets_out; 
                    unsigned long long packets_duplicate; 
                    unsigned long long packets_ooo; 
                    unsigned long long packets_retransmitted; 
                    unsigned long long multipath_bytes_in_cell; 
                    unsigned long long multipath_bytes_out_cell; 
                    unsigned long long multipath_bytes_in_wifi; 
                    unsigned long long multipath_bytes_out_wifi; 
                    unsigned long long multipath_bytes_in_initial; 
                    unsigned long long multipath_bytes_out_initial; 
                    unsigned int time_to_dns_resolved_msecs; 
                    unsigned int time_to_dns_start_msecs; 
                    unsigned int dns_resolved_time_msecs; 
                    unsigned int time_to_connection_start_msecs; 
                    unsigned int time_to_connection_establishment_msecs; 
                    unsigned int connection_establishment_time_msecs; 
                    unsigned int flow_duration_msecs; 
                    unsigned int traffic_class; 
                    unsigned int current_rtt_msecs; 
                    unsigned int smoothed_rtt_msecs; 
                    unsigned int best_rtt_msecs; 
                    unsigned int rtt_variance; 
                    unsigned int syn_retransmission_count; 
                    unsigned int better_route_event_count; 
                    unsigned int connection_reuse_count; 
                    unsigned int app_reporting_data_stall_count; 
                    unsigned int app_data_stall_timer_msecs; 
                    int interface_type; 
                    int connected_interface_type; 
                    int multipath_service_type; 
                    unsigned int dns_answers_cached : 1; 
                    unsigned int connected : 1; 
                    unsigned int cellular_fallback : 1; 
                    unsigned int cellular_rrc_connected : 1; 
                    unsigned int kernel_reported_stalls : 1; 
                    unsigned int kernel_reporting_connection_stalled : 1; 
                    unsigned int kernel_reporting_read_stalled : 1; 
                    unsigned int kernel_reporting_write_stalled : 1; 
                    unsigned int tcp_fast_open : 1; 
                    unsigned int first_party : 1; 
                    unsigned int __pad_bits : 6; 
                    unsigned char __pad[6]; 
                } statistics_report; 
                struct netcore_stats_tcp_cell_fallback_report { 
                    struct netcore_stats_network_event { 
                        int network_event_type; 
                        unsigned int time_to_network_event_msecs; 
                    } network_events[20]; 
                    struct netcore_stats_data_usage_snapshot { 
                        unsigned long long bytes_in; 
                        unsigned long long bytes_out; 
                        unsigned long long multipath_bytes_in_cell; 
                        unsigned long long multipath_bytes_out_cell; 
                        unsigned long long multipath_bytes_in_wifi; 
                        unsigned long long multipath_bytes_out_wifi; 
                        unsigned long long multipath_bytes_in_initial; 
                        unsigned long long multipath_bytes_out_initial; 
                    } data_usage_snapshots_at_network_events[20]; 
                    int deny_reason; 
                    unsigned int network_event_count; 
                    unsigned int data_usage_snapshots_at_network_events_count; 
                    unsigned int fallback_timer_msecs; 
                    bool fellback; 
                    unsigned char __pad[7]; 
                } fallback_report; 
                struct netcore_stats_tcp_statistics_report { 
                    unsigned long long bytes_in; 
                    unsigned long long bytes_out; 
                    unsigned long long bytes_duplicate; 
                    unsigned long long bytes_ooo; 
                    unsigned long long bytes_retransmitted; 
                    unsigned long long packets_in; 
                    unsigned long long packets_out; 
                    unsigned long long packets_duplicate; 
                    unsigned long long packets_ooo; 
                    unsigned long long packets_retransmitted; 
                    unsigned long long multipath_bytes_in_cell; 
                    unsigned long long multipath_bytes_out_cell; 
                    unsigned long long multipath_bytes_in_wifi; 
                    unsigned long long multipath_bytes_out_wifi; 
                    unsigned long long multipath_bytes_in_initial; 
                    unsigned long long multipath_bytes_out_initial; 
                    unsigned int time_to_dns_resolved_msecs; 
                    unsigned int time_to_dns_start_msecs; 
                    unsigned int dns_resolved_time_msecs; 
                    unsigned int time_to_connection_start_msecs; 
                    unsigned int time_to_connection_establishment_msecs; 
                    unsigned int connection_establishment_time_msecs; 
                    unsigned int flow_duration_msecs; 
                    unsigned int traffic_class; 
                    unsigned int current_rtt_msecs; 
                    unsigned int smoothed_rtt_msecs; 
                    unsigned int best_rtt_msecs; 
                    unsigned int rtt_variance; 
                    unsigned int syn_retransmission_count; 
                    unsigned int better_route_event_count; 
                    unsigned int connection_reuse_count; 
                    unsigned int app_reporting_data_stall_count; 
                    unsigned int app_data_stall_timer_msecs; 
                    int interface_type; 
                    int connected_interface_type; 
                    int multipath_service_type; 
                    unsigned int dns_answers_cached : 1; 
                    unsigned int connected : 1; 
                    unsigned int cellular_fallback : 1; 
                    unsigned int cellular_rrc_connected : 1; 
                    unsigned int kernel_reported_stalls : 1; 
                    unsigned int kernel_reporting_connection_stalled : 1; 
                    unsigned int kernel_reporting_read_stalled : 1; 
                    unsigned int kernel_reporting_write_stalled : 1; 
                    unsigned int tcp_fast_open : 1; 
                    unsigned int first_party : 1; 
                    unsigned int __pad_bits : 6; 
                    unsigned char __pad[6]; 
                } connection_attempts[10]; 
                int report_reason; 
                unsigned int ip_address_attempt_count; 
            } legacy; 
            struct nw_connection_report_s { 
                unsigned long long bytes_in; 
                unsigned long long bytes_out; 
                unsigned long long bytes_duplicate; 
                unsigned long long bytes_ooo; 
                unsigned long long bytes_retransmitted; 
                unsigned long long packets_in; 
                unsigned long long packets_out; 
                unsigned long long multipath_bytes_in_cell; 
                unsigned long long multipath_bytes_out_cell; 
                unsigned long long multipath_bytes_in_wifi; 
                unsigned long long multipath_bytes_out_wifi; 
                unsigned long long multipath_bytes_in_initial; 
                unsigned long long multipath_bytes_out_initial; 
                unsigned int current_rtt_msecs; 
                unsigned int smoothed_rtt_msecs; 
                unsigned int best_rtt_msecs; 
                unsigned int rtt_variance; 
                unsigned int syn_retransmission_count; 
                unsigned int used_proxy_type; 
                unsigned int traffic_class; 
                unsigned int path_trigger_milliseconds; 
                unsigned int resolution_milliseconds; 
                unsigned int proxy_milliseconds; 
                unsigned int flow_connect_milliseconds; 
                unsigned int tls_milliseconds; 
                unsigned int flow_duration_milliseconds; 
                unsigned int ipv4_address_count; 
                unsigned int ipv6_address_count; 
                unsigned int connected_address_index; 
                unsigned int connection_reuse_count; 
                unsigned int data_stall_count; 
                unsigned int ipv4_dns_server_count; 
                unsigned int ipv6_dns_server_count; 
                int failure_reason; 
                int connected_interface_type; 
                int multipath_service_type; 
                int connection_mode; 
                int apple_host; 
                int apple_app; 
                int tls_version; 
                int stack_level; 
                unsigned char first_address_family; 
                unsigned char connected_address_family; 
                unsigned int triggered_path : 1; 
                unsigned int system_proxy_configured : 1; 
                unsigned int custom_proxy_configured : 1; 
                unsigned int fallback_eligible : 1; 
                unsigned int weak_fallback : 1; 
                unsigned int used_fallback : 1; 
                unsigned int resolution_required : 1; 
                unsigned int tls_configured : 1; 
                unsigned int tfo_configured : 1; 
                unsigned int multipath_configured : 1; 
                unsigned int connected : 1; 
                unsigned int tls_succeeded : 1; 
                unsigned int synthesized_ipv6_address : 1; 
                unsigned int synthesized_extra_ipv6_address : 1; 
                unsigned int ipv4_available : 1; 
                unsigned int ipv6_available : 1; 
                unsigned int used_tfo : 1; 
                unsigned int tls_version_timeout : 1; 
                unsigned int first_party : 1; 
                unsigned int __pad_bits : 5; 
                unsigned char __pad[3]; 
            } nw_connection_report; 
        } u; 
        bool delegated; 
        bool legacy; 
        unsigned char __pad[6]; 
    }  _report;
    NSString * _sourceIdentifier;
}

@property (nonatomic) unsigned int awdMetricID;
@property (nonatomic, retain) PBCodable *awdReport;
@property (nonatomic, readonly) unsigned long long bytesDuplicate;
@property (nonatomic, readonly) unsigned long long bytesIn;
@property (nonatomic, readonly) unsigned long long bytesOOO;
@property (nonatomic, readonly) unsigned long long bytesOut;
@property (nonatomic, readonly) unsigned long long bytesRetransmitted;
@property (nonatomic, readonly) bool cellularFallback;
@property (nonatomic, readonly) bool cellularRrcConnected;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, readonly) bool connected;
@property (nonatomic, readonly) int connectedInterfaceType;
@property (nonatomic, readonly) unsigned int connectionEstablishmentTimeMsecs;
@property (nonatomic, readonly) bool delegated;
@property (nonatomic, readonly) bool dnsAnswersCached;
@property (nonatomic, readonly) unsigned int dnsResolvedTimeMsecs;
@property (nonatomic, readonly) bool fallbackEligible;
@property (nonatomic, readonly) unsigned int flowDurationMsecs;
@property (nonatomic, readonly) int interfaceType;
@property (nonatomic, readonly) bool kernelReportedStalls;
@property (nonatomic, readonly) bool kernelReportingConnectionStalled;
@property (nonatomic, readonly) bool kernelReportingReadStalled;
@property (nonatomic, readonly) bool kernelReportingWriteStalled;
@property (nonatomic, readonly) unsigned long long packetsDuplicate;
@property (nonatomic, readonly) unsigned long long packetsIn;
@property (nonatomic, readonly) unsigned long long packetsOOO;
@property (nonatomic, readonly) unsigned long long packetsOut;
@property (nonatomic, readonly) unsigned long long packetsRetransmitted;
@property (nonatomic) struct netcore_stats_tcp_report { union { struct { struct netcore_stats_tcp_statistics_report { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned long long x_1_3_5; unsigned long long x_1_3_6; unsigned long long x_1_3_7; unsigned long long x_1_3_8; unsigned long long x_1_3_9; unsigned long long x_1_3_10; unsigned long long x_1_3_11; unsigned long long x_1_3_12; unsigned long long x_1_3_13; unsigned long long x_1_3_14; unsigned long long x_1_3_15; unsigned long long x_1_3_16; unsigned int x_1_3_17; unsigned int x_1_3_18; unsigned int x_1_3_19; unsigned int x_1_3_20; unsigned int x_1_3_21; unsigned int x_1_3_22; unsigned int x_1_3_23; unsigned int x_1_3_24; unsigned int x_1_3_25; unsigned int x_1_3_26; unsigned int x_1_3_27; unsigned int x_1_3_28; unsigned int x_1_3_29; unsigned int x_1_3_30; unsigned int x_1_3_31; unsigned int x_1_3_32; unsigned int x_1_3_33; int x_1_3_34; int x_1_3_35; int x_1_3_36; unsigned int x_1_3_37 : 1; unsigned int x_1_3_38 : 1; unsigned int x_1_3_39 : 1; unsigned int x_1_3_40 : 1; unsigned int x_1_3_41 : 1; unsigned int x_1_3_42 : 1; } x_1_2_1; } x_1_1_1; } x1; } report;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic, readonly) unsigned int tcpAppDataStallTimerMsecs;
@property (nonatomic, readonly) unsigned int tcpAppReportingDataStallCount;
@property (nonatomic, readonly) unsigned int tcpBetterRouteEventCount;
@property (nonatomic, readonly) unsigned int tcpConnectionReuseCount;
@property (nonatomic, readonly) bool tcpFastOpen;
@property (nonatomic, readonly) unsigned int tcpRTTBestMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTCurrentMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTSmoothedMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTVariance;
@property (nonatomic, readonly) unsigned int tcpSynRetransmissionCount;
@property (nonatomic, readonly) unsigned int timeToConnectionEstablishmentMsecs;
@property (nonatomic, readonly) unsigned int timeToConnectionStartMsecs;
@property (nonatomic, readonly) unsigned int timeToDnsResolvedMsecs;
@property (nonatomic, readonly) unsigned int timeToDnsStartMsecs;
@property (nonatomic, readonly) unsigned int trafficClass;

- (void).cxx_destruct;
- (id)_createDataUsageSnapshotFromStruct:(const struct netcore_stats_data_usage_snapshot { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; }*)arg1;
- (id)_createFallbackReportFromStruct:(const struct netcore_stats_tcp_cell_fallback_report { struct netcore_stats_network_event { int x_1_1_1; unsigned int x_1_1_2; } x1[20]; struct netcore_stats_data_usage_snapshot { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; unsigned long long x_2_1_6; unsigned long long x_2_1_7; unsigned long long x_2_1_8; } x2[20]; int x3; unsigned int x4; unsigned int x5; unsigned int x6; bool x7; unsigned char x8[7]; }*)arg1;
- (id)_createStatisticsReportFromStruct:(const struct netcore_stats_tcp_statistics_report { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; int x34; int x35; int x36; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 6; unsigned char x48[6]; }*)arg1;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (unsigned long long)bytesDuplicate;
- (unsigned long long)bytesIn;
- (unsigned long long)bytesOOO;
- (unsigned long long)bytesOut;
- (unsigned long long)bytesRetransmitted;
- (bool)cellularFallback;
- (bool)cellularRrcConnected;
- (id)clientIdentifier;
- (bool)connected;
- (int)connectedInterfaceType;
- (unsigned int)connectionEstablishmentTimeMsecs;
- (bool)delegated;
- (bool)dnsAnswersCached;
- (unsigned int)dnsResolvedTimeMsecs;
- (bool)fallbackEligible;
- (unsigned int)flowDurationMsecs;
- (id)initWithTCPReport:(struct netcore_stats_tcp_report { union { struct { struct netcore_stats_tcp_statistics_report { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned long long x_1_3_5; unsigned long long x_1_3_6; unsigned long long x_1_3_7; unsigned long long x_1_3_8; unsigned long long x_1_3_9; unsigned long long x_1_3_10; unsigned long long x_1_3_11; unsigned long long x_1_3_12; unsigned long long x_1_3_13; unsigned long long x_1_3_14; unsigned long long x_1_3_15; unsigned long long x_1_3_16; unsigned int x_1_3_17; unsigned int x_1_3_18; unsigned int x_1_3_19; unsigned int x_1_3_20; unsigned int x_1_3_21; unsigned int x_1_3_22; unsigned int x_1_3_23; unsigned int x_1_3_24; unsigned int x_1_3_25; unsigned int x_1_3_26; unsigned int x_1_3_27; unsigned int x_1_3_28; unsigned int x_1_3_29; unsigned int x_1_3_30; unsigned int x_1_3_31; unsigned int x_1_3_32; unsigned int x_1_3_33; int x_1_3_34; int x_1_3_35; int x_1_3_36; unsigned int x_1_3_37 : 1; unsigned int x_1_3_38 : 1; unsigned int x_1_3_39 : 1; unsigned int x_1_3_40 : 1; unsigned int x_1_3_41 : 1; unsigned int x_1_3_42 : 1; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 length:(unsigned long long)arg2 clientIdentifier:(id)arg3 sourceIdentifier:(id)arg4;
- (int)interfaceType;
- (bool)kernelReportedStalls;
- (bool)kernelReportingConnectionStalled;
- (bool)kernelReportingReadStalled;
- (bool)kernelReportingWriteStalled;
- (unsigned long long)packetsDuplicate;
- (unsigned long long)packetsIn;
- (unsigned long long)packetsOOO;
- (unsigned long long)packetsOut;
- (unsigned long long)packetsRetransmitted;
- (struct netcore_stats_tcp_report { union { struct { struct netcore_stats_tcp_statistics_report { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned long long x_1_3_5; unsigned long long x_1_3_6; unsigned long long x_1_3_7; unsigned long long x_1_3_8; unsigned long long x_1_3_9; unsigned long long x_1_3_10; unsigned long long x_1_3_11; unsigned long long x_1_3_12; unsigned long long x_1_3_13; unsigned long long x_1_3_14; unsigned long long x_1_3_15; unsigned long long x_1_3_16; unsigned int x_1_3_17; unsigned int x_1_3_18; unsigned int x_1_3_19; unsigned int x_1_3_20; unsigned int x_1_3_21; unsigned int x_1_3_22; unsigned int x_1_3_23; unsigned int x_1_3_24; unsigned int x_1_3_25; unsigned int x_1_3_26; unsigned int x_1_3_27; unsigned int x_1_3_28; unsigned int x_1_3_29; unsigned int x_1_3_30; unsigned int x_1_3_31; unsigned int x_1_3_32; unsigned int x_1_3_33; int x_1_3_34; int x_1_3_35; int x_1_3_36; unsigned int x_1_3_37 : 1; unsigned int x_1_3_38 : 1; unsigned int x_1_3_39 : 1; unsigned int x_1_3_40 : 1; unsigned int x_1_3_41 : 1; unsigned int x_1_3_42 : 1; } x_1_2_1; } x_1_1_1; } x1; })report;
- (void)setAwdMetricID:(unsigned int)arg1;
- (void)setAwdReport:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setReport:(struct netcore_stats_tcp_report { union { struct { struct netcore_stats_tcp_statistics_report { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned long long x_1_3_5; unsigned long long x_1_3_6; unsigned long long x_1_3_7; unsigned long long x_1_3_8; unsigned long long x_1_3_9; unsigned long long x_1_3_10; unsigned long long x_1_3_11; unsigned long long x_1_3_12; unsigned long long x_1_3_13; unsigned long long x_1_3_14; unsigned long long x_1_3_15; unsigned long long x_1_3_16; unsigned int x_1_3_17; unsigned int x_1_3_18; unsigned int x_1_3_19; unsigned int x_1_3_20; unsigned int x_1_3_21; unsigned int x_1_3_22; unsigned int x_1_3_23; unsigned int x_1_3_24; unsigned int x_1_3_25; unsigned int x_1_3_26; unsigned int x_1_3_27; unsigned int x_1_3_28; unsigned int x_1_3_29; unsigned int x_1_3_30; unsigned int x_1_3_31; unsigned int x_1_3_32; unsigned int x_1_3_33; int x_1_3_34; int x_1_3_35; int x_1_3_36; unsigned int x_1_3_37 : 1; unsigned int x_1_3_38 : 1; unsigned int x_1_3_39 : 1; unsigned int x_1_3_40 : 1; unsigned int x_1_3_41 : 1; unsigned int x_1_3_42 : 1; } x_1_2_1; } x_1_1_1; } x1; })arg1;
- (void)setSourceIdentifier:(id)arg1;
- (id)sourceIdentifier;
- (unsigned int)tcpAppDataStallTimerMsecs;
- (unsigned int)tcpAppReportingDataStallCount;
- (unsigned int)tcpBetterRouteEventCount;
- (unsigned int)tcpConnectionReuseCount;
- (bool)tcpFastOpen;
- (unsigned int)tcpRTTBestMsecs;
- (unsigned int)tcpRTTCurrentMsecs;
- (unsigned int)tcpRTTSmoothedMsecs;
- (unsigned int)tcpRTTVariance;
- (unsigned int)tcpSynRetransmissionCount;
- (unsigned int)timeToConnectionEstablishmentMsecs;
- (unsigned int)timeToConnectionStartMsecs;
- (unsigned int)timeToDnsResolvedMsecs;
- (unsigned int)timeToDnsStartMsecs;
- (unsigned int)trafficClass;

@end

/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_link_info : NSObject <OS_nw_link_info> {
    int  flow_control_status;
    unsigned char  link_quality;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;

@end

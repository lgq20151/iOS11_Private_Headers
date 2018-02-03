/* made by EzioChiu
   Image: /usr/lib/system/libxpc.dylib
 */

@interface OS_xpc_uuid : OS_xpc_object <OS_xpc_uuid>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)load;

@end
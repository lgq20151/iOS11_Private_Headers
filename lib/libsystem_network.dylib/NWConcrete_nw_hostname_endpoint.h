/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_hostname_endpoint : NWConcrete_nw_endpoint {
    char * hostname;
    unsigned short  port;
    NSObject<OS_xpc_object> * txt_record;
}

- (void).cxx_destruct;
- (id)copyDictionary;
- (void)dealloc;
- (const char *)domainForPolicy;
- (const char *)getDescription;
- (unsigned long long)getHash;
- (id)initWithHostname:(const char *)arg1 port:(unsigned short)arg2;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2;
- (unsigned short)port;
- (unsigned int)type;

@end

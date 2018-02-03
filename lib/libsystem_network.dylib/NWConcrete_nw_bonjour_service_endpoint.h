/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_bonjour_service_endpoint : NWConcrete_nw_endpoint {
    char * service_composite;
    char * service_domain;
    char * service_name;
    char * service_type;
}

- (id)copyDictionary;
- (void)dealloc;
- (const char *)domainForPolicy;
- (const char *)getDescription;
- (unsigned long long)getHash;
- (id)initWithName:(const char *)arg1 type:(const char *)arg2 domain:(const char *)arg3;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2;
- (unsigned int)type;

@end

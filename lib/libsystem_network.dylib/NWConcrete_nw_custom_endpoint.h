/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint {
    NSObject<OS_dispatch_data> * data;
    id /* block */  resolver_block;
    unsigned int  type;
}

- (void).cxx_destruct;
- (id)copyDictionary;
- (const char *)getDescription;
- (unsigned long long)getHash;
- (id)initWithType:(unsigned int)arg1 resolver:(id /* block */)arg2 data:(id)arg3;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2;
- (unsigned int)type;

@end

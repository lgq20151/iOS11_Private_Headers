/* made by EzioChiu
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_address_endpoint : NWConcrete_nw_endpoint {
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  address;
}

- (id)copyDictionary;
- (const char *)getDescription;
- (unsigned long long)getHash;
- (id)initWithAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2;
- (unsigned short)port;
- (unsigned int)type;

@end

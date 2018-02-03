/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLProtectionSpace : NSObject <NSCopying, NSSecureCoding> {
    NSURLProtectionSpaceInternal * _internal;
}

@property (readonly, copy) NSString *authenticationMethod;
@property (readonly, copy) NSString *host;
@property (readonly) bool isProxy;
@property (readonly) long long port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *proxyType;
@property (readonly, copy) NSString *realm;
@property (readonly) bool receivesCredentialSecurely;

+ (bool)supportsSecureCoding;

- (struct _CFURLProtectionSpace { }*)_CFURLProtectionSpace;
- (struct _CFURLProtectionSpace { }*)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (id)_internalInit;
- (id)authenticationMethod;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)distinguishedNames;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(id)arg1 port:(long long)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (id)initWithProxyHost:(id)arg1 port:(long long)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isProxy;
- (long long)port;
- (id)protocol;
- (id)proxyType;
- (id)realm;
- (bool)receivesCredentialSecurely;
- (struct __SecTrust { }*)serverTrust;

@end

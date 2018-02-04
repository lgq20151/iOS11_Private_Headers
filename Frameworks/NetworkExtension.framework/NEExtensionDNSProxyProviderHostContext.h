/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionDNSProxyProviderHostContext : NEExtensionAppProxyProviderHostContext <NEExtensionDNSProxyProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setSystemDNSSettings:(id)arg1;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSInterDeviceSecurityHelper : NSObject {
    struct __SecIdentity { } * _cachedAppleIDIdentity;
    NSArray * _cachedCertificateChain;
    NSArray * _cachedSecurityIdentity;
}

- (void).cxx_destruct;
- (struct __SecIdentity { }*)_appleIDIdentity;
- (void)_appleIDsDidChange;
- (id)_certificateChain;
- (void)dealloc;
- (id)init;
- (id)securityIdentity;
- (bool)shouldTrustCertificate:(id)arg1;

@end

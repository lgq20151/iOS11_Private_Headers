/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerAccounts.framework/ServerAccounts
 */

@interface SVATrustHandler : NSObject

+ (id)certificatesFromTrust:(struct __SecTrust { }*)arg1;
+ (void)promptUserForUntrustedCertificateError:(id)arg1 completionHandler:(id /* block */)arg2;

@end

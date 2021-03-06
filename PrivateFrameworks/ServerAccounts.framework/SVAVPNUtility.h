/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerAccounts.framework/ServerAccounts
 */

@interface SVAVPNUtility : NSObject

+ (void)installVPNProfileForAccount:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)isVPNProfileInstalledForAccount:(id)arg1;
+ (void)removeVPNProfileForAccount:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)setPassword:(id)arg1 forVPNConfiguration:(id)arg2;

@end

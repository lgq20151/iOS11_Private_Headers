/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSApplePayLocallyStoredValueManager : NSObject

+ (bool)_networkConnectivityAvailable;
+ (void)presentApplePayLocallyStoredValueOfflineWarningIfNeededInController:(id)arg1 withCompletion:(id /* block */)arg2;
+ (id)remoteLocallyStoredValuePassNames;

@end
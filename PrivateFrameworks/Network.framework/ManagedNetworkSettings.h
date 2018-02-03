/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface ManagedNetworkSettings : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedMNS;

- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (id)init;
- (id)queue;
- (void)reloadCarrierSettings:(bool)arg1;
- (void)reloadMNS;
- (void)reloadNetworkdSettings;
- (void)setQueue:(id)arg1;
- (bool)updateSettingsFromCarrierFile:(id)arg1 prefix:(id)arg2 settings:(id)arg3;

@end

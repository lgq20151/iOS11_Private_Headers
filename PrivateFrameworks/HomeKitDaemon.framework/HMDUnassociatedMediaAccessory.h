/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory {
    HMDAccessoryAdvertisement * _advertisement;
}

@property (retain) HMDAccessoryAdvertisement *advertisement;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (id)advertisement;
- (long long)associationOptions;
- (id)dumpDescription;
- (unsigned long long)hash;
- (id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)setAdvertisement:(id)arg1;

@end

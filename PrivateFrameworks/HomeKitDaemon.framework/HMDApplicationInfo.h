/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationInfo : HMFObject {
    NSMutableDictionary * _activeProcesses;
    NSString * _bundleIdentifier;
    NSString * _companionAppBundleIdentifier;
    bool  _spiClient;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *activeProcesses;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *companionAppBundleIdentifier;
@property (getter=isFrontMostApp, nonatomic, readonly) bool frontMostApp;
@property (getter=isSPIClient, nonatomic, readonly) bool spiClient;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)activeProcesses;
- (id)bundleIdentifier;
- (id)companionAppBundleIdentifier;
- (id)description;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 companionAppBundleIdentifier:(id)arg3 spiClient:(bool)arg4;
- (bool)isFrontMostApp;
- (bool)isSPIClient;
- (id)teamIdentifier;

@end

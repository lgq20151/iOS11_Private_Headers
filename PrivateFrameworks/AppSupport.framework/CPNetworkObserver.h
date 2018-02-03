/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPNetworkObserver : NSObject {
    NSLock * _lock;
    bool  _networkNotified;
    struct __CFDictionary { } * _networkObservers;
    struct __SCNetworkReachability { } * _networkReach;
    unsigned int  _networkReachability;
    bool  _networkReachable;
    NSMutableDictionary * _reachabilityRequests;
    bool  _wifiEnabled;
    bool  _wifiNotified;
    struct __CFDictionary { } * _wifiObservers;
    struct __SCPreferences { } * _wifiPreferences;
}

+ (id)sharedNetworkObserver;

- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)_wifiFirstCallBack:(id)arg1;
- (void)_wifiObserversInitialize;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (void)addWiFiObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (bool)isNetworkReachable;
- (bool)isWiFiEnabled;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forHostname:(id)arg2;
- (void)removeWiFiObserver:(id)arg1;

@end

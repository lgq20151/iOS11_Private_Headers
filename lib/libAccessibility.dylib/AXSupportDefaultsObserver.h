/* made by EzioChiu
   Image: /usr/lib/libAccessibility.dylib
 */

@interface AXSupportDefaultsObserver : NSObject {
    NSMutableDictionary * _actionLastNotifications;
    NSMutableArray * _actions;
    NSUserDefaults * _axDomain;
    NSObject<OS_dispatch_queue> * _lastNotificationsQueue;
    NSMutableSet * _observedPrefs;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startObservingPreference:(struct __CFString { }*)arg1 andBroadcastDarwinNotification:(struct __CFString { }*)arg2;
- (void)startObservingPreference:(struct __CFString { }*)arg1 andPerformBlock:(id /* block */)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSReceiverPreferences : NSObject {
    id /* block */  _notifyHandler;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    int  _notifyToken;
    id /* block */  _notify_handler;
    NSMutableDictionary * _stateDictionary;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, copy) id /* block */ notifyHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, readonly, copy) id /* block */ notify_handler;
@property (nonatomic, retain) NSMutableDictionary *stateDictionary;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dictionary;
- (void)disableBundleIdentifier:(id)arg1;
- (void)enableBundleIdentifier:(id)arg1;
- (void)handlePreferencesChanged;
- (id /* block */)notifyHandler;
- (id)notifyQueue;
- (bool)notifyStart;
- (int)notifyToken;
- (id /* block */)notify_handler;
- (void)saveState:(id)arg1;
- (void)setNotifyHandler:(id /* block */)arg1;
- (void)setNotifyQueue:(id)arg1;
- (void)setStateDictionary:(id)arg1;
- (id)stateDictionary;

@end

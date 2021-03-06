/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAppStateMonitor : NSObject {
    unsigned int  _appState;
    BKSApplicationStateMonitor * _appStateMonitor;
    MFObservable<MFObserver> * _observable;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) MFObservable *appStateObservable;
@property (getter=isForeground, nonatomic, readonly) bool foreground;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateApplicationState:(id)arg1 observer:(id)arg2;
- (id)appStateObservable;
- (void)dealloc;
- (id)init;
- (bool)isForeground;

@end

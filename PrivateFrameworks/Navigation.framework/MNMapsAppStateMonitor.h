/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNMapsAppStateMonitor : NSObject {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSLock * _observerLock;
    NSMutableSet * _observers;
    unsigned int  _state;
}

@property (nonatomic, readonly) unsigned int state;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)startObserving;
- (unsigned int)state;
- (void)stopObserving;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSProgressNotificationTimer : NSObject {
    SEL  _appObserverSelector;
    NSMutableSet * _applications;
    NSDate * _lastFiredDate;
    double  _latency;
    double  _minInterval;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _timer;
}

@property SEL appObserverSelector;
@property (nonatomic, retain) NSMutableSet *applications;
@property (nonatomic, retain) NSDate *lastFiredDate;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly) double minInterval;
@property (nonatomic, retain) NSTimer *timer;

- (void).cxx_destruct;
- (void)addApplication:(id)arg1;
- (SEL)appObserverSelector;
- (id)applications;
- (void)clear;
- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (id)lastFiredDate;
- (double)latency;
- (double)minInterval;
- (void)notifyObservers:(id)arg1 withApplications:(id)arg2;
- (void)removeApplication:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)setAppObserverSelector:(SEL)arg1;
- (void)setApplications:(id)arg1;
- (void)setLastFiredDate:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)stopTimer;
- (id)timer;

@end

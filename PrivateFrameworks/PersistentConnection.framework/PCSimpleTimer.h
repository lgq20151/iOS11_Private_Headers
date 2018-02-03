/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCSimpleTimer : NSObject {
    bool  _disableSystemWaking;
    double  _earlyFireDelta;
    double  _fireTime;
    PCDispatchTimer * _fireTimer;
    double  _lastUpdateTime;
    unsigned int  _powerAssertionID;
    PCDispatchTimer * _preventSleepTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _scheduledWakeDate;
    SEL  _selector;
    NSString * _serviceIdentifier;
    int  _significantTimeChangeToken;
    bool  _sleepIsImminent;
    double  _startTime;
    id  _target;
    id  _timeChangeSource;
    NSString * _timerMode;
    NSRunLoop * _timerRunLoop;
    bool  _triggerOnGMTChange;
    id  _userInfo;
    bool  _userVisible;
}

@property (nonatomic) bool disableSystemWaking;
@property (getter=isUserVisible, nonatomic) bool userVisible;

+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;

- (void).cxx_destruct;
- (void)_fireTimerFired;
- (id)_getTimerMode;
- (id)_getTimerRunLoop;
- (void)_performBlockOnQueue:(id /* block */)arg1;
- (void)_powerNotificationSleepIsImminent;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_preventSleepFired;
- (void)_scheduleTimer;
- (void)_setPowerMonitoringEnabled:(bool)arg1;
- (void)_setSignificantTimeChangeMonitoringEnabled:(bool)arg1;
- (void)_significantTimeChange;
- (void)_updateTimers;
- (void)dealloc;
- (id)debugDescription;
- (bool)disableSystemWaking;
- (bool)firingIsImminent;
- (id)initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(bool)arg6;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)invalidate;
- (bool)isUserVisible;
- (bool)isValid;
- (void)scheduleInQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)setDisableSystemWaking:(bool)arg1;
- (void)setUserVisible:(bool)arg1;
- (void)updateFireTime:(double)arg1 triggerOnGMTChange:(bool)arg2;
- (id)userInfo;

@end

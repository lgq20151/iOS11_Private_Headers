/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver> {
    unsigned long long  _currResolution;
    long long  _currValue;
    NSDate * _date;
    <BSRelativeDateTimerDelegate> * _delegate;
    NSCalendar * _gregorian;
    NSTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BSRelativeDateTimerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addTimerToMainRunLoop:(id)arg1;
+ (void)initialize;
+ (void)invalidateTimer:(id)arg1;

- (void).cxx_destruct;
- (void)_fireAndUpdateTimerIfNecessary;
- (void)_fireForEvent;
- (void)_fireForLocaleEvent:(id)arg1;
- (void)_invalidateTimer;
- (double)_nextFireInterval:(id)arg1 resolution:(unsigned long long)arg2 comparedToNow:(long long)arg3;
- (id)_timeDifferenceFromDate:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)delegate;
- (void)fireAndSchedule;
- (id)init;
- (void)invalidate;
- (double)nextFireInterval;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

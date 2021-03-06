/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimerScheduler : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTScheduledListDelegate, MTTimerObserver> {
    id /* block */  _currentDateProvider;
    <MTTimerSchedulerDelegate> * _delegate;
    <MTNotificationPoster> * _notificationPoster;
    MTScheduledList * _scheduledTimers;
    <MTSchedulingDelegate> * _schedulingDelegate;
    <NAScheduler> * _serializer;
    <MTTimerStorage> * _storage;
    <MTTaskScheduler> * _taskScheduler;
}

@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTTimerSchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTNotificationPoster> *notificationPoster;
@property (nonatomic, readonly) MTScheduledList *scheduledTimers;
@property (nonatomic, readonly) <MTSchedulingDelegate> *schedulingDelegate;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) <MTTimerStorage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTTaskScheduler> *taskScheduler;

+ (id)_intervalToCheckForTimersToFireBeforeDate:(id)arg1;

- (void).cxx_destruct;
- (void)_fireScheduledTimer:(id)arg1 firedDate:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_queue_fireTriggeredTimersWithCompletionBlock:(id /* block */)arg1;
- (id)_queue_lastTimerTriggerDate;
- (id)_queue_nextScheduledTimer;
- (id)_queue_nextTimer;
- (void)_queue_rescheduleTimersWithCompletion:(id /* block */)arg1;
- (void)_queue_scheduleTimers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_queue_setLastTimerTriggerDate:(id)arg1;
- (void)_queue_triggerDidFireForTimerWithCompletionBlock:(id /* block */)arg1;
- (void)_queue_unregisterTimer;
- (void)_queue_unscheduleTimers:(id)arg1;
- (void)_queue_updatePersistentTimerForNextTimerWithCompletion:(id /* block */)arg1;
- (id /* block */)currentDateProvider;
- (id)delegate;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithStorage:(id)arg1 notificationPoster:(id)arg2;
- (id)initWithStorage:(id)arg1 notificationPoster:(id)arg2 scheduler:(id)arg3;
- (id)initWithStorage:(id)arg1 notificationPoster:(id)arg2 scheduler:(id)arg3 schedulingDelegate:(id)arg4 taskScheduler:(id)arg5 currentDateProvider:(id /* block */)arg6;
- (id)nextTimer;
- (void)nextTimerDidChange:(id)arg1;
- (id)nextTriggerDate;
- (id)notificationPoster;
- (void)printDiagnostics;
- (void)rescheduleTimers;
- (void)rescheduleTimersWithCompletion:(id /* block */)arg1;
- (void)scheduleTimers:(id)arg1;
- (void)scheduledListDidChange:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)scheduledTimers;
- (id)schedulingDelegate;
- (id)serializer;
- (void)setDelegate:(id)arg1;
- (void)setNotificationPoster:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (id)sourceIdentifier;
- (id)storage;
- (id)taskScheduler;
- (void)unscheduleTimers:(id)arg1;

@end

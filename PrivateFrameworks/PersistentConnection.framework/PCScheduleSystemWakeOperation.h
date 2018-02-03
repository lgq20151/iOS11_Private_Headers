/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCScheduleSystemWakeOperation : NSOperation {
    double  _acceptableDelay;
    bool  _scheduleOrCancel;
    NSString * _serviceIdentifier;
    void * _unqiueIdentifier;
    bool  _userVisible;
    NSDate * _wakeDate;
}

- (void).cxx_destruct;
- (id)initForScheduledWake:(bool)arg1 wakeDate:(id)arg2 acceptableDelay:(double)arg3 userVisible:(bool)arg4 serviceIdentifier:(id)arg5 uniqueIdentifier:(void*)arg6;
- (void)main;

@end

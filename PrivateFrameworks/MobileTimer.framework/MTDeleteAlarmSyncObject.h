/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTDeleteAlarmSyncObject : MTSyncObject {
    NSString * _alarmID;
    NSDate * _deletionDate;
    bool  _isSleepAlarm;
}

@property (nonatomic, readonly) NSString *alarmID;
@property (nonatomic, retain) NSDate *deletionDate;
@property (nonatomic) bool isSleepAlarm;

+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;
+ (id)deletionWithAlarmID:(id)arg1 isSleepAlarm:(bool)arg2;

- (void).cxx_destruct;
- (id)alarmID;
- (id)createProtobufWithOptions:(id)arg1;
- (id)deletionDate;
- (id)initWithAlarmID:(id)arg1 isSleepAlarm:(bool)arg2;
- (id)initWithAlarmID:(id)arg1 isSleepAlarm:(bool)arg2 deletionDate:(id)arg3;
- (bool)isSleepAlarm;
- (id)lastModifiedDate;
- (id)objectIdentifier;
- (void)setDeletionDate:(id)arg1;
- (void)setIsSleepAlarm:(bool)arg1;

@end
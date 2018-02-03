/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionAlarmManager : NSObject {
    <CMMotionAlarmDelegateProtocol> * _delegate;
    NSString * _name;
}

@property (nonatomic) <CMMotionAlarmDelegateProtocol> *delegate;
@property (nonatomic, readonly) NSString *name;

+ (id)defaultManager;

- (bool)acknowledgeAlarm:(id)arg1 error:(id*)arg2;
- (bool)acknowledgeAlarmWithName:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)launchRemoteAppWithError:(id*)arg1;
- (id)name;
- (bool)registerAlarmWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(bool)arg4 error:(id*)arg5;
- (void)setDelegate:(id)arg1;
- (bool)unregisterAlarm:(id)arg1 error:(id*)arg2;
- (bool)unregisterAlarmWithName:(id)arg1 error:(id*)arg2;

@end

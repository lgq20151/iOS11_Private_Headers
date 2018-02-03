/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityAlarm : NSObject {
    double  _duration;
    unsigned int  _trigger;
    id /* block */  fHandler;
    bool  fIsValid;
    NSObject<OS_dispatch_queue> * fQueue;
    struct __CFRunLoop { } * fRunLoop;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned int trigger;

+ (bool)activityAlarmAvailable;
+ (id)activityAlarmInfo;

- (void)dealloc;
- (double)duration;
- (void)fire;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop { }*)arg3 withHandler:(id /* block */)arg4;
- (void)invalidate;
- (bool)isValid;
- (void)setDuration:(double)arg1;
- (void)setTrigger:(unsigned int)arg1;
- (unsigned int)trigger;

@end

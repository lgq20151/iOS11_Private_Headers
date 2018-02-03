/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AVHapticPlayerChannel : NSObject {
    unsigned long long  _behavior;
    unsigned long long  _chanID;
    HapticClient * _client;
}

@property unsigned long long chanID;
@property HapticClient *client;
@property unsigned long long eventBehavior;

- (void).cxx_destruct;
- (unsigned long long)chanID;
- (bool)clearEvents:(double)arg1 error:(id*)arg2;
- (id)client;
- (unsigned long long)eventBehavior;
- (id)initWithChannelID:(id)arg1 client:(id)arg2;
- (void)invalidate;
- (bool)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 error:(id*)arg4;
- (bool)sendEvents:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
- (void)setChanID:(unsigned long long)arg1;
- (void)setClient:(id)arg1;
- (void)setEventBehavior:(unsigned long long)arg1;
- (bool)setParameter:(unsigned long long)arg1 value:(float)arg2 atTime:(double)arg3 error:(id*)arg4;
- (bool)startEvent:(unsigned long long)arg1 atTime:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x1; float x2; }*)arg3 count:(long long)arg4 token:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)startEvent:(unsigned long long)arg1 atTime:(double)arg2 token:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)stopEvent:(unsigned long long)arg1 atTime:(double)arg2 error:(id*)arg3;

@end

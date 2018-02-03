/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {
    struct { 
        long long type; 
        unsigned long long value; 
        unsigned long long reserved; 
    }  _allowance;
    unsigned long long  _baselineValue;
    unsigned long long  _consumedValue;
    NSObject<OS_dispatch_queue> * _queue;
    BSMachPortSendRight * _taskRight;
    BSTimer * _timer;
}

@property (nonatomic) struct { long long x1; unsigned long long x2; unsigned long long x3; } allowance;
@property (nonatomic) long long type;

+ (id)provisionWithAllowance:(struct { long long x1; unsigned long long x2; unsigned long long x3; })arg1;
+ (id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2;

- (void)_beginMonitoring;
- (double)_getElapsedCPUTimeForTaskPort:(unsigned int)arg1;
- (void)_prepareForReuse;
- (bool)_queue_calculateValueConsumed:(out unsigned long long*)arg1;
- (void)_queue_evaluateConsumption;
- (void)_queue_noteAllowanceExhausted;
- (void)_queue_stopMonitoring;
- (bool)_queue_updateConsumption;
- (void)_stopMonitoring;
- (void)_updateProgress;
- (struct { long long x1; unsigned long long x2; unsigned long long x3; })allowance;
- (bool)allowanceRemaining:(out struct { long long x1; unsigned long long x2; unsigned long long x3; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithAllowance:(struct { long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (bool)isResourceProvision;
- (void)setAllowance:(struct { long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end

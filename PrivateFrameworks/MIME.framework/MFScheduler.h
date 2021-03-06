/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFScheduler : NSObject

+ (id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)globalAsyncScheduler;
+ (id)globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2;

@end

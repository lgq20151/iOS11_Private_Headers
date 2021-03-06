/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIncomingCloudPushLogEvent : HMDLogEvent {
    NSString * _topic;
}

@property (nonatomic, readonly) NSString *topic;

+ (id)incomingCloudPush:(id)arg1;
+ (id)uuid;

- (void).cxx_destruct;
- (id)initWithTopic:(id)arg1;
- (id)topic;

@end

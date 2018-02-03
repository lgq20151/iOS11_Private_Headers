/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityContinuationAction : BSAction

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityTypeIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *lastUpdateTime;
@property (nonatomic, readonly) NSString *originatingDeviceName;
@property (nonatomic, readonly) NSString *originatingDeviceType;
@property (nonatomic, readonly) NSData *userActivityData;

- (long long)UIActionType;
- (id)activityType;
- (id)activityTypeIdentifier;
- (id)identifier;
- (id)initWithSettings:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)lastUpdateTime;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)userActivityData;

@end

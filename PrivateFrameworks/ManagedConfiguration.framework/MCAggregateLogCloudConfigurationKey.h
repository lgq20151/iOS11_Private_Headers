/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAggregateLogCloudConfigurationKey : MCAggregateLogKey {
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

+ (id)DEPEnrolled;
+ (id)MDMEnrolled;
+ (id)_type:(unsigned long long)arg1;
+ (id)supervised;

- (id)name;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (unsigned long long)value;

@end

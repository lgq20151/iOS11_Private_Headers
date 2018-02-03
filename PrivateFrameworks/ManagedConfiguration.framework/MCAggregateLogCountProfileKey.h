/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAggregateLogCountProfileKey : MCAggregateLogCountKey {
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

+ (id)_type:(unsigned long long)arg1;
+ (id)all;
+ (id)carrier;
+ (id)signed;
+ (id)signedByApple;
+ (void)updateProfileCounts;

- (id)name;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (unsigned long long)value;

@end

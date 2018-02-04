/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPBlacklist : NSObject {
    NSSet * _blacklist;
    NSString * _key;
}

@property (nonatomic, readonly) NSSet *blacklist;
@property (nonatomic, readonly, copy) NSString *key;

+ (id)blacklistForKey:(id)arg1 fromConfigurationsFile:(id)arg2;
+ (id)blacklistForKey:(id)arg1 systemBlacklistDirectory:(id)arg2 runtimeBlacklistDirectory:(id)arg3;
+ (void)initialize;
+ (void)removeBlackListForKey:(id)arg1;

- (void).cxx_destruct;
- (id)blacklist;
- (id)init;
- (id)initWithKey:(id)arg1 systemBlacklistDirectory:(id)arg2 runtimeBlacklistDirectory:(id)arg3;
- (id)key;

@end
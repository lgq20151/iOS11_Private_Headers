/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackGeneratorConfiguration : NSObject <NSCopying> {
    NSString * __stats_key;
    long long  _activationStyle;
    Class  _clientClass;
    bool  _enabled;
    long long  _outputMode;
    id /* block */  _preparationBlock;
    bool  _settingsEnabled;
    bool  _setup;
    NSString * _usage;
}

@property (nonatomic, copy) NSString *_stats_key;
@property (nonatomic) long long activationStyle;
@property (nonatomic, copy) Class clientClass;
@property (nonatomic, readonly) bool defaultEnabled;
@property (nonatomic, readonly) NSString *descriptionKey;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSArray *feedbackKeyPaths;
@property (nonatomic) long long outputMode;
@property (nonatomic, copy) id /* block */ preparationBlock;
@property (nonatomic, readonly) long long requiredSupportLevel;
@property (nonatomic) bool settingsEnabled;
@property (getter=isSetup, nonatomic) bool setup;
@property (nonatomic, copy) NSString *usage;
@property (nonatomic, readonly) NSSet *usedFeedbacks;

+ (id)_configurationWithKey:(id)arg1 preparationBlock:(id /* block */)arg2;
+ (id)_disabledConfiguration;
+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (bool)_hasMutableFeedbackKeyPaths;
- (void)_preferencesUpdated:(id)arg1;
- (bool)_setupRegardlessOfPreferences:(bool)arg1;
- (bool)_shouldEnable;
- (id)_stats_key;
- (void)_updateEnabled;
- (long long)activationStyle;
- (Class)clientClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)defaultEnabled;
- (id)description;
- (id)descriptionKey;
- (id)feedbackKeyPaths;
- (id)init;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isSetup;
- (long long)outputMode;
- (id /* block */)preparationBlock;
- (long long)requiredSupportLevel;
- (void)setActivationStyle:(long long)arg1;
- (void)setClientClass:(Class)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOutputMode:(long long)arg1;
- (void)setPreparationBlock:(id /* block */)arg1;
- (void)setSettingsEnabled:(bool)arg1;
- (void)setSetup:(bool)arg1;
- (void)setUsage:(id)arg1;
- (void)set_stats_key:(id)arg1;
- (bool)settingsEnabled;
- (id)tweakedConfigurationForCaller:(id)arg1 usage:(id)arg2;
- (id)tweakedConfigurationForClass:(Class)arg1 usage:(id)arg2;
- (id)usage;
- (id)usedFeedbacks;

@end

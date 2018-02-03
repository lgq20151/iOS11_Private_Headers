/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCNetworkUsageRulesPayload : MCPayload {
    NSArray * _applicationRules;
}

@property (nonatomic, copy) NSArray *applicationRules;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)applicationRules;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (void)setApplicationRules:(id)arg1;
- (id)stubDictionary;

@end

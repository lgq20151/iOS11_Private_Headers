/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAPNPayload : MCPayload {
    NSArray * _apnInfos;
    bool  _wasInstalled;
}

@property (nonatomic) bool wasInstalled;

+ (id)apnDomainName;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (bool)_checkForValidContents:(id)arg1 outError:(id*)arg2;
- (void)_finishInitializationWithContents:(id)arg1;
- (id)_strippedAPNDefaults;
- (id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2;
- (id)apnDefaults;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (void)setWasInstalled:(bool)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (bool)wasInstalled;

@end

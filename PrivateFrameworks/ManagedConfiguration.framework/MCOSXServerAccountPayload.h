/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCOSXServerAccountPayload : MCPayload {
    NSString * _accountDescription;
    NSArray * _configuredAccounts;
    bool  _documentsConfigured;
    NSNumber * _documentsPort;
    NSString * _hostname;
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, readonly) NSString *accountDescription;
@property (nonatomic, readonly) NSArray *configuredAccounts;
@property (nonatomic, readonly) bool documentsConfigured;
@property (nonatomic, readonly) NSNumber *documentsPort;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)configuredAccounts;
- (bool)containsSensitiveUserInformation;
- (id)description;
- (bool)documentsConfigured;
- (id)documentsPort;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)payloadDescriptionKeyValueSections;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (id)username;

@end

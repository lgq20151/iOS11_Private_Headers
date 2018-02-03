/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCGmailAccountPayload : MCPayload {
    NSString * _accountDescription;
    NSString * _accountName;
    NSDictionary * _communicationServiceRules;
    NSString * _emailAddress;
}

@property (nonatomic, readonly, retain) NSString *accountDescription;
@property (nonatomic, readonly, retain) NSString *accountName;
@property (nonatomic, readonly) NSDictionary *communicationServiceRules;
@property (nonatomic, readonly, retain) NSString *emailAddress;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountName;
- (id)communicationServiceRules;
- (id)description;
- (id)emailAddress;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)mustInstallNonInteractively;
- (id)restrictions;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;

@end

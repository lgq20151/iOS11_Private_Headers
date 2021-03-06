/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationCategoryRecord : NSObject {
    NSArray * _actions;
    bool  _hasCustomDismissAction;
    NSString * _identifier;
    NSArray * _intentIdentifiers;
    NSArray * _minimalActions;
    bool  _privacyOptionShowSubtitle;
    bool  _privacyOptionShowTitle;
    NSString * _privateBody;
    bool  _shouldAllowInCarPlay;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic) bool hasCustomDismissAction;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *intentIdentifiers;
@property (nonatomic, copy) NSArray *minimalActions;
@property (nonatomic) bool privacyOptionShowSubtitle;
@property (nonatomic) bool privacyOptionShowTitle;
@property (nonatomic, copy) NSString *privateBody;
@property (nonatomic) bool shouldAllowInCarPlay;

- (void).cxx_destruct;
- (id)actions;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomDismissAction;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)intentIdentifiers;
- (bool)isEqual:(id)arg1;
- (id)minimalActions;
- (bool)privacyOptionShowSubtitle;
- (bool)privacyOptionShowTitle;
- (id)privateBody;
- (void)setActions:(id)arg1;
- (void)setHasCustomDismissAction:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntentIdentifiers:(id)arg1;
- (void)setMinimalActions:(id)arg1;
- (void)setPrivacyOptionShowSubtitle:(bool)arg1;
- (void)setPrivacyOptionShowTitle:(bool)arg1;
- (void)setPrivateBody:(id)arg1;
- (void)setShouldAllowInCarPlay:(bool)arg1;
- (bool)shouldAllowInCarPlay;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>

@property (nonatomic, readonly) unsigned long long attributes;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (nonatomic, readonly) long long identifiersOperator;
@property (nonatomic, readonly, copy) NSArray *notificationIdentifiers;
@property (nonatomic, readonly) long long notificationIdentifiersOperator;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly) long long recipientsOperator;
@property (nonatomic, readonly, copy) NSArray *searchTerms;
@property (nonatomic, readonly) long long searchTermsOperator;
@property (nonatomic, readonly, copy) NSArray *senders;
@property (nonatomic, readonly) long long sendersOperator;
@property (nonatomic, readonly, copy) NSArray *speakableGroupNames;
@property (nonatomic, readonly) long long speakableGroupNamesOperator;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)attributeSet;
- (unsigned long long)attributes;
- (id)contentPredicate;
- (id)contents;
- (long long)contentsOperator;
- (id)dateTimeRange;
- (id)domain;
- (id)groupNames;
- (long long)groupNamesOperator;
- (id)identifiers;
- (long long)identifiersOperator;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 groupNames:(id)arg8;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8;
- (id)notificationIdentifiers;
- (long long)notificationIdentifiersOperator;
- (id)parametersByName;
- (id)recipients;
- (long long)recipientsOperator;
- (id)searchTerms;
- (long long)searchTermsOperator;
- (id)senders;
- (long long)sendersOperator;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setContents:(id)arg1;
- (void)setDateTimeRange:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGroupNames:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setNotificationIdentifiers:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setSenders:(id)arg1;
- (void)setSpeakableGroupNames:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)speakableGroupNames;
- (long long)speakableGroupNamesOperator;
- (id)verb;

@end

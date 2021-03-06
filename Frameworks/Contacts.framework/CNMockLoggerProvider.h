/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider> {
    <CNContactsLogger> * _contactsLogger;
    <CNRegulatoryLogger> * _regulatoryLogger;
    <CNSpotlightIndexingLogger> * _spotlightIndexingLogger;
}

@property (nonatomic, retain) <CNContactsLogger> *contactsLogger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNRegulatoryLogger> *regulatoryLogger;
@property (nonatomic, retain) <CNSpotlightIndexingLogger> *spotlightIndexingLogger;
@property (readonly) Class superclass;

+ (id)loggerProvider;

- (void).cxx_destruct;
- (id)contactsLogger;
- (id)regulatoryLogger;
- (void)setContactsLogger:(id)arg1;
- (void)setRegulatoryLogger:(id)arg1;
- (void)setSpotlightIndexingLogger:(id)arg1;
- (id)spotlightIndexingLogger;

@end

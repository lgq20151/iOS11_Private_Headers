/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchManager : NSObject <DASearchQueryConsumer> {
    void * _addressBook;
    unsigned long long  _autocompleteSearchType;
    CNAutocompleteStore * _autocompleteStore;
    int  _contactSearchAccountChangedToken;
    NSMutableArray * _corecipientSearchTaskIDs;
    NSArray * _explicitSearchAccountIDs;
    unsigned int  _genNumber;
    unsigned long long  _implicitGroupCreationThreshold;
    bool  _includeUpcomingEventMembers;
    NSOrderedSet * _properties;
    NSOperationQueue * _queue;
    NSString * _recentsBundleIdentifier;
    bool  _registeredForAddressBookChanges;
    NSArray * _searchAccounts;
    unsigned long long  _searchTypes;
    NSString * _sendingAccountIdentifier;
    NSString * _sendingAddress;
    NSObject<OS_dispatch_queue> * _serverSearchQueue;
    bool  _simulatedResultsEnabled;
    NSMutableDictionary * _taskContextsByTaskID;
    struct __CFDictionary { } * _taskIDsBySearchQuery;
    bool  _useContactsAutocomplete;
}

@property (nonatomic) unsigned long long autocompleteSearchType;
@property (nonatomic) unsigned long long implicitGroupCreationThreshold;
@property (nonatomic) bool includeUpcomingEventMembers;
@property (nonatomic, copy) NSString *recentsBundleIdentifier;
@property (retain) NSArray *searchAccountIDs;
@property (nonatomic, readonly) NSArray *searchAccounts;
@property (nonatomic, copy) NSString *sendingAccountIdentifier;
@property (nonatomic, copy) NSString *sendingAddress;
@property (getter=isSimulatedResultsEnabled, nonatomic) bool simulatedResultsEnabled;

- (void)_handleAddressBookChangeNotification;
- (void)_handleContactsAutocompleteSearch:(id)arg1 returnedResults:(id)arg2 taskID:(id)arg3;
- (void)_handleContactsAutocompleteSearchFinished:(id)arg1 taskID:(id)arg2;
- (void)_handleCoreRecentsCorecipientSearchResults:(id)arg1 operation:(id)arg2 taskID:(id)arg3;
- (void)_handleLocalSearchResults:(id)arg1 type:(unsigned long long)arg2 operation:(id)arg3 taskID:(id)arg4;
- (void)_handleRecentsSearchFrequentResults:(id)arg1 infrequentResults:(id)arg2 operation:(id)arg3 taskID:(id)arg4;
- (void)_handleSearchQueriesByAccountID:(id)arg1 operation:(id)arg2 taskID:(id)arg3;
- (void)_handleSearchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)_handleSearchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)_handleSearchQueryFinished:(id)arg1 context:(id)arg2;
- (void)_handleTaskFinished:(id)arg1 context:(id)arg2;
- (void)_initializeLegacyAddressBookIfNecessary;
- (void)_invalidateSearchAccounts;
- (id)_nextTaskID;
- (void)_registerForAddressBookChanges;
- (id)_serverSearchQueue;
- (unsigned long long)autocompleteSearchType;
- (void)cancelTaskWithID:(id)arg1;
- (void)dealloc;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)implicitGroupCreationThreshold;
- (bool)includeUpcomingEventMembers;
- (id)init;
- (id)initWithAddressBook:(void*)arg1 properties:(int*)arg2 propertyCount:(unsigned int)arg3;
- (id)initWithAddressBook:(void*)arg1 properties:(int*)arg2 propertyCount:(unsigned int)arg3 recentsBundleIdentifier:(id)arg4;
- (id)initWithAutocompleteSearchType:(unsigned long long)arg1;
- (bool)isSimulatedResultsEnabled;
- (id)recentsBundleIdentifier;
- (void)removeRecipientResult:(id)arg1;
- (id)searchAccountIDs;
- (id)searchAccounts;
- (id)searchForCorecipientsWithAutocompleteFetchContext:(id)arg1 consumer:(id)arg2;
- (id)searchForCorecipientsWithRecipients:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 withAutocompleteFetchContext:(id)arg2 consumer:(id)arg3;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (id)sendingAccountIdentifier;
- (id)sendingAddress;
- (void)setAutocompleteSearchType:(unsigned long long)arg1;
- (void)setImplicitGroupCreationThreshold:(unsigned long long)arg1;
- (void)setIncludeUpcomingEventMembers:(bool)arg1;
- (void)setRecentsBundleIdentifier:(id)arg1;
- (void)setSearchAccountIDs:(id)arg1;
- (void)setSearchTypes:(unsigned long long)arg1;
- (void)setSendingAccountIdentifier:(id)arg1;
- (void)setSendingAddress:(id)arg1;
- (void)setSimulatedResultsEnabled:(bool)arg1;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteLocalSearch : NSObject <CNAutocompleteSearch> {
    CNContactStore * _contactFetcherStore;
    CNContactStore * _contactStore;
}

@property (nonatomic, retain) CNContactStore *contactFetcherStore;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactFetcherStore;
- (id)contactStore;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)groupsForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3;
- (id)init;
- (id)initWithContactStore:(id)arg1 contactFetcherStore:(id)arg2;
- (id)peopleForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3;
- (void)setContactFetcherStore:(id)arg1;
- (void)setContactStore:(id)arg1;

@end
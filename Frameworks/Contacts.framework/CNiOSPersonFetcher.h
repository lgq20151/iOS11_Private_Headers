/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSPersonFetcher : NSObject {
    void * _addressBook;
    CNContactsEnvironment * _environment;
    CNiOSPersonFetchRequest * _fetchRequest;
}

+ (id)peopleForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (void)dealloc;
- (id)executeFetchRequestWithProgressiveResults:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)fetchPeopleReturningMatchInfos:(id*)arg1 error:(id*)arg2;
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:(id*)arg1 error:(id*)arg2;
- (id)initWithAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3;
- (bool)shouldSortInMemory;
- (id)sortPeople:(id)arg1;

@end
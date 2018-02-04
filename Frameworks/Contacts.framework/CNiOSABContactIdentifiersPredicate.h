/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContactIdentifiersPredicate : CNContactsWithIdentifiersPredicate <CNiOSContactPredicate> {
    bool  _ignoreUnifiedIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool ignoreUnifiedIdentifiers;
@property (readonly) Class superclass;

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(struct __CFError {}**)arg5;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4;
- (bool)cn_supportsEncodedFetching;
- (bool)cn_supportsNativeBatchFetch;
- (bool)cn_supportsNativeSorting;
- (bool)ignoreUnifiedIdentifiers;
- (id)initWithIdentifiers:(id)arg1 ignoreUnifiedIdentifiers:(bool)arg2;

@end
/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactChangesObserverProxy : NSObject {
    CNContact * _contactSnapshot;
    NSArray * _keysToFetch;
    <CNContactChangesObserver> * _observer;
    bool  _unify;
}

@property (nonatomic, retain) CNContact *contactSnapshot;
@property (nonatomic, retain) NSArray *keysToFetch;
@property (nonatomic) <CNContactChangesObserver> *observer;
@property (nonatomic) bool unify;

- (void).cxx_destruct;
- (id)contactSnapshot;
- (id)keysToFetch;
- (id)observer;
- (void)setContactSnapshot:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setUnify:(bool)arg1;
- (bool)unify;

@end

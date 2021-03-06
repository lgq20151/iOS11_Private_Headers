/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICLexiconManager : NSObject <_ICLexiconManaging> {
    int  _contactChangeCount;
    int  _contactLoadState;
    NSMutableArray * _contactObservers;
    NSMutableDictionary * _contacts;
    NSObject<OS_dispatch_queue> * _lexiconManagerQueue;
    <_ICLexiconSourcing> * _lexiconSource;
    int  _namedEntityLoadState;
    _ICNamedEntityStore * _namedEntityStore;
}

@property int contactLoadState;
@property int namedEntityLoadState;

+ (unsigned long long)countWords:(id)arg1;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (id /* block */)addContactObserver:(id /* block */)arg1;
- (void)changeContactLoadingState:(int)arg1;
- (void)changeNamedEntityLoadingState:(int)arg1;
- (int)contactLoadState;
- (int)debugEntityLoadState;
- (void)doLoadLexicon;
- (unsigned long long)getContactCount;
- (id)initWithLexiconSource:(id)arg1;
- (id)loadLexicons:(id /* block */)arg1;
- (int)namedEntityLoadState;
- (void)printLexiconToNSLog:(struct _LXLexicon { }*)arg1;
- (void)removeContact:(id)arg1;
- (void)removeContactObserver:(id /* block */)arg1;
- (void)setContactHandlers:(id)arg1;
- (void)setContactLoadState:(int)arg1;
- (void)setNamedEntityHandlers:(id)arg1;
- (void)setNamedEntityLoadState:(int)arg1;
- (id)stateName:(int)arg1;
- (void)unloadLexicons;

@end

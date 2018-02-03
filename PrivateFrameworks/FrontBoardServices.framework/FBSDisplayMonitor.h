/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayMonitor : NSObject <BSInvalidatable> {
    <FBSDisplayObserving> * _bookendObserver;
    CADisplay * _mainDisplay;
    FBSDisplayStatus * _mainDisplayStatus;
    NSHashTable * _observers;
    NSMapTable * _statusByDisplay;
}

@property (nonatomic) <FBSDisplayObserving> *bookendObserver;
@property (nonatomic, readonly, copy) NSSet *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainConfiguration;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *mainIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateConnectedWithBlock:(id /* block */)arg1;
- (void)_invalidate;
- (void)_noteConnectStatus:(id)arg1 withConfiguration:(id)arg2 debounce:(bool)arg3 broadcast:(bool)arg4;
- (void)_noteDisconnectStatus:(id)arg1;
- (void)_noteUpdateStatus:(id)arg1 withConfiguration:(id)arg2;
- (void)_updateDisplaysIfNecessary;
- (void)addObserver:(id)arg1;
- (id)bookendObserver;
- (id)configurationForIdentity:(id)arg1;
- (id)connectedIdentities;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithInitializationCompletion:(id /* block */)arg1;
- (void)invalidate;
- (id)mainConfiguration;
- (id)mainIdentity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (void)setBookendObserver:(id)arg1;

@end

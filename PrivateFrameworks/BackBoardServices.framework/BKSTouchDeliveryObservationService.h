/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSTouchDeliveryObservationService : NSObject <BKSEventFocusManagerClientInterface> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    NSHashTable * _generalObservers;
    NSMapTable * _observersToTouchIdentifiers;
    NSObject<OS_dispatch_queue> * _touchClientQueue;
    NSMapTable * _touchIdentifierToObserverLists;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *generalObservers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *observersToTouchIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *touchIdentifierToObserverLists;

+ (id)sharedInstance;

- (bool)_addObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)_connectToTouchDeliveryService;
- (id)_observersForTouchIdentifier:(unsigned int)arg1;
- (bool)_removeObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)_removeObserversForTouchIdentifier:(unsigned int)arg1;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (id)connection;
- (void)dealloc;
- (void)focusedDeferralPropertiesUpdatedWithProperties:(id)arg1;
- (id)generalObservers;
- (id)init;
- (id)observersToTouchIdentifiers;
- (void)removeObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setGeneralObservers:(id)arg1;
- (void)setObserversToTouchIdentifiers:(id)arg1;
- (void)setTouchIdentifierToObserverLists:(id)arg1;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (id)touchIdentifierToObserverLists;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;

@end

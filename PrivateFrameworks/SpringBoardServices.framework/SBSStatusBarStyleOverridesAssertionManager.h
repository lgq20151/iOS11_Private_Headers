/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient> {
    NSMapTable * _assertionsByIdentifier;
    NSObject<OS_dispatch_queue> * _coordinatorCalloutQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    SBSStatusBarStyleOverridesCoordinator * _internalQueue_styleOverrideCoordinator;
    NSXPCConnection * _sbXPCConnection;
}

@property (nonatomic, retain) NSMapTable *assertionsByIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) SBSStatusBarStyleOverridesCoordinator *internalQueue_styleOverrideCoordinator;
@property (nonatomic, retain) NSXPCConnection *sbXPCConnection;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(bool)arg2;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)_internalQueue_updateRegistrationForCoordinator:(id)arg1 reply:(id /* block */)arg2;
- (void)_reactivateAssertions;
- (void)_registerStyleOverrideCoordinatorAfterInterruption;
- (void)_tearDownXPCConnection;
- (void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(id /* block */)arg2 onQueue:(id)arg3;
- (id)assertionsByIdentifier;
- (id)coordinatorCalloutQueue;
- (id)init;
- (id)internalQueue;
- (id)internalQueue_styleOverrideCoordinator;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)removeStatusBarStyleOverridesAssertion:(id)arg1;
- (id)sbXPCConnection;
- (void)setAssertionsByIdentifier:(id)arg1;
- (void)setCoordinatorCalloutQueue:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setInternalQueue_styleOverrideCoordinator:(id)arg1;
- (void)setSbXPCConnection:(id)arg1;
- (void)statusBarTappedWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)unregisterCoordinator;
- (void)updateRegistrationForCoordinator:(id)arg1 reply:(id /* block */)arg2;
- (void)updateStatusStringForAssertion:(id)arg1;

@end

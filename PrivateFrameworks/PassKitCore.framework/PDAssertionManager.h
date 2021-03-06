/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate> {
    NSXPCListener * _coordinatorListener;
    NSMutableArray * _coordinators;
    NSObject<OS_dispatch_queue> * _managerSerialQueue;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAssertionCoordinator:(id)arg1;
- (void)_removeAllAssertionCoordinators;
- (void)_removeAssertionCoordinator:(id)arg1;
- (bool)assertionCoordinator:(id)arg1 assertionExistsOfType:(unsigned long long)arg2;
- (bool)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2;
- (id)assertionsOfType:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end

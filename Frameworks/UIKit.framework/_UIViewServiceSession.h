/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {
    bool  __automatic_invalidation_invalidated;
    int  __automatic_invalidation_retainCount;
    NSXPCConnection * _connection;
    _UIViewServiceDeputyManager * _deputyManager;
    _UIAsyncInvocation * _invalidationInvocation;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _terminationHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ terminationHandler;

+ (id)sessionWithConnection:(id)arg1;

- (int)__automatic_invalidation_logic;
- (void)_invalidateUnconditionallyThen:(id /* block */)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)dealloc;
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;
- (void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id /* block */)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setTerminationHandler:(id /* block */)arg1;
- (id /* block */)terminationHandler;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;

@end

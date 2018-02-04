/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBRemoteSceneClientWorkspace : NSObject <FBApplicationProcessLaunchTransactionObserver, FBSceneClientProvider, FBUISceneClientDelegate, FBUISceneClientWorkspace> {
    FBUISceneClientIdentity * _clientIdentity;
    NSMutableDictionary * _clientsByIdentifier;
    NSMutableDictionary * _handlerByIdentifier;
    NSMutableDictionary * _hostsByIdentifer;
    bool  _invalidated;
    FBSceneClientProviderInvalidationAction * _invalidationAction;
    FBApplicationProcessLaunchTransaction * _launchTransaction;
    FBWorkspace * _processWorkspace;
}

@property (nonatomic, readonly, copy) FBUISceneClientIdentity *clientIdentity;
@property (nonatomic, readonly, retain) FBProcess<FBUIProcess> *clientProcess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FBWorkspace *processWorkspace;
@property (readonly) Class superclass;

- (id)_createSceneClientForIdentifier:(id)arg1 withSpecification:(id)arg2;
- (void)_processLaunched:(id)arg1;
- (id)_processWorkspace;
- (void)beginTransaction;
- (id)clientForSceneIdentifier:(id)arg1;
- (id)clientIdentity;
- (id)clientProcess;
- (id)createHostForSceneWithIdentifier:(id)arg1 initialParameters:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneClient:(id)arg1;
- (void)endTransaction;
- (id)initWithClientIdentity:(id)arg1;
- (void)initialize;
- (void)invalidate;
- (id)processWorkspace;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)registerSceneWithIdentifier:(id)arg1 specification:(id)arg2 acquisitionHandler:(id /* block */)arg3;
- (void)setProcessWorkspace:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (void)unregisterHost:(id)arg1;

@end
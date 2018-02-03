/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessWatchdog : NSObject <BSDescriptionProviding, FBSProcessExecutionProvisionDelegate> {
    bool  _active;
    id /* block */  _completion;
    bool  _invalidated;
    NSString * _name;
    FBSProcessWatchdogPolicy * _policy;
    <FBSProcessInternal> * _process;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) FBSProcessWatchdogPolicy *policy;
@property (nonatomic, readonly) <FBSProcess> *process;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginMonitoringConstraints;
- (void)_stopMonitoringConstraints;
- (void)activate;
- (id /* block */)completion;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;
- (void)invalidate;
- (id)name;
- (id)policy;
- (id)process;
- (void)provision:(id)arg1 wasViolatedWithError:(id)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _activated;
    <FBSProcessExecutionProvisionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateCalloutQueue;
    NSError * _error;
    bool  _monitoring;
    <FBSProcess> * _process;
    bool  _violated;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSProcessExecutionProvisionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (getter=isMonitoring, nonatomic, readonly) bool monitoring;
@property (nonatomic, readonly) <FBSProcess> *process;
@property (readonly) Class superclass;
@property (getter=isViolated, nonatomic, readonly) bool violated;

- (void).cxx_destruct;
- (void)_beginMonitoring;
- (void)_noteViolatedWithError:(id)arg1;
- (void)_performDelegateCallout:(id /* block */)arg1;
- (void)_prepareForReuse;
- (void)_stopMonitoring;
- (void)_updateProgress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)error;
- (id)init;
- (bool)isMonitoring;
- (bool)isResourceProvision;
- (bool)isViolated;
- (void)monitorProcess:(id)arg1;
- (void)prepareForReuse;
- (id)process;
- (void)setDelegate:(id)arg1;
- (void)stopMonitoring;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateProgress;

@end

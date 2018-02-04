/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverAllContactsOperation : CKOperation {
    id /* block */  _discoverAllContactsCompletionBlock;
    NSMutableArray * _discoveredUserInfos;
}

@property (nonatomic, copy) id /* block */ discoverAllContactsCompletionBlock;
@property (nonatomic, retain) NSMutableArray *discoveredUserInfos;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id /* block */)discoverAllContactsCompletionBlock;
- (id)discoveredUserInfos;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setDiscoverAllContactsCompletionBlock:(id /* block */)arg1;
- (void)setDiscoveredUserInfos:(id)arg1;

@end
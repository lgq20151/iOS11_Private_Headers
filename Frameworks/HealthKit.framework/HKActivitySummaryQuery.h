/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActivitySummaryQuery : HKQuery <HKActivitySummaryQueryClientInterface> {
    id /* block */  _completionHandler;
    bool  _initialHandlerCalled;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2;
- (id)initWithPredicate:(id)arg1 resultsHandler:(id /* block */)arg2;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end

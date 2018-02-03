/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics * _heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (bool)haveConsistentStateForBaselineRoll;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)main;
- (id)retainedDelegate;
- (bool)rollBaselineWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;

@end

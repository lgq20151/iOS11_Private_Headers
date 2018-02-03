/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *delegate;

- (bool)canAdoptBaseline:(id)arg1 byReplacingLocalStoreFile:(bool*)arg2 withStack:(id)arg3 withError:(id*)arg4;
- (id)delegate;
- (void)main;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;

@end

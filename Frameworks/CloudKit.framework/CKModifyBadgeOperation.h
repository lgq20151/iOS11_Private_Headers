/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyBadgeOperation : CKOperation {
    unsigned long long  _badgeValue;
    id /* block */  _modifyBadgeCompletionBlock;
}

@property (nonatomic) unsigned long long badgeValue;
@property (nonatomic, copy) id /* block */ modifyBadgeCompletionBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (unsigned long long)badgeValue;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithBadgeValue:(unsigned long long)arg1;
- (id /* block */)modifyBadgeCompletionBlock;
- (void)performCKOperation;
- (void)setBadgeValue:(unsigned long long)arg1;
- (void)setModifyBadgeCompletionBlock:(id /* block */)arg1;

@end

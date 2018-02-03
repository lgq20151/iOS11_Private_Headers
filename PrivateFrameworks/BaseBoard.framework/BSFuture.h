/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSFuture : NSObject <BSFuture> {
    NSMutableArray * _completionBlocks;
    NSError * _error;
    id  _result;
    NSConditionLock * _stateLock;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addCompletionBlock:(id /* block */)arg1;
- (void)_flushCompletionBlocks;
- (bool)_nts_isFinished;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (bool)cancel;
- (void)dealloc;
- (void)didCancel;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;

@end

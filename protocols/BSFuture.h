/* made by EzioChiu.
 */

@protocol BSFuture <NSObject>

@required

- (void)addFailureBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSuccessBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (bool)cancel;
- (bool)isCancelled;
- (bool)isFinished;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id*)arg2;

@end

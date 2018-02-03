/* made by EzioChiu.
 */

@protocol _DUIClientSessionSource <_DUIClientSessionCommon>

@required

- (oneway void)checkCanHandOffCancelledItemsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)dataTransferSessionFinished;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)dragFailed;
- (oneway void)handOffCancelledItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;

@end

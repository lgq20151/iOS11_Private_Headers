/* made by EzioChiu.
 */

@protocol _DUIClientSessionDestination <_DUIClientSessionCommon>

@required

- (oneway void)addedItemsWithDetails:(NSArray *)arg1 itemCollection:(PBItemCollection *)arg2;
- (oneway void)dragEnded;
- (oneway void)handOffDroppedItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (oneway void)performDropWithItemCollection:(void *)arg1 dataProviderEndpoint:(void *)arg2 visibleDroppedItems:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 8: PBItemCollection *, NSXPCListenerEndpoint *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

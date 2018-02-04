/* made by EzioChiu.
 */

@protocol WBSHistoryLoaderDelegate <NSObject>

@required

- (void)historyLoader:(id <WBSHistoryLoader>)arg1 didLoadItems:(NSArray *)arg2 discardedItems:(NSArray *)arg3 stringsForUserTypeDomainExpansion:(NSCountedSet *)arg4;
- (void)historyLoaderDidFinishLoading:(id <WBSHistoryLoader>)arg1;

@end
/* made by EzioChiu.
 */

@protocol FCTagsFetchOperationDelegate <NSObject>

@required

- (void)tagsFetchOperation:(FCTagsFetchOperation *)arg1 didFetchTags:(NSArray *)arg2;

@end
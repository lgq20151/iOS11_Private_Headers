/* made by EzioChiu.
 */

@protocol MPTracklistDataSourceConsuming <NSObject>

@required

- (void)dataSourceInsertItems:(NSArray *)arg1 afterItem:(NSString *)arg2 inSection:(NSString *)arg3;
- (void)dataSourceInsertItemsAtHead:(NSArray *)arg1 inSection:(NSString *)arg2;
- (void)dataSourceInsertItemsAtTail:(NSArray *)arg1 inSection:(NSString *)arg2;
- (void)dataSourceMoveItem:(NSString *)arg1 afterItem:(NSString *)arg2 inSection:(NSString *)arg3;
- (void)dataSourceMoveItemToHead:(NSString *)arg1 inSection:(NSString *)arg2;
- (void)dataSourceMoveItemToTail:(NSString *)arg1 inSection:(NSString *)arg2;
- (void)dataSourceRemoveItem:(NSString *)arg1 fromSection:(NSString *)arg2;

@end

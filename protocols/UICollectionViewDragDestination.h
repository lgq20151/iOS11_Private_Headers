/* made by EzioChiu.
 */

@protocol UICollectionViewDragDestination <NSObject>

@optional

- (bool)_collectionView:(UICollectionView *)arg1 canHandleDropSesson:(id <UIDropSession>)arg2;
- (void)_collectionView:(UICollectionView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)_collectionView:(UICollectionView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)_collectionView:(UICollectionView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UICollectionViewDropProposal *)_collectionView:(UICollectionView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (void)_collectionView:(UICollectionView *)arg1 performDropWithCoordinator:(id <_UICollectionViewDropCoordinator>)arg2;

@end
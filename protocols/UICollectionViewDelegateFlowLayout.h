/* made by EzioChiu.
 */

@protocol UICollectionViewDelegateFlowLayout <UICollectionViewDelegate>

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;

@end

/* made by EzioChiu.
 */

@protocol _UICollectionViewPlaceholderContextDelegate <NSObject>

@required

- (bool)placeholderContext:(void *)arg1 didCommitInsertionWithDataSourceUpdates:(void *)arg2; // needs 2 arg types, found 7: _UICollectionViewPlaceholderContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSIndexPath *, void*
- (NSIndexPath *)placeholderContextDidDismiss:(_UICollectionViewPlaceholderContext *)arg1;
- (void)placeholderContextNeedsCellUpdate:(_UICollectionViewPlaceholderContext *)arg1;

@end

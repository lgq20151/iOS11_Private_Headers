/* made by EzioChiu.
 */

@protocol UICollectionLayoutGeometryGroupItemConfiguration <NSObject, NSCopying>

@required

- (double)height;
- (bool)heightSizedToContainerHeight;
- (double)heightSizedToContainerHeightFactor;
- (double)heightSizedToContainerWidthFactor;
- (bool)heightSizedToContentHeight;
- (UICollectionLayoutGeometry *)layoutGeometry;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })requiredEdgeSpacing;
- (double)width;
- (double)widthSizedToContainerHeightFactor;
- (bool)widthSizedToContainerWidth;
- (double)widthSizedToContainerWidthFactor;
- (bool)widthSizedToContentWidth;

@end

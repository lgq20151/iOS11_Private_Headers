/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextCollectionViewFlowLayout : UICollectionViewFlowLayout {
    NSIndexPath * _bottomElementIndexPath;
    NTKUpNextCollectionViewFlowLayoutAttributes * _decorationLayoutInfo;
    double  _headerAlpha;
    NSDictionary * _headerLayoutInfo;
    double  _highTransitionBottomOffset;
    double  _highTransitionScale;
    double  _highTransitionShift;
    NSIndexPath * _indexPathToSnapTo;
    NSDictionary * _layoutInfo;
    double  _lowTransitionScale;
    bool  _needsHeaderUpdate;
    bool  _needsInsetsUpdate;
    NSSet * _previousSectionsWithHeaders;
    NSSet * _sectionsWithHeaders;
    bool  _snappingEnabled;
    double  _snappingOffset;
    double  _statusBarDecorationHeight;
    NSIndexPath * _topElementIndexPath;
    double  _topItemsAlpha;
    double  _topItemsShift;
    double  _topOffsetForScrolling;
    double  _topOffsetForSnapping;
    bool  _useFixedLowTransitionLayout;
}

@property (nonatomic, retain) NSIndexPath *bottomElementIndexPath;
@property (nonatomic) double headerAlpha;
@property (nonatomic) double highTransitionBottomOffset;
@property (nonatomic) double highTransitionScale;
@property (nonatomic) double highTransitionShift;
@property (nonatomic, retain) NSIndexPath *indexPathToSnapTo;
@property (nonatomic) double lowTransitionScale;
@property (getter=isSnappingEnabled, nonatomic) bool snappingEnabled;
@property (nonatomic) double snappingOffset;
@property (nonatomic) double statusBarDecorationHeight;
@property (nonatomic, retain) NSIndexPath *topElementIndexPath;
@property (nonatomic) double topItemsAlpha;
@property (nonatomic) double topItemsShift;
@property (nonatomic) double topOffsetForScrolling;
@property (nonatomic) double topOffsetForSnapping;
@property (nonatomic) bool useFixedLowTransitionLayout;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (bool)_hasHeaderForSection:(long long)arg1;
- (void)_updateContentInsetsIfNeeded;
- (void)_updateSectionHeaderListIfNeeded;
- (id)bottomElementIndexPath;
- (void)finalizeCollectionViewUpdates;
- (id)flowLayoutAttributesForItemAtIndexPath:(id)arg1;
- (double)headerAlpha;
- (double)highTransitionBottomOffset;
- (double)highTransitionScale;
- (double)highTransitionShift;
- (id)indexPathToSnapTo;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSnappingEnabled;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)lowTransitionScale;
- (void)prepareLayout;
- (void)setBottomElementIndexPath:(id)arg1;
- (void)setHeaderAlpha:(double)arg1;
- (void)setHighTransitionBottomOffset:(double)arg1;
- (void)setHighTransitionScale:(double)arg1;
- (void)setHighTransitionShift:(double)arg1;
- (void)setIndexPathToSnapTo:(id)arg1;
- (void)setLowTransitionScale:(double)arg1;
- (void)setSnappingEnabled:(bool)arg1;
- (void)setSnappingOffset:(double)arg1;
- (void)setStatusBarDecorationHeight:(double)arg1;
- (void)setTopElementIndexPath:(id)arg1;
- (void)setTopItemsAlpha:(double)arg1;
- (void)setTopItemsShift:(double)arg1;
- (void)setTopOffsetForScrolling:(double)arg1;
- (void)setTopOffsetForSnapping:(double)arg1;
- (void)setUseFixedLowTransitionLayout:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)snappingOffset;
- (double)statusBarDecorationHeight;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)topElementIndexPath;
- (double)topItemsAlpha;
- (double)topItemsShift;
- (double)topOffsetForScrolling;
- (double)topOffsetForSnapping;
- (bool)useFixedLowTransitionLayout;

@end
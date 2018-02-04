/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer> {
    double  _columnWidth;
    struct vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration> > { 
        struct _NUIGridViewDimensionConfiguration {} *__begin_; 
        struct _NUIGridViewDimensionConfiguration {} *__end_; 
        struct __compressed_pair<_NUIGridViewDimensionConfiguration *, std::__1::allocator<_NUIGridViewDimensionConfiguration> > { 
            struct _NUIGridViewDimensionConfiguration {} *__first_; 
        } __end_cap_; 
    }  _columns;
    struct { 
        unsigned int inInsertOrRemove : 1; 
        unsigned int pendingUpdate : 1; 
        unsigned int delegateMinSpacing : 1; 
        unsigned int delegateMinDirectionalSpacing : 1; 
        unsigned int delegateHorizontalAlignment : 1; 
        unsigned int delegateVerticalAlignment : 1; 
    }  _gridViewFlags;
    long long  _horizontalAlignment;
    struct unordered_map<unsigned long, const std::__1::pair<UIView *, UIView *>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, const std::__1::pair<UIView *, UIView *> > > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, std::__1::hash<unsigned long>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, const std::__1::pair<UIView *, UIView *> >, std::__1::equal_to<unsigned long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _rowBaselineViews;
    double  _rowHeight;
    struct vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration> > { 
        struct _NUIGridViewDimensionConfiguration {} *__begin_; 
        struct _NUIGridViewDimensionConfiguration {} *__end_; 
        struct __compressed_pair<_NUIGridViewDimensionConfiguration *, std::__1::allocator<_NUIGridViewDimensionConfiguration> > { 
            struct _NUIGridViewDimensionConfiguration {} *__first_; 
        } __end_cap_; 
    }  _rows;
    struct CGSize { 
        double width; 
        double height; 
    }  _spacing;
    long long  _verticalAlignment;
    struct unordered_map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::hash<UIView *>, std::__1::equal_to<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange> > > > { 
        struct __hash_table<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::__unordered_map_hasher<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::hash<UIView *>, true>, std::__1::__unordered_map_equal<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::equal_to<UIView *>, true>, std::__1::allocator<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::hash<UIView *>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<UIView *, std::__1::__hash_value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::equal_to<UIView *>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _viewRanges;
    NSMutableArray * _viewRows;
    struct _NUIGridArrangement { 
        <_NUIGridArrangementContainer> *container; 
        bool baselineRelative; 
        long long horzDist; 
        long long vertDist; 
        struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { 
            struct _NUIGridArrangementCell {} *__begin_; 
            struct _NUIGridArrangementCell {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { 
                struct _NUIGridArrangementCell {} *__first_; 
            } __end_cap_; 
        } cells; 
        struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { 
                struct _NUIGridArrangementDimension {} *__first_; 
            } __end_cap_; 
        } columns; 
        struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { 
                struct _NUIGridArrangementDimension {} *__first_; 
            } __end_cap_; 
        } rows; 
        struct vector<CGRect, std::__1::allocator<CGRect> > { 
            struct CGRect {} *__begin_; 
            struct CGRect {} *__end_; 
            struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { 
                struct CGRect {} *__first_; 
            } __end_cap_; 
        } viewFrames; 
    }  _visibleArrangement;
    struct CGSize { 
        double width; 
        double height; 
    }  _visibleCount;
}

@property (nonatomic) double columnSpacing;
@property (nonatomic) double columnWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUIContainerGridViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long horizontalDistribution;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic) double rowHeight;
@property (nonatomic) double rowSpacing;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long verticalDistribution;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_baselineViewForFirstBaseline:(bool)arg1 forRow:(unsigned long long)arg2;
- (id)_baselineViewVendForFirstBaseline:(bool)arg1 fromViews:(id)arg2;
- (double)_heightOfRowAtIndex:(long long)arg1;
- (long long)_horizontalAlignmentOfView:(id)arg1 inColumn:(long long)arg2;
- (void)_invalidateIntrinsicContentSizeAndUpdateArrangedSubviewsToMatchCurrentGrid;
- (void)_setupViewRangesIfNeeded;
- (void)_updateArrangedSubviewsToMatchCurrentGrid;
- (bool)_verifyInternalGridConsistencyWarningOnly:(bool)arg1;
- (long long)_verticalAlignmentOfView:(id)arg1 inColumn:(long long)arg2;
- (double)_widthOfColumnAtIndex:(long long)arg1;
- (void)addColumnWithArrangedSubviews:(id)arg1;
- (void)addRowWithArrangedSubviews:(id)arg1;
- (id)arrangedDescription;
- (id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2;
- (id)arrangedSubviewsInColumnAtIndex:(long long)arg1;
- (id)arrangedSubviewsInRowAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)columnIndexForArrangedSubview:(id)arg1;
- (double)columnSpacing;
- (double)columnWidth;
- (void)dealloc;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)getColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 rowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 forArrangedSubview:(id)arg3;
- (double)heightOfRowAtIndex:(long long)arg1;
- (long long)horizontalAlignment;
- (long long)horizontalAlignmentOfColumnAtIndex:(unsigned long long)arg1;
- (long long)horizontalDistribution;
- (id)initWithArrangeSubviewRows:(id)arg1;
- (id)initWithArrangedSubviewRows:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (void)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (void)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (bool)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(bool)arg1;
- (bool)isColumnAtIndexHidden:(long long)arg1;
- (bool)isRowAtIndexHidden:(long long)arg1;
- (bool)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfColumns;
- (long long)numberOfRows;
- (void)populateGridArrangementCells:(struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg1;
- (void)populateGridArrangementDimension:(struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x1; struct _NUIGridArrangementDimension {} *x2; struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x_3_1_1; } x3; }*)arg1 withCells:(const struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg2 axis:(long long)arg3;
- (void)removeColumnAtIndex:(long long)arg1;
- (void)removeRowAtIndex:(long long)arg1;
- (void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3;
- (double)rowHeight;
- (long long)rowIndexForArrangedSubview:(id)arg1;
- (double)rowSpacing;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setColumnAtIndex:(long long)arg1 hidden:(bool)arg2;
- (void)setColumnSpacing:(double)arg1;
- (void)setColumnWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeight:(double)arg1 ofRowAtIndex:(long long)arg2;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setHorizontalAlignment:(long long)arg1 ofColumnAtIndex:(long long)arg2;
- (void)setHorizontalDistribution:(long long)arg1;
- (void)setRowAtIndex:(long long)arg1 hidden:(bool)arg2;
- (void)setRowHeight:(double)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setSpacing:(double)arg1 afterColumnAtIndex:(long long)arg2;
- (void)setSpacing:(double)arg1 afterRowAtIndex:(long long)arg2;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setVerticalAlignment:(long long)arg1 ofColumnAtIndex:(long long)arg2;
- (void)setVerticalDistribution:(long long)arg1;
- (void)setWidth:(double)arg1 ofColumnAtIndex:(long long)arg2;
- (double)spacingAfterColumnAtIndex:(long long)arg1;
- (double)spacingAfterRowAtIndex:(long long)arg1;
- (long long)verticalAlignment;
- (long long)verticalAlignmentOfColumnAtIndex:(unsigned long long)arg1;
- (long long)verticalDistribution;
- (id)viewForFirstBaselineLayout;
- (id)viewForFirstBaselineLayoutInRow:(long long)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForLastBaselineLayoutInRow:(long long)arg1;
- (double)widthOfColumnAtIndex:(long long)arg1;

@end
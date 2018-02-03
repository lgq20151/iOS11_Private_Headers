/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFlowLayoutSection : NSObject {
    double  _actualGap;
    double  _beginMargin;
    double  _endMargin;
    bool  _fixedItemSize;
    double  _footerDimension;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _footerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    double  _headerDimension;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerFrame;
    double  _horizontalInterstice;
    long long  _indexOfIncompleteRow;
    NSMutableSet * _invalidatedIndexPaths;
    bool  _isValid;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    NSMutableArray * _items;
    long long  _itemsByRowCount;
    long long  _itemsCount;
    double  _lastRowActualGap;
    double  _lastRowBeginMargin;
    double  _lastRowEndMargin;
    bool  _lastRowIncomplete;
    _UIFlowLayoutInfo * _layoutInfo;
    double  _otherMargin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectToKeepValid;
    struct { 
        int commonRowHorizontalAlignment; 
        int lastRowHorizontalAlignment; 
        int rowVerticalAlignment; 
    }  _rowAlignmentOptions;
    NSMutableArray * _rows;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionMargins;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _validItemRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _validRect;
    double  _verticalInterstice;
}

@property (nonatomic, readonly) double actualGap;
@property (nonatomic, readonly) double beginMargin;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } effectiveFooterFrameWithSectionMarginsApplied;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } effectiveHeaderFrameWithSectionMarginsApplied;
@property (nonatomic, readonly) double endMargin;
@property (nonatomic) bool fixedItemSize;
@property (nonatomic, readonly) double footerDimension;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } footerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) double headerDimension;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } headerFrame;
@property (nonatomic) double horizontalInterstice;
@property (nonatomic, readonly) long long indexOfIncompleteRow;
@property (nonatomic, readonly) NSArray *invalidatedIndexPaths;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) long long itemsByRowCount;
@property (nonatomic) long long itemsCount;
@property (nonatomic, readonly) double lastRowActualGap;
@property (nonatomic, readonly) double lastRowBeginMargin;
@property (nonatomic, readonly) double lastRowEndMargin;
@property (nonatomic, readonly) bool lastRowIncomplete;
@property (nonatomic) _UIFlowLayoutInfo *layoutInfo;
@property (nonatomic, readonly) double otherMargin;
@property (nonatomic) struct { int x1; int x2; int x3; } rowAlignmentOptions;
@property (nonatomic, readonly) NSMutableArray *rows;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionMargins;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } validItemRange;
@property (nonatomic) double verticalInterstice;

- (void).cxx_destruct;
- (double)actualGap;
- (void)addInvalidatedIndexPath:(id)arg1;
- (id)addItem;
- (id)addRowAtEnd:(bool)arg1;
- (double)beginMargin;
- (void)computeLayout;
- (void)computeLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSection:(long long)arg2 invalidating:(bool)arg3 invalidationContext:(id)arg4;
- (id)copyFromLayoutInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveFooterFrameWithSectionMarginsApplied;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveHeaderFrameWithSectionMarginsApplied;
- (double)endMargin;
- (long long)estimatedIndexOfItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)fixedItemSize;
- (double)footerDimension;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })footerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndexPath:(id)arg1;
- (double)headerDimension;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headerFrame;
- (double)horizontalInterstice;
- (long long)indexOfIncompleteRow;
- (id)init;
- (void)invalidate;
- (id)invalidatedIndexPaths;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)items;
- (long long)itemsByRowCount;
- (long long)itemsCount;
- (double)lastRowActualGap;
- (double)lastRowBeginMargin;
- (double)lastRowEndMargin;
- (bool)lastRowIncomplete;
- (id)layoutInfo;
- (void)logInvalidSizes;
- (void)logInvalidSizesForHorizontalDirection:(bool)arg1 warnAboutDelegateValues:(bool)arg2;
- (double)otherMargin;
- (struct { int x1; int x2; int x3; })rowAlignmentOptions;
- (id)rows;
- (id)rowsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionMargins;
- (void)setEstimatedSize:(struct CGSize { double x1; double x2; })arg1 forSection:(long long)arg2;
- (void)setFixedItemSize:(bool)arg1;
- (void)setFooterDimension:(double)arg1 forSection:(long long)arg2;
- (void)setFooterFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeaderDimension:(double)arg1 forSection:(long long)arg2;
- (void)setHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalInterstice:(double)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemsCount:(long long)arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)setRowAlignmentOptions:(struct { int x1; int x2; int x3; })arg1;
- (void)setSectionMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3;
- (void)setVerticalInterstice:(double)arg1;
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;
- (id)snapshot;
- (void)updateEstimatedSizeForSection:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validItemRange;
- (double)verticalInterstice;

@end

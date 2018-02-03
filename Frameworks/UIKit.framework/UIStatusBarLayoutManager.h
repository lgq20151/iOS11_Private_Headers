/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarLayoutManager : NSObject {
    NSNumber * _assignedStartPosition;
    UIStatusBarForegroundView * _foregroundView;
    UIStatusBarItemView * _itemViews;
    bool  _persistentAnimationsEnabled;
    int  _region;
    bool  _usesVerticalLayout;
}

@property (nonatomic, retain) NSNumber *assignedStartPosition;
@property (nonatomic) UIStatusBarForegroundView *foregroundView;
@property (nonatomic) bool persistentAnimationsEnabled;
@property (nonatomic, readonly) bool usesVerticalLayout;

- (void).cxx_destruct;
- (void)_addOriginDelta:(double)arg1 toPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;
- (double)_dimensionForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemView:(id)arg1 startPosition:(double)arg2 firstView:(bool)arg3;
- (id)_itemViews;
- (id)_itemViewsSortedForLayout;
- (double)_positionAfterPlacingItemView:(id)arg1 startPosition:(double)arg2 firstView:(bool)arg3;
- (void)_positionNewItemViewsWithEnabledItems:(bool*)arg1;
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(bool*)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(bool*)arg5 itemDisappearing:(bool*)arg6;
- (bool)_processDelta:(double)arg1 forView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_repositionedNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sizeDelta:(double)arg2;
- (void)_setOrigin:(double)arg1 forPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (double)_sizeNeededForItemView:(id)arg1;
- (double)_startPosition;
- (bool)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(bool)arg4;
- (id)_viewForItem:(id)arg1;
- (id)assignedStartPosition;
- (void)clearOverlapFromItems:(id)arg1;
- (void)dealloc;
- (double)distributeOverlap:(double)arg1 amongItems:(id)arg2;
- (id)foregroundView;
- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2 usesVerticalLayout:(bool)arg3;
- (bool)itemIsVisible:(id)arg1;
- (void)itemView:(id)arg1 sizeChangedBy:(double)arg2;
- (id)itemViewOfType:(int)arg1;
- (void)makeVisibleItemsPerformPendedActions;
- (bool)persistentAnimationsEnabled;
- (void)positionInvisibleItems;
- (bool)prepareDoubleHeightItemWithEnabledItems:(bool*)arg1;
- (bool)prepareEnabledItems:(bool*)arg1 withData:(id)arg2 actions:(int)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForItems:(id)arg1;
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;
- (void)removeDisabledItems:(bool*)arg1;
- (double)removeOverlap:(double)arg1 fromItems:(id)arg2;
- (void)setAssignedStartPosition:(id)arg1;
- (void)setForegroundView:(id)arg1;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (void)setVisibilityOfAllItems:(bool)arg1;
- (void)setVisibilityOfItem:(id)arg1 visible:(bool)arg2;
- (void)setVisibilityOfItemType:(int)arg1 visible:(bool)arg2;
- (double)sizeNeededForItem:(id)arg1;
- (double)sizeNeededForItems:(id)arg1;
- (bool)updateDoubleHeightItem;
- (bool)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(bool)arg3;
- (bool)usesVerticalLayout;
- (id)visibleItemViewAtPoint:(struct CGPoint { double x1; double x2; })arg1 inForegroundView:(id)arg2;

@end
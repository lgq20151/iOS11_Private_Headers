/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMultiColumnViewController : UIViewController {
    UIImage * __columnToggleButtonImage;
    unsigned long long  _animatingTargetColumnCount;
    NSMutableArray * _borderViews;
    NSArray * _columnWidths;
    <UIMultiColumnViewControllerDelegate> * _delegate;
    UIBarButtonItem * _hideSecondColumnBarButtonItem;
    double  _keyboardInset;
    unsigned long long  _lastColumnCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFrameInWindow;
    struct { 
        unsigned int updatingNavControllerChildren : 1; 
        unsigned int animatingItem1LeftBarButton : 1; 
    }  _mcvcFlags;
    NSArray * _navControllers;
    UIBarButtonItem * _showSecondColumnBarButtonItem;
    NSArray * _viewControllers;
}

@property (setter=_setColumnToggleButtonImage:, nonatomic, retain) UIImage *_columnToggleButtonImage;
@property (nonatomic, retain) NSArray *columnWidths;
@property (nonatomic) <UIMultiColumnViewControllerDelegate> *delegate;
@property (nonatomic) double keyboardInset;
@property (nonatomic, retain) NSArray *navControllers;
@property (nonatomic, retain) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg1;
- (bool)_allowMultipleColumns;
- (void)_animateSplitToWidth:(double)arg1;
- (bool)_canShowColumnIndex:(unsigned long long)arg1;
- (void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_columnToggleButtonImage;
- (id)_contentSizesForColumnWidths:(id)arg1;
- (bool)_currentSizeMightAllowMultipleColumns;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (id)_effectiveColumnWidths;
- (void)_hideSecondColumn:(id)arg1;
- (id)_hideSecondColumnBarButtonItem;
- (id)_liveVCs;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (void)_moveViewControllersForColumnCount:(unsigned long long)arg1;
- (id)_navigationBarForDragAffordance;
- (void)_navigationControllerChangedViewControllers:(id)arg1;
- (id)_possibleContentSizes;
- (id)_preferredContentSizes;
- (void)_setAllowNestedNavigationControllers:(bool)arg1;
- (void)_setColumnToggleButtonImage:(id)arg1;
- (void)_showSecondColumn:(id)arg1;
- (id)_showSecondColumnBarButtonItem;
- (void)_splitViewControllerDidUpdate:(id)arg1;
- (id)_splitViewControllerImageForDisplayModeButtonToShowLeading:(id)arg1;
- (void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1;
- (void)_updateButtonsForColumnCount:(unsigned long long)arg1 animatingChange:(bool)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_willShowColumnCount:(unsigned long long)arg1;
- (id)columnWidths;
- (void)dealloc;
- (id)delegate;
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2 columnWidths:(id)arg3;
- (double)keyboardInset;
- (id)navControllers;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)setColumnWidths:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardInset:(double)arg1;
- (void)setNavControllers:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)title;
- (id)viewControllers;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

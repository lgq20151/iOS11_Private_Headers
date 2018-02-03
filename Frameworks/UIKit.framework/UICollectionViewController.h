/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewFocusDelegate_Legacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, _UIKeyboardAutoRespondingScrollViewController> {
    UICollectionView * _collectionView;
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
        unsigned int useLayoutToLayoutNavigationTransitions : 1; 
        unsigned int installsStandardReorderingGesture : 1; 
    }  _collectionViewControllerFlags;
    UIAutoRespondingScrollViewControllerKeyboardSupport * _keyboardSupport;
    UICollectionViewLayout * _layout;
    UILongPressGestureRecognizer * _reorderingGesture;
}

@property (nonatomic) bool clearsSelectionOnViewWillAppear;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool installsStandardGestureForInteractiveMovement;
@property (getter=_scrollView, nonatomic, readonly, retain) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) bool useLayoutToLayoutNavigationTransitions;

- (void).cxx_destruct;
- (void)__viewDidAppear:(bool)arg1;
- (void)__viewWillAppear:(bool)arg1;
- (id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_clearSharedView;
- (void)_handleReorderingGesture:(id)arg1;
- (void)_installReorderingGestureIfNecessary;
- (id)_newCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (id)_scrollView;
- (void)_setSharedCollectionView:(id)arg1;
- (void)_setUseLayoutToLayoutNavigationTransitions:(bool)arg1 withCheck:(bool)arg2;
- (bool)_shouldRespondToPreviewingMethods;
- (id)_uiCollectionView;
- (void)_updateCollectionViewLayoutAndDelegate:(id)arg1;
- (id)_wrappingView;
- (bool)clearsSelectionOnViewWillAppear;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewLayout;
- (id)contentScrollView;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)installsStandardGestureForInteractiveMovement;
- (void)loadView;
- (id)preferredFocusedView;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (id)previewViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)setClearsSelectionOnViewWillAppear:(bool)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setInstallsStandardGestureForInteractiveMovement:(bool)arg1;
- (void)setUseLayoutToLayoutNavigationTransitions:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)shouldCrossFadeBottomBars;
- (bool)shouldCrossFadeNavigationBar;
- (bool)useLayoutToLayoutNavigationTransitions;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillUnload;
- (void)willPresentPreviewViewController:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forPosition:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

@end

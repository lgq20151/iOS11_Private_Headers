/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView {
    UITableViewIndex * _index;
    UIKeyboardCandidateGridCollectionViewController * _parentViewController;
    double  _previousGroupBarStartingY;
}

@property (nonatomic, readonly) UITableViewIndex *index;
@property (nonatomic, retain) NSArray *indexTitles;
@property (nonatomic) UIKeyboardCandidateGridCollectionViewController *parentViewController;
@property (nonatomic) double previousGroupBarStartingY;

- (void).cxx_destruct;
- (bool)_canDrawContent;
- (void)dealloc;
- (void)delayUpdateIndex;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)groupBarStartingY;
- (id)index;
- (id)indexTitles;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (bool)isCellVisible:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (id)parentViewController;
- (double)previousGroupBarStartingY;
- (void)scrollToBottomWithAnimation:(bool)arg1;
- (void)scrollToOffsetFromTop:(double)arg1 withAnimation:(bool)arg2;
- (void)scrollToTopWithAnimation:(bool)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIndexTitles:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPreviousGroupBarStartingY:(double)arg1;
- (bool)shouldDrawGroupBackground;
- (bool)shouldShowIndex;
- (void)showIndex:(bool)arg1;
- (void)updateIndex;
- (void)updateIndex:(bool)arg1;

@end

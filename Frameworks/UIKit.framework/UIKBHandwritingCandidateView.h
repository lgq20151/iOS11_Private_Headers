/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingCandidateView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIKeyboardCandidateList> {
    TIKeyboardCandidateResultSet * _candidateResultSet;
    UIKBCandidateCollectionView * _candidatesCollectionView;
    <UIKeyboardCandidateListDelegate> * _delegate;
    unsigned long long  _dummyCellCount;
    double  _dummyCellWidth;
    UIKeyboardCandidatePocketShadow * _leftBorder;
    UIKeyboardCandidateLogButton * _logButton;
    UIKeyboardCandidatePocketShadow * _pocketShadow;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 8; 
        unsigned int padding : 8; 
    }  _visualStyling;
}

@property (nonatomic, readonly) <UIKeyboardCandidateList> *candidateList;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateResultSet;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, retain) UIKBCandidateCollectionView *candidatesCollectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardCandidateListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dummyCellCount;
@property (nonatomic) double dummyCellWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *leftBorder;
@property (nonatomic, retain) UIKeyboardCandidateLogButton *logButton;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *pocketShadow;
@property (readonly) Class superclass;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; } visualStyling;

+ (Class)cellClass;
+ (double)shadowYForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shadowHeight:(double)arg2;

- (void).cxx_destruct;
- (id)_inheritedRenderConfig;
- (void)_setRenderConfig:(id)arg1;
- (void)calculateDummyCellAttributes;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)candidateList;
- (id)candidateResultSet;
- (id)candidates;
- (id)candidatesCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (id)delegate;
- (void)displayLayer:(id)arg1;
- (unsigned long long)dummyCellCount;
- (double)dummyCellWidth;
- (bool)hasCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (bool)hasCandidates;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (bool)isExtendedList;
- (bool)isFloatingList;
- (void)jumpToCompositions;
- (id)keyboardBehaviors;
- (id)leftBorder;
- (id)logButton;
- (unsigned long long)maxNumberOfProactiveCells;
- (id)pocketShadow;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)reloadDataByAppendingAtEnd:(bool)arg1;
- (id)secureCandidateRenderTraits;
- (void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(bool)arg2;
- (unsigned long long)selectedSortIndex;
- (void)setCandidateResultSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidatesCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDummyCellCount:(unsigned long long)arg1;
- (void)setDummyCellWidth:(double)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setLogButton:(id)arg1;
- (void)setPocketShadow:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (void)showNextPage;
- (double)singleCellWidthForProactiveCellCount:(unsigned long long)arg1;
- (id)statisticsIdentifier;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateLeftBorderForKeyplane:(id)arg1;
- (void)updatePocketShadowForKeyplane:(id)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })visualStyling;

@end

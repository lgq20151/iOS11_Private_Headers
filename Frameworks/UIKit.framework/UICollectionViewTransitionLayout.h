/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {
    double  _accuracy;
    NSMutableArray * _appearingLayoutAttributes;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSMutableDictionary * _currentLayoutInfos;
    NSMutableArray * _disappearingLayoutAttributes;
    UICollectionViewLayout * _fromLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fromVisibleBounds;
    bool  _haveValidInfos;
    bool  _layoutIsValid;
    UICollectionViewLayout * _toLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _toVisibleBounds;
    NSMutableDictionary * _transitionInformationsDict;
    double  _transitionProgress;
}

@property (nonatomic, readonly) UICollectionViewLayout *currentLayout;
@property (nonatomic, readonly) UICollectionViewLayout *nextLayout;
@property (nonatomic) double transitionProgress;

- (void).cxx_destruct;
- (void)_finalizeLayoutTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_newVisibleBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_oldVisibleBounds;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (bool)_supportsAdvancedTransitionAnimations;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)currentLayout;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(double)arg3;
- (void)invalidateLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)nextLayout;
- (void)prepareLayout;
- (void)setTransitionProgress:(double)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (double)transitionProgress;
- (void)updateValue:(double)arg1 forAnimatedKey:(id)arg2;
- (double)valueForAnimatedKey:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout {
    NSMutableArray * _allAttributes;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSArray * _edgeDummyCellAttributes;
    bool  _laysOutCandidateSeparator;
}

@property (nonatomic, retain) NSMutableArray *allAttributes;
@property (nonatomic, retain) NSArray *edgeDummyCellAttributes;
@property (nonatomic) bool laysOutCandidateSeparator;

+ (id)candidateSeparatorDecorationViewKind;
+ (id)dummyCellCollectionViewKind;
+ (id)layout;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)allAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)edgeDummyCellAttributes;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)laysOutCandidateSeparator;
- (void)prepareLayout;
- (void)setAllAttributes:(id)arg1;
- (void)setEdgeDummyCellAttributes:(id)arg1;
- (void)setLaysOutCandidateSeparator:(bool)arg1;

@end

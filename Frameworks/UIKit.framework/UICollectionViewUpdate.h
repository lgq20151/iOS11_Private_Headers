/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewUpdate : NSObject {
    id * _animatedFooters;
    id * _animatedHeaders;
    id * _animatedItems;
    UICollectionView * _collectionView;
    NSMutableIndexSet * _deletedSections;
    NSMutableArray * _deletedSupplementaryIndexesSectionArray;
    NSMutableDictionary * _deletedSupplementaryTopLevelIndexesDict;
    NSMutableIndexSet * _insertedSections;
    NSMutableArray * _insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary * _insertedSupplementaryTopLevelIndexesDict;
    NSMutableIndexSet * _movedItems;
    NSMutableIndexSet * _movedSections;
    NSIndexPath * _newFocusedIndexPath;
    long long  _newFocusedViewType;
    long long * _newGlobalItemMap;
    UICollectionViewData * _newModel;
    long long * _newSectionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _newVisibleBounds;
    NSIndexPath * _oldFocusedIndexPath;
    long long  _oldFocusedViewType;
    long long * _oldGlobalItemMap;
    UICollectionViewData * _oldModel;
    long long * _oldSectionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _oldVisibleBounds;
    NSArray * _updateItems;
    NSMutableArray * _viewAnimations;
}

- (void).cxx_destruct;
- (void)_computeItemUpdates;
- (void)_computeSectionUpdates;
- (void)_computeSupplementaryUpdates;
- (void)dealloc;
- (id)description;
- (id)initWithCollectionView:(id)arg1 updateItems:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 newVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (id)newIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2;

@end

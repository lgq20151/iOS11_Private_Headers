/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedDataSource : NSObject <NSCopying, PXSectionedLayoutEngineDataSourceSnapshot> {
    unsigned long long  _identifier;
}

@property (nonatomic, readonly) bool containsAnyItems;
@property (nonatomic, readonly) bool containsMultipleItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } firstItemIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; } lastItemIndexPath;
@property (nonatomic, readonly) long long numberOfSections;
@property (readonly) Class superclass;

+ (id)emptyDataSource;

- (long long)_numberOfAssetsWithMaximum:(long long)arg1;
- (bool)containsAnyItems;
- (bool)containsMultipleItems;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })convertIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 fromSectionedDataSource:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)couldObjectReferenceAppear:(id)arg1;
- (id)description;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 reverseDirection:(bool)arg2 usingBlock:(id /* block */)arg3;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })firstItemIndexPath;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)indexPathSetFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 toIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)init;
- (id)inputForItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })lastItemIndexPath;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (Class)objectReferenceClassForItem;
- (Class)objectReferenceClassForSection;
- (Class)objectReferenceClassForSubItem;
- (id)objectReferenceForObjectReference:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1;

@end

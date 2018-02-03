/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewDropCoordinatorItem : NSObject <UIDragAnimating> {
    _UIDropAnimationHandlers * _animationHandlers;
    NSIndexPath * _destinationIndexPath;
    UIDragItem * _dragItem;
    int  _kind;
    id /* block */  _previewParametersProvider;
    bool  _shouldRemainInHierarchy;
    UIDragPreviewTarget * _target;
}

@property (nonatomic, retain) _UIDropAnimationHandlers *animationHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSIndexPath *destinationIndexPath;
@property (nonatomic) UIDragItem *dragItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) int kind;
@property (nonatomic, copy) id /* block */ previewParametersProvider;
@property (nonatomic) bool shouldRemainInHierarchy;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIDragPreviewTarget *target;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)animationHandlers;
- (id)description;
- (id)destinationIndexPath;
- (id)dragItem;
- (id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2;
- (id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2 placeholderConfiguration:(id)arg3;
- (id)initWithDragItem:(id)arg1 target:(id)arg2;
- (int)kind;
- (id /* block */)previewParametersProvider;
- (void)setAnimationHandlers:(id)arg1;
- (void)setDestinationIndexPath:(id)arg1;
- (void)setDragItem:(id)arg1;
- (void)setKind:(int)arg1;
- (void)setPreviewParametersProvider:(id /* block */)arg1;
- (void)setShouldRemainInHierarchy:(bool)arg1;
- (void)setTarget:(id)arg1;
- (bool)shouldRemainInHierarchy;
- (id)target;

@end

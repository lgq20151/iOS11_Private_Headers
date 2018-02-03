/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewDragSourceController : NSObject <UIDragInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable> {
    UICollectionView * _collectionView;
    <_UICollectionViewDragSourceControllerDelegate> * _delegate;
    UIDragInteraction * _dragInteraction;
    _UICollectionViewDragSourceControllerDragState * _dragState;
    _UICollectionViewDragSourceControllerSessionState * _sessionState;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, readonly) long long currentSessionItemCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UICollectionViewDragSourceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSIndexPath *dragFromIndexPath;
@property (nonatomic, readonly) NSArray *dragFromIndexPaths;
@property (nonatomic) UIDragInteraction *dragInteraction;
@property (nonatomic, readonly) <UIDragSession> *dragSession;
@property (nonatomic, retain) _UICollectionViewDragSourceControllerDragState *dragState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, retain) _UICollectionViewDragSourceControllerSessionState *sessionState;
@property (readonly) Class superclass;

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)_addDragItemsToExistingSession:(id)arg1 forDataSourceIndexPath:(id)arg2;
- (void)_configureInteraction;
- (long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2;
- (bool)_delegateImplementsDragItemsForItemAtIndexPath;
- (bool)_delegateImplementsDragItemsForItemAtIndexPathWithDefaultPreview;
- (bool)_delegateImplementsDragSourceDidAddItem;
- (bool)_delegateImplementsDragSourceItemsAtIndexPath;
- (bool)_delegateImplementsSelector:(SEL)arg1;
- (id)_dragAndDropController;
- (id)_dragDelegateActual;
- (id)_dragDelegateProxy;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_dragSourceDelegateActual;
- (id)_dragSourceDelegateProxy;
- (id)_filterCandidateIndexPaths:(id)arg1 forUserSelectedIndexPath:(id)arg2 session:(id)arg3;
- (bool)_isCompatibilityMode;
- (id)_previewParametersForItemAtIndexPath:(id)arg1;
- (id)_queryForItemsFromClientForSession:(id)arg1 dataSourceIndexPath:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3 isInitialQuery:(bool)arg4;
- (void)_sessionWillBegin:(id)arg1 forDragInteraction:(id)arg2;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;
- (id)collectionView;
- (long long)currentSessionItemCount;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dragFromIndexPath;
- (id)dragFromIndexPaths;
- (id)dragInteraction;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragSession;
- (id)dragState;
- (id)indexPathForDragItem:(id)arg1;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;
- (bool)isActive;
- (id)sessionState;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragInteraction:(id)arg1;
- (void)setDragInteractionEnabled:(bool)arg1;
- (void)setDragState:(id)arg1;
- (void)setSessionState:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewDropController : NSObject <UIDropInteractionDelegate_Private, _UITableViewDropCoordinatorDelegate> {
    bool  _canOnlyHandleReordering;
    unsigned long long  _defaultDropOperation;
    NSMapTable * _dragItemDropAnimations;
    UIDropInteraction * _dropInteraction;
    UITableViewDropProposal * _dropProposal;
    <UIDropSession> * _dropSession;
    long long  _ignoringDragsCount;
    UITableView<_UITableViewDropControllerDelegate> * _tableView;
    NSIndexPath * _targetIndexPath;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) bool canOnlyHandleReordering;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long defaultDropOperation;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMapTable *dragItemDropAnimations;
@property (nonatomic, retain) UIDropInteraction *dropInteraction;
@property (nonatomic, retain) UITableViewDropProposal *dropProposal;
@property (nonatomic, retain) <UIDropSession> *dropSession;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long ignoringDragsCount;
@property (nonatomic, readonly) bool shouldIgnoreDrags;
@property (readonly) Class superclass;
@property (nonatomic) UITableView<_UITableViewDropControllerDelegate> *tableView;
@property (nonatomic, retain) NSIndexPath *targetIndexPath;
@property (getter=isTrackingDrag, nonatomic, readonly) bool trackingDrag;

- (void).cxx_destruct;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)animateDragItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)animateDragItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;
- (id)animateDragItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (id)animateDragItem:(id)arg1 toTarget:(id)arg2;
- (void)beginIgnoringDrags;
- (bool)canOnlyHandleReordering;
- (bool)commitPlaceholderInsertionWithContext:(id)arg1 dataSourceUpdates:(id /* block */)arg2;
- (id)defaultAnimatorForDragItem:(id)arg1;
- (unsigned long long)defaultDropOperation;
- (bool)deletePlaceholder:(id)arg1;
- (id)dragItemDropAnimations;
- (id)dropInteraction;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)dropProposal;
- (id)dropSession;
- (void)endIgnoringDrags;
- (long long)ignoringDragsCount;
- (id)initWithTableView:(id)arg1;
- (void)insertPlaceholderAtIndexPath:(id)arg1 withContext:(id)arg2 previewParametersProvider:(id /* block */)arg3;
- (bool)isActive;
- (bool)isTrackingDrag;
- (void)resetAllDragState;
- (void)resetTrackingState;
- (void)setCanOnlyHandleReordering:(bool)arg1;
- (void)setDefaultDropOperation:(unsigned long long)arg1;
- (void)setDragItemDropAnimations:(id)arg1;
- (void)setDropInteraction:(id)arg1;
- (void)setDropProposal:(id)arg1;
- (void)setDropSession:(id)arg1;
- (void)setIgnoringDragsCount:(long long)arg1;
- (void)setTableView:(id)arg1;
- (void)setTargetIndexPath:(id)arg1;
- (void)setupDragInteraction;
- (bool)shouldIgnoreDrags;
- (id)tableView;
- (id)targetIndexPath;
- (void)uninstallFromTableView;
- (void)updateTargetIndexPathAndDropProposalForSession:(id)arg1;

@end

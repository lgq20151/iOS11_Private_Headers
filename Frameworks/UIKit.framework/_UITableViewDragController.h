/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewDragController : NSObject <UIDragInteractionDelegate_Internal> {
    NSMapTable * _cellsAnimatingCancel;
    long long  _clientEnabledState;
    UIDragInteraction * _dragInteraction;
    <UIDragSession> * _dragSession;
    bool  _forceEnabledForReordering;
    NSMutableOrderedSet * _indexPaths;
    UITableViewCell * _initiatingCell;
    NSIndexPath * _initiatingIndexPath;
    UITableView<_UITableViewDragControllerDelegate> * _tableView;
    NSMutableOrderedSet * _tentativeIndexPaths;
    UITableViewCell * _tentativeInitiatingCell;
    NSIndexPath * _tentativeInitiatingIndexPath;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, retain) NSMapTable *cellsAnimatingCancel;
@property (nonatomic) long long clientEnabledState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragInteraction *dragInteraction;
@property (nonatomic, retain) <UIDragSession> *dragSession;
@property (nonatomic, readonly) UITableViewCell *draggedCell;
@property (nonatomic, readonly) NSIndexPath *draggedIndexPath;
@property (nonatomic) bool forceEnabledForReordering;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *indexPaths;
@property (nonatomic, retain) UITableViewCell *initiatingCell;
@property (nonatomic, retain) NSIndexPath *initiatingIndexPath;
@property (readonly) Class superclass;
@property (nonatomic) UITableView<_UITableViewDragControllerDelegate> *tableView;
@property (nonatomic, retain) NSMutableOrderedSet *tentativeIndexPaths;
@property (nonatomic, retain) UITableViewCell *tentativeInitiatingCell;
@property (nonatomic, retain) NSIndexPath *tentativeInitiatingIndexPath;

+ (bool)isEnabledByDefault;

- (void).cxx_destruct;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (bool)_dragInteractionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (void)addTentativeRowAtIndexPath:(id)arg1;
- (void)beginDragForTentativeRows;
- (void)beginDragOfRowsForSession:(id)arg1 notifyDelegate:(bool)arg2;
- (bool)canProvideItemsForDragAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)cellsAnimatingCancel;
- (void)clearTentativeRows;
- (long long)clientEnabledState;
- (id)dragInteraction;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragSession;
- (id)draggedCell;
- (id)draggedIndexPath;
- (bool)forceEnabledForReordering;
- (void)forceReset;
- (void)immediatelyBeginDragWithTouch:(id)arg1;
- (id)indexPaths;
- (id)initWithTableView:(id)arg1;
- (id)initiatingCell;
- (id)initiatingIndexPath;
- (bool)isActive;
- (void)resetDragState;
- (void)setCellsAnimatingCancel:(id)arg1;
- (void)setClientEnabledState:(long long)arg1;
- (void)setDragInteraction:(id)arg1;
- (void)setDragSession:(id)arg1;
- (void)setForceEnabledForReordering:(bool)arg1;
- (void)setIndexPaths:(id)arg1;
- (void)setInitiatingCell:(id)arg1;
- (void)setInitiatingIndexPath:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTentativeIndexPaths:(id)arg1;
- (void)setTentativeInitiatingCell:(id)arg1;
- (void)setTentativeInitiatingIndexPath:(id)arg1;
- (void)setupDragInteraction;
- (id)tableView;
- (id)tentativeIndexPaths;
- (id)tentativeInitiatingCell;
- (id)tentativeInitiatingIndexPath;
- (void)uninstallFromTableView;
- (void)updateDragInteractionEnabledState;

@end

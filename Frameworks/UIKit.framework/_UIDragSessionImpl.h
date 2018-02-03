/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDragSessionImpl : NSObject <UIDragSession, _UIDragDropSessionInternal, _UIDraggingItemVisualTarget, _UIDraggingSessionDelegate> {
    NSMutableSet * _addedDragItemsPendingUpdate;
    NSMutableSet * _addedDraggingItemsWaitingForHandOffOfDragImage;
    NSHashTable * _allInteractions;
    NSMutableArray * _allItems;
    bool  _didHandOffDragImage;
    NSMapTable * _dragSourceInteractionByItem;
    _UIInternalDraggingSessionSource * _internalSessionSource;
    NSMapTable * _itemByDraggingItem;
    id  _localContext;
    UIDragInteraction * _primaryInteraction;
    _UIDraggingSession * _session;
}

@property (getter=_allowsItemsToUpdate, nonatomic, readonly) bool _allowsItemsToUpdate;
@property (nonatomic, readonly) long long _dataOwner;
@property (nonatomic, readonly) bool allowsMoveOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) id localContext;
@property (nonatomic, readonly) UIDragInteraction *primaryInteraction;
@property (getter=isRestrictedToDraggingApplication, nonatomic, readonly) bool restrictedToDraggingApplication;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *trackedInteractions;

+ (id)_localDragSessionForSessionDestination:(id)arg1;
+ (id)activeSessions;

- (void).cxx_destruct;
- (bool)_allowsItemsToUpdate;
- (bool)_canAddItems;
- (void)_cancelDrag;
- (long long)_dataOwner;
- (bool)_draggingItem:(id)arg1 shouldDelaySetDownAnimationWithCompletion:(id /* block */)arg2;
- (void)_draggingItem:(id)arg1 willAnimateSetDownWithAnimator:(id)arg2;
- (id)_draggingSession;
- (void)_draggingSession:(id)arg1 handedOffDragImageForItem:(id)arg2;
- (bool)_draggingSession:(id)arg1 shouldCancelOnAppDeactivationWithDefault:(bool)arg2;
- (void)_draggingSessionHandedOffDragImage:(id)arg1;
- (bool)_isActive;
- (void)_itemsNeedUpdate:(id)arg1;
- (void)_prepareForSetDownAnimationInWindow:(id)arg1 withDraggingItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (void)_setDraggingSession:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetFrameOfDraggingItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)addItems:(id)arg1 forDragSourceInteraction:(id)arg2;
- (bool)allowsMoveOperation;
- (void)associateItem:(id)arg1 withDraggingItem:(id)arg2;
- (bool)canLoadObjectsOfClass:(Class)arg1;
- (id)dragSourceInteractionForDragItem:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)draggingSession:(id)arg1 willAddItems:(id)arg2;
- (void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidMove:(id)arg1;
- (void)draggingSessionDidTransferItems:(id)arg1;
- (bool)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (bool)draggingSessionPrefersFullSizePreviews:(id)arg1;
- (void)draggingSessionWillBegin:(id)arg1;
- (void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (bool)hasItemsConformingToTypeIdentifiers:(id)arg1;
- (id)initWithInteraction:(id)arg1;
- (bool)isRestrictedToDraggingApplication;
- (id)itemForDraggingItem:(id)arg1;
- (id)items;
- (id)localContext;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)primaryInteraction;
- (void)setLocalContext:(id)arg1;
- (id)trackedInteractions;

@end

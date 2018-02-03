/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDragItem : NSObject {
    unsigned long long  __managementState;
    _UIDragSessionImpl * _dragSession;
    _UIDraggingItem * _draggingItem;
    id /* block */  _imageComponentsProvider;
    _UIInternalDraggingItem * _internalDraggingItem;
    NSItemProvider * _itemProvider;
    id  _localObject;
    id /* block */  _preferredImageComponentsProvider;
    _UIDragPreviewProvider * _preferredPreviewProvider;
    id /* block */  _previewProvider;
    id  _privateLocalContext;
    UITargetedDragPreview * _targetedLiftPreview;
}

@property (getter=_dragSession, setter=_setDragSession:, nonatomic) _UIDragSessionImpl *_dragSession;
@property (setter=_setDraggedTextRange:, nonatomic, retain) UITextRange *_draggedTextRange;
@property (getter=_draggingItem, setter=_setDraggingItem:, nonatomic, retain) _UIDraggingItem *_draggingItem;
@property (nonatomic) unsigned long long _managementState;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _visibleDropItemSize;
@property (getter=_duiPreviewProvider, nonatomic, readonly) id /* block */ duiPreviewProvider;
@property (nonatomic, readonly) id /* block */ imageComponentsProvider;
@property (getter=_internalDraggingItem, setter=_setInternalDraggingItem:, nonatomic, retain) _UIInternalDraggingItem *internalDraggingItem;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, retain) id localObject;
@property (nonatomic, readonly) id /* block */ preferredImageComponentsProvider;
@property (getter=_preferredPreviewProvider, setter=_setPreferredPreviewProvider:, nonatomic, retain) _UIDragPreviewProvider *preferredPreviewProvider;
@property (nonatomic, copy) id /* block */ previewProvider;
@property (getter=_privateLocalContext, setter=_setPrivateLocalContext:, nonatomic, retain) id privateLocalContext;
@property (getter=_targetedLiftPreview, setter=_setTargetedLiftPreview:, nonatomic, retain) UITargetedDragPreview *targetedLiftPreview;

- (void).cxx_destruct;
- (void)_didSetPreferredPreviewProvider;
- (id)_dragSession;
- (id)_draggedTextRange;
- (id)_draggingItem;
- (id /* block */)_duiPreviewProvider;
- (id)_internalDraggingItem;
- (unsigned long long)_managementState;
- (id)_preferredPreviewProvider;
- (struct CGSize { double x1; double x2; })_previewImageSize;
- (id)_privateLocalContext;
- (void)_setDragSession:(id)arg1;
- (void)_setDraggedTextRange:(id)arg1;
- (void)_setDraggingItem:(id)arg1;
- (void)_setInternalDraggingItem:(id)arg1;
- (void)_setPreferredPreviewProvider:(id)arg1;
- (void)_setPrivateLocalContext:(id)arg1;
- (void)_setTargetedLiftPreview:(id)arg1;
- (id)_targetedLiftPreview;
- (struct CGSize { double x1; double x2; })_visibleDropItemSize;
- (id /* block */)imageComponentsProvider;
- (id)initWithItemProvider:(id)arg1;
- (id)itemProvider;
- (id)localObject;
- (id /* block */)preferredImageComponentsProvider;
- (id /* block */)previewProvider;
- (void)setItemProvider:(id)arg1;
- (void)setLocalObject:(id)arg1;
- (void)setPreviewProvider:(id /* block */)arg1;
- (void)set_managementState:(unsigned long long)arg1;

@end

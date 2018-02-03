/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDropItem : UIDragItem {
    _UIDropSessionImpl * __dropSession;
    NSItemProvider * _dropItemProvider;
}

@property (nonatomic) _UIDropSessionImpl *_dropSession;
@property (getter=_visualTarget, setter=_setVisualTarget:, nonatomic) <_UIDraggingItemVisualTarget> *_visualTarget;
@property (getter=_dropItemProvider, setter=_setDropItemProvider:, nonatomic, retain) NSItemProvider *dropItemProvider;

- (void).cxx_destruct;
- (void)_didSetPreferredPreviewProvider;
- (id)_draggingItem;
- (id)_dropItemProvider;
- (id)_dropSession;
- (id)_initWithInternalDraggingItem:(id)arg1;
- (id)_privateLocalContext;
- (void)_setDropItemProvider:(id)arg1;
- (void)_setVisualTarget:(id)arg1;
- (struct CGSize { double x1; double x2; })_visibleDropItemSize;
- (id)_visualTarget;
- (id)initWithItemProvider:(id)arg1;
- (id)itemProvider;
- (id)localObject;
- (void)set_dropSession:(id)arg1;

@end

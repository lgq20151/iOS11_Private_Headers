/* made by EzioChiu.
 */

@protocol _UIDraggingItemVisualTarget <NSObject>

@optional

- (bool)_draggingItem:(void *)arg1 shouldDelaySetDownAnimationWithCompletion:(void *)arg2; // needs 2 arg types, found 6: _UIDraggingItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_draggingItem:(_UIDraggingItem *)arg1 willAnimateDisappearanceWithAnimator:(UIViewPropertyAnimator *)arg2;
- (void)_draggingItem:(_UIDraggingItem *)arg1 willAnimateSetDownWithAnimator:(UIViewPropertyAnimator *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetFrameOfDraggingItem:(_UIDraggingItem *)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;

@end

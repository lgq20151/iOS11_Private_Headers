/* made by EzioChiu.
 */

@protocol UIInputViewSetPlacementApplicator <NSObject>

@required

+ (<UIInputViewSetPlacementApplicator> *)applicatorForOwner:(id <UIInputViewSetPlacementOwner>)arg1 withPlacement:(UIInputViewSetPlacement *)arg2;

- (bool)allConstraintsActive;
- (void)applyChanges:(NSDictionary *)arg1;
- (NSArray *)constraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (UIView *)draggableView;
- (void)invalidate;
- (bool)isGesture:(UIGestureRecognizer *)arg1 inDraggableView:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })origin;
- (bool)preBeginGesture:(UIGestureRecognizer *)arg1 shouldBegin:(bool*)arg2;
- (void)prepare;

@end

/* made by EzioChiu.
 */

@protocol _UICollectionViewDragDestinationControllerDelegate <NSObject>

@required

- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didCompleteDropAnimationForDragItem:(UIDragItem *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didPerformDropAtIndexPath:(NSIndexPath *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willBeginDropAnimationForDragItem:(UIDragItem *)arg2 animator:(id <UIDragAnimating>)arg3;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willPerformDropAtIndexPath:(NSIndexPath *)arg2;
- (void)dragDestinationControllerDidConcludeDrop:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerSessionDidEnd:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerSessionWillBegin:(_UICollectionViewDragDestinationController *)arg1;

@end

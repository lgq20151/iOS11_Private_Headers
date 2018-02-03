/* made by EzioChiu.
 */

@protocol _UIViewDraggingSourceDelegate <NSObject>

@required

- (NSArray *)view:(UIView *)arg1 itemsForDragSourceWithIndex:(unsigned long long)arg2;

@optional

- (unsigned long long)numberOfDragSourcesForView:(UIView *)arg1;
- (void)view:(UIView *)arg1 failedToDragSourceWithIndex:(unsigned long long)arg2;
- (void)view:(UIView *)arg1 willBeginDraggingSourceWithIndex:(unsigned long long)arg2 withSession:(_UIDraggingSession *)arg3;

@end

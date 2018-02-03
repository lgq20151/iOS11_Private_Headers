/* made by EzioChiu.
 */

@protocol _UIDraggingInfo <NSObject>

@required

- (struct CGPoint { double x1; double x2; })draggingLocationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (unsigned long long)draggingSourceOperationMask;
- (void)enumerateItemsWithOptions:(void *)arg1 acceptableTypeIdentifiers:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIDraggingItem *, long long, bool*, void*
- (_UIDraggingSession *)localDraggingSession;
- (long long)numberOfValidItemsForDrop;
- (void)setNumberOfValidItemsForDrop:(long long)arg1;

@end

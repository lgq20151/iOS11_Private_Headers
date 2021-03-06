/* made by EzioChiu.
 */

@protocol PXMutablePhotosDetailsViewModel <NSObject>

@required

- (bool)isFaceModeEnabled;
- (bool)isSelecting;
- (PXSectionedSelectionManager *)selectionManager;
- (void)setFaceModeEnabled:(bool)arg1;
- (void)setSelecting:(bool)arg1;
- (void)setSelectionManager:(PXSectionedSelectionManager *)arg1;
- (void)setSupportsFaceMode:(bool)arg1;
- (void)setSupportsSelection:(bool)arg1;
- (bool)supportsFaceMode;
- (bool)supportsSelection;

@end

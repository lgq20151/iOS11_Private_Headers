/* made by EzioChiu.
 */

@protocol _UIFocusDebugQuickLookImageDrawing <NSObject>

@required

- (void)_drawDebugQuickLookImageWithInfo:(_UIFocusMapSnapshotDebugInfo *)arg1 inContext:(struct CGContext { }*)arg2;
- (bool)_shouldDrawDebugQuickLookImageWithInfo:(_UIFocusMapSnapshotDebugInfo *)arg1;

@end

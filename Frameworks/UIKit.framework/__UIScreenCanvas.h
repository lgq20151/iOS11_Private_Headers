/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface __UIScreenCanvas : _UICanvas

+ (id)_unassociatedCanvasForScreen:(id)arg1 create:(bool)arg2;
+ (bool)alwaysKeepContexts;
+ (id)settingsDiffActions;

- (void)_invalidateScreen;
- (id)_lookupKey;
- (void)detachWindow:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (id)screen;
- (void)setKeepContextAssociationInBackground:(bool)arg1;

@end

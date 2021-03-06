/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGenericDiagnosticsService : PXDiagnosticsService

- (bool)canProvideConsoleDescription;
- (bool)canProvideContextualViewController;
- (bool)canProvideSettingsViewController;
- (id)consoleDescription;
- (id)settingsViewController;
- (id)title;

@end

/* made by EzioChiu.
 */

@protocol PXGridPresentation <NSObject>

@optional

- (void)createGridViewControllerWithAssets:(void *)arg1 withTitle:(void *)arg2 hideTabBar:(void *)arg3 hideSearch:(void *)arg4 containerViewController:(void *)arg5 navigationItemDelegate:(void *)arg6 andCompletion:(void *)arg7; // needs 7 arg types, found 12: <NSFastEnumeration> *, NSString *, bool, bool, UIViewController *, <PXGridPresentationNavigationItemDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (UIViewController *)createSceneDebugViewControllerWithAssetCollection:(PHAssetCollection *)arg1 sceneIdentifier:(NSNumber *)arg2 hideTabBar:(bool)arg3 hideSearch:(bool)arg4;

@end

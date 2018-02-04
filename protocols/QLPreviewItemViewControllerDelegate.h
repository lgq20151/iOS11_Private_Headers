/* made by EzioChiu.
 */

@protocol QLPreviewItemViewControllerDelegate <NSObject>

@required

- (long long)dragDataOwnerForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)expandContentOfPreviewItemViewController:(QLItemViewController *)arg1 withURL:(NSURL *)arg2;
- (NSString *)loadingTextForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)previewItemViewController:(QLItemViewController *)arg1 didEnableEditMode:(bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 hasUnsavedEdits:(bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsFullScreen:(bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToOpenURL:(NSURL *)arg2;
- (void)previewItemViewControllerDidEditPreview:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: QLItemViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidUpdateTitle:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowShareSheet:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdatePrinter:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateToolbar:(QLItemViewController *)arg1 animated:(bool)arg2;

@end
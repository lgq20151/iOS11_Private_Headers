/* made by EzioChiu.
 */

@protocol DOCTargetSelectionBrowserViewControllerDelegate

@required

- (void)targetSelectionController:(DOCTargetSelectionBrowserViewController *)arg1 didExportToURLs:(NSArray *)arg2;
- (void)targetSelectionControllerWasCancelled:(DOCTargetSelectionBrowserViewController *)arg1;

@end

/* made by EzioChiu.
 */

@protocol UIPrintInteractionControllerDelegate <NSObject>

@optional

- (long long)printInteractionController:(UIPrintInteractionController *)arg1 chooseCutterBehavior:(NSArray *)arg2;
- (UIPrintPaper *)printInteractionController:(UIPrintInteractionController *)arg1 choosePaper:(NSArray *)arg2;
- (double)printInteractionController:(UIPrintInteractionController *)arg1 cutLengthForPaper:(UIPrintPaper *)arg2;
- (void)printInteractionControllerDidDismissPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerDidFinishJob:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerDidPresentPrinterOptions:(UIPrintInteractionController *)arg1;
- (UIViewController *)printInteractionControllerParentViewController:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillDismissPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillPresentPrinterOptions:(UIPrintInteractionController *)arg1;
- (void)printInteractionControllerWillStartJob:(UIPrintInteractionController *)arg1;

@end

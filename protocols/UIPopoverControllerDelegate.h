/* made by EzioChiu.
 */

@protocol UIPopoverControllerDelegate <NSObject>

@optional

- (void)popoverController:(UIPopoverController *)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg1;
- (bool)popoverControllerShouldDismissPopover:(UIPopoverController *)arg1;

@end

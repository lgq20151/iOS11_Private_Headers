/* made by EzioChiu.
 */

@protocol _UIDocumentPickerRemoteViewControllerContaining

@required

- (void)_didSelectPicker;
- (void)_didSelectURL:(NSURL *)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(NSString *)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_stitchFileCreationAtURL:(NSURL *)arg1;

@end

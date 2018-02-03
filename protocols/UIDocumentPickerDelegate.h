/* made by EzioChiu.
 */

@protocol UIDocumentPickerDelegate <NSObject>

@optional

- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentAtURL:(NSURL *)arg2;
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentsAtURLs:(NSArray *)arg2;
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)arg1;

@end

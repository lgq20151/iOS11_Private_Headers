/* made by EzioChiu.
 */

@protocol UIDocumentBrowserViewControllerDelegate <NSObject>

@optional

- (NSArray *)documentBrowser:(UIDocumentBrowserViewController *)arg1 applicationActivitiesForDocumentURLs:(NSArray *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didImportDocumentAtURL:(NSURL *)arg2 toDestinationURL:(NSURL *)arg3;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickDocumentURLs:(NSArray *)arg2;
- (void)documentBrowser:(void *)arg1 didRequestDocumentCreationWithHandler:(void *)arg2; // needs 2 arg types, found 8: UIDocumentBrowserViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, unsigned long long, void*
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 failedToImportDocumentAtURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 willPresentActivityViewController:(UIActivityViewController *)arg2;

@end

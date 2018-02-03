/* made by EzioChiu.
 */

@protocol DOCHostDocumentBrowserViewControllerInterface

@required

- (void)_commitDocumentURLPreview:(DOCItem *)arg1;
- (void)_didImportDocumentAtURL:(NSURL *)arg1 toDestinationItem:(DOCItem *)arg2;
- (void)_didPickItems:(NSArray *)arg1;
- (void)_didRequestDocumentCreationWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, unsigned long long, void*
- (void)_didTriggerActionWithIdentifier:(NSString *)arg1 onItems:(NSArray *)arg2;
- (void)_didTriggerBarButtonWithUUID:(NSUUID *)arg1;
- (void)_failedToImportDocumentAtURL:(NSURL *)arg1 error:(NSError *)arg2;
- (void)_presentActivityViewControllerForItems:(NSArray *)arg1 withPopoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg2;
- (void)_updateRemoteBarButtonFrames:(NSArray *)arg1 forUUID:(NSArray *)arg2;

@end

/* made by EzioChiu.
 */

@protocol QLLocalPreviewingController <NSObject>

@required

+ (Class)transformerClass;

- (void)loadPreviewControllerWithContents:(void *)arg1 context:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: id, QLPreviewContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canShowToolBar;
- (bool)canSwipeToDismiss;
- (void)prepareForActionSheetPresentation;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)previewWillFinishAppearing;
- (<QLPrintingProtocol> *)printer;

@end
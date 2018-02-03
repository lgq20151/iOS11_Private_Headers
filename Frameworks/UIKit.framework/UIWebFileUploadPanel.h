/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebFileUploadPanel : UIViewController <UIDocumentMenuDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate> {
    bool  _allowMultipleFiles;
    <UIWebFileUploadPanelDelegate> * _delegate;
    UIDocumentMenuViewController * _documentMenuController;
    UIWebDocumentView * _documentView;
    UIImagePickerController * _imagePicker;
    DOMNode * _interactionElement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionPoint;
    bool  _isUsingCamera;
    long long  _mediaCaptureType;
    NSArray * _mimeTypes;
    UIPopoverController * _presentationPopover;
    UIViewController * _presentationViewController;
    NSObject<WebOpenPanelResultListener> * _resultListener;
}

@property (nonatomic) bool allowMultipleFiles;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIWebFileUploadPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIWebDocumentView *documentView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUsingCamera;
@property (nonatomic) long long mediaCaptureType;
@property (nonatomic, copy) NSArray *mimeTypes;
@property (nonatomic, retain) NSObject<WebOpenPanelResultListener> *resultListener;
@property (readonly) Class superclass;

- (id)_UTIsForMIMETypes;
- (void)_adjustMediaCaptureType;
- (id)_cameraButtonLabel;
- (void)_cancel;
- (void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_dismissDisplayAnimated:(bool)arg1;
- (void)_dispatchDidDismiss;
- (id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (id)_documentPickerMenuMediaTypes;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (id)_photoPickerWithSourceType:(long long)arg1;
- (void)_presentForCurrentInterfaceIdiom:(id)arg1;
- (void)_presentFullscreenViewController:(id)arg1 animated:(bool)arg2;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(bool)arg2;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (bool)_shouldMediaCaptureOpenMediaDevice;
- (void)_showDocumentPickerMenu;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (bool)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (bool)_willMultipleSelectionDelegateBeCalled;
- (bool)allowMultipleFiles;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)documentView;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithResultListener:(id)arg1 configuration:(id)arg2 documentView:(id)arg3;
- (bool)isUsingCamera;
- (long long)mediaCaptureType;
- (id)mimeTypes;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)present;
- (id)resultListener;
- (void)setAllowMultipleFiles:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (void)setIsUsingCamera:(bool)arg1;
- (void)setMediaCaptureType:(long long)arg1;
- (void)setMimeTypes:(id)arg1;
- (void)setResultListener:(id)arg1;

@end

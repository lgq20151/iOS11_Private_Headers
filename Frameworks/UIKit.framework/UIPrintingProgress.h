/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintingProgress : NSObject {
    UIAlertView * _alert;
    id /* block */  _cancelHandler;
    bool  _creatingPDF;
    double  _displayTime;
    bool  _donePrinting;
    bool  _forceDisplayAsAlert;
    double  _lastPageUpdate;
    NSString * _printerName;
    double  _progressAlertDelay;
    double  _startTime;
    UIPrintingProgressViewController * _viewController;
}

@property bool creatingPDF;
@property double lastPageUpdate;
@property double progressAlertDelay;
@property (readonly) NSString *title;

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (bool)creatingPDF;
- (void)didPresentAlertView:(id)arg1;
- (void)endProgress;
- (void)hideProgressAnimated:(bool)arg1;
- (id)initPDFCreationWithCancelHandler:(id /* block */)arg1;
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(bool)arg2 cancelHandler:(id /* block */)arg3;
- (double)lastPageUpdate;
- (double)nextPrintDelay;
- (double)progressAlertDelay;
- (void)progressCancel;
- (bool)progressVisible;
- (void)setCreatingPDF:(bool)arg1;
- (void)setLastPageUpdate:(double)arg1;
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;
- (void)setPrintInfoState:(int)arg1;
- (void)setProgressAlertDelay:(double)arg1;
- (void)showProgress:(id)arg1 immediately:(bool)arg2;
- (id)title;

@end
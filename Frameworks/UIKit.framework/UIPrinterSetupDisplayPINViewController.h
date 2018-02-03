/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupDisplayPINViewController : UIViewController {
    PKPrinter * _printer;
}

@property (nonatomic, retain) PKPrinter *printer;

- (void).cxx_destruct;
- (void)enterPIN;
- (id)initWithPrinter:(id)arg1;
- (void)loadView;
- (id)printer;
- (void)setPrinter:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showDisplayMessage:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupPINViewController : UIViewController {
    UIPrinterSetupPINView * _PINView;
    UIPrinterSetupConnectingView * _connectingView;
    PKPrinter * _printer;
    UIScrollView * _scrollView;
}

@property (nonatomic, retain) UIPrinterSetupPINView *PINView;
@property (nonatomic, retain) UIPrinterSetupConnectingView *connectingView;
@property (nonatomic, retain) PKPrinter *printer;
@property (nonatomic, retain) UIScrollView *scrollView;

- (void).cxx_destruct;
- (id)PINView;
- (void)connectToPrinter;
- (void)connected:(bool)arg1;
- (id)connectingView;
- (void)dealloc;
- (id)initWithPrinter:(id)arg1;
- (void)loadView;
- (id)printer;
- (id)scrollView;
- (void)setConnectingView:(id)arg1;
- (void)setPINView:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setScrollView:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showFailure;
- (void)showSetup;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

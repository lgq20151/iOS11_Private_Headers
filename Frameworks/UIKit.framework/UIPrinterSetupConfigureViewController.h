/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate> {
    bool  _addToNetwork;
    UIPrinterSetupConnectingView * _connectingView;
    NSString * _directPasscode;
    bool  _directPrinting;
    UIButton * _finishButton;
    PKPrinter * _printer;
}

@property (nonatomic) bool addToNetwork;
@property (nonatomic, retain) UIPrinterSetupConnectingView *connectingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *directPasscode;
@property (nonatomic) bool directPrinting;
@property (nonatomic, retain) UIButton *finishButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPrinter *printer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addToNetwork;
- (id)connectingView;
- (void)dealloc;
- (id)directPasscode;
- (bool)directPrinting;
- (void)finish;
- (id)finishButton;
- (void)finished:(bool)arg1;
- (id)initWithPrinter:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)printer;
- (void)setAddToNetwork:(bool)arg1;
- (void)setConnectingView:(id)arg1;
- (void)setDirectPasscode:(id)arg1;
- (void)setDirectPrinting:(bool)arg1;
- (void)setFinishButton:(id)arg1;
- (void)setPrinter:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)textDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)toggleAddToNetwork:(id)arg1;
- (void)toggleDirectPrinting:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

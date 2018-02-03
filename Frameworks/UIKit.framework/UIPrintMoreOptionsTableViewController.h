/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintMoreOptionsTableViewController : UITableViewController {
    UIPrintPanelViewController * _printPanelViewController;
    long long  _stapleRow;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithPrintPanelViewController:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showCancelButton;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateStaple:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end

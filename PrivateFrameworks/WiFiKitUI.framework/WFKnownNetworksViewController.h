/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFKnownNetworksViewController : UITableViewController {
    NSMutableArray * _knownNetworksArray;
    <WFKnownNetworksViewControllerDelegate> * _knownNetworksDelegate;
}

@property (nonatomic, retain) NSMutableArray *knownNetworksArray;
@property (nonatomic) <WFKnownNetworksViewControllerDelegate> *knownNetworksDelegate;

- (void).cxx_destruct;
- (id)knownNetworksArray;
- (id)knownNetworksDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setKnownNetworksArray:(id)arg1;
- (void)setKnownNetworksDelegate:(id)arg1;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
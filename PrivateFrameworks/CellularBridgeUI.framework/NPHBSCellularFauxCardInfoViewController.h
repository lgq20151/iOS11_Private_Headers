/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

@interface NPHBSCellularFauxCardInfoViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    id /* block */  _completion;
    UILabel * _enterActivationLabel;
    NSString * _fauxCardData;
    UITableView * _infoTableView;
    NSLayoutConstraint * _infoTableViewHeightConstraint;
    NSArray * _tableData;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UILabel *enterActivationLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) UITableView *infoTableView;
@property (nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activatePlan:(id)arg1;
- (id /* block */)completion;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)enterActivationLabel;
- (id)infoTableView;
- (id)infoTableViewHeightConstraint;
- (id)init;
- (void)setCompletion:(id /* block */)arg1;
- (void)setEnterActivationLabel:(id)arg1;
- (void)setInfoTableView:(id)arg1;
- (void)setInfoTableViewHeightConstraint:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

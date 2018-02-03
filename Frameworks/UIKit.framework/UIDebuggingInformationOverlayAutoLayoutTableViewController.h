/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingInformationOverlayAutoLayoutTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _horizontalConstraints;
    UITableView * _tableView;
    NSArray * _verticalConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *horizontalConstraints;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) NSArray *verticalConstraints;

- (void).cxx_destruct;
- (id)horizontalConstraints;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refresh;
- (void)setHorizontalConstraints:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setVerticalConstraints:(id)arg1;
- (void)switchChanged:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)verticalConstraints;
- (void)viewDidLoad;

@end

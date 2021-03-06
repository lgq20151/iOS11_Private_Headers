/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCommutePlanRenewalReminderSetupViewController : UITableViewController {
    PKPaymentPassAction * _action;
    <PKCommutePlanRenewalReminderSetupViewControllerDelegate> * _delegate;
    PKPassLibrary * _passLibrary;
    PKPassPreferencesManager * _passPreferencesManager;
    PKPaymentPass * _paymentPass;
    double  _selectedTimeInterval;
    NSDateComponentsFormatter * _timeIntervalFormatter;
    NSArray * _timeIntervalOptions;
}

@property (nonatomic, retain) PKPaymentPassAction *action;
@property (nonatomic) <PKCommutePlanRenewalReminderSetupViewControllerDelegate> *delegate;
@property (nonatomic, retain) PKPassLibrary *passLibrary;
@property (nonatomic, retain) PKPassPreferencesManager *passPreferencesManager;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic) double selectedTimeInterval;
@property (nonatomic, retain) NSDateComponentsFormatter *timeIntervalFormatter;
@property (nonatomic, retain) NSArray *timeIntervalOptions;

- (void).cxx_destruct;
- (id)_indexPathOfTimeInterval:(double)arg1;
- (double)_timeIntervalAtIndexPath:(id)arg1;
- (id)action;
- (id)delegate;
- (id)initWithAction:(id)arg1 forPass:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passLibrary;
- (id)passPreferencesManager;
- (id)paymentPass;
- (double)selectedTimeInterval;
- (void)setAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPassLibrary:(id)arg1;
- (void)setPassPreferencesManager:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setSelectedTimeInterval:(double)arg1;
- (void)setTimeIntervalFormatter:(id)arg1;
- (void)setTimeIntervalOptions:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)timeIntervalFormatter;
- (id)timeIntervalOptions;
- (void)updateCheckmarkForSelectedCellAtIndexPath:(id)arg1;
- (void)viewDidLoad;

@end

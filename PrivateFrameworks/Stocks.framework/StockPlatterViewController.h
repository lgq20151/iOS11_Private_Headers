/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockPlatterViewController : UIViewController <StockChartViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIButton * _attributionButton;
    long long  _chartInterval;
    ChartUpdater * _chartUpdater;
    StockChartView * _chartView;
    UILabel * _exchangeStatusLabel;
    StocksLayout * _layout;
    NetPreferences * _netPreferences;
    long long  _rowDataType;
    UIView * _statusBarView;
    Stock * _stock;
    StockFetcher * _stockFetcher;
    StockManager * _stockManager;
    NSString * _stockTicker;
    StockUpdateManager * _stockUpdateManager;
    UITableView * _stocksTableView;
    StocksStyle * _style;
}

@property (nonatomic, retain) UIButton *attributionButton;
@property (nonatomic) long long chartInterval;
@property (nonatomic, retain) ChartUpdater *chartUpdater;
@property (nonatomic, retain) StockChartView *chartView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *exchangeStatusLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) StocksLayout *layout;
@property (nonatomic, retain) NetPreferences *netPreferences;
@property (nonatomic) long long rowDataType;
@property (nonatomic, retain) UIView *statusBarView;
@property (nonatomic, retain) Stock *stock;
@property (nonatomic, retain) StockFetcher *stockFetcher;
@property (nonatomic, retain) StockManager *stockManager;
@property (nonatomic, retain) NSString *stockTicker;
@property (nonatomic, retain) StockUpdateManager *stockUpdateManager;
@property (nonatomic, retain) UITableView *stocksTableView;
@property (nonatomic, retain) StocksStyle *style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attributionButtonPressed:(id)arg1;
- (void)_cleanup;
- (void)_setupStockWithTicker:(id)arg1;
- (void)_updateExchangeData;
- (id)attributionButton;
- (long long)chartInterval;
- (id)chartUpdater;
- (id)chartView;
- (void)dealloc;
- (id)exchangeStatusLabel;
- (id)initWithStockTicker:(id)arg1;
- (id)layout;
- (id)netPreferences;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)rowDataType;
- (void)setAttributionButton:(id)arg1;
- (void)setChartInterval:(long long)arg1;
- (void)setChartUpdater:(id)arg1;
- (void)setChartView:(id)arg1;
- (void)setExchangeStatusLabel:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setNetPreferences:(id)arg1;
- (void)setRowDataType:(long long)arg1;
- (void)setStatusBarView:(id)arg1;
- (void)setStock:(id)arg1;
- (void)setStockFetcher:(id)arg1;
- (void)setStockManager:(id)arg1;
- (void)setStockTicker:(id)arg1;
- (void)setStockUpdateManager:(id)arg1;
- (void)setStocksTableView:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)statusBarView;
- (id)stock;
- (void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2;
- (bool)stockChartViewIsCurrentChartView:(id)arg1;
- (void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1;
- (id)stockFetcher;
- (id)stockManager;
- (id)stockTicker;
- (id)stockUpdateManager;
- (id)stocksTableView;
- (id)style;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateChartForInterval:(long long)arg1 completion:(id /* block */)arg2;
- (void)viewDidLoad;

@end
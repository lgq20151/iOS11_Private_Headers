/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageViewController : UIViewController <SKUIMetricsViewController, SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, UIViewControllerRestoration> {
    SKUIClientContext * _clientContext;
    <SKUIStorePageDelegate> * _delegate;
    NSString * _lastDataConsumerClassName;
    SSMetricsPageEvent * _lastPageEvent;
    NSURLRequest * _lastRequest;
    bool  _loadOnAppear;
    SSVLoadURLOperation * _loadOperation;
    SKUIMetricsController * _metricsController;
    NSOperationQueue * _operationQueue;
    NSString * _performanceTestName;
    NSDictionary * _performanceTestOptions;
    SKUIColorScheme * _placeholderColorScheme;
    UIRefreshControl * _refreshControl;
    SKUIStorePageSectionsViewController * _sectionsViewController;
    SKUIStorePage * _storePage;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIStorePageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) UIRefreshControl *refreshControl;
@property (getter=isSkLoading, nonatomic, readonly) bool skLoading;
@property (nonatomic, copy) SKUIStorePage *storePage;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (id)_colorScheme;
- (void)_loadWithOperation:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2;
- (void)_reloadStorePage;
- (void)_runPerformanceTestAfterIdle;
- (void)_runPerformanceTestAfterPageLoad;
- (void)_runScrollTestWithName:(id)arg1 options:(id)arg2;
- (id)_sectionsViewController;
- (void)_setMetricsController:(id)arg1;
- (void)_setStorePage:(id)arg1 error:(id)arg2;
- (void)_showProductPage:(id)arg1 withPageEvent:(id)arg2;
- (id)activeMetricsController;
- (void)cancelPageLoad;
- (id)clientContext;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSkLoading;
- (void)loadURL:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)loadURLRequest:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)loadView;
- (void)loadWithJSONData:(id)arg1 fromOperation:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)operationQueue;
- (bool)performTestWithName:(id)arg1 options:(id)arg2;
- (id)refreshControl;
- (bool)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2;
- (bool)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2;
- (void)sectionsViewControllerDidDismissOverlayController:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setStorePage:(id)arg1;
- (id)storePage;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(bool)arg1;

@end
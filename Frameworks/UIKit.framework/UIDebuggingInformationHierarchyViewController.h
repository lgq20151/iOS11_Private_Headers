/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingInformationHierarchyViewController : UIViewController <UIDebuggingInformationTouchObserver, UIDebuggingInformationValueViewObserver, UIDebuggingInformationViewController, UITableViewDataSource, UITableViewDelegate> {
    NSMutableDictionary * _controlsForKeys;
    NSArray * _data;
    UIDebuggingInformationInspectorDetailViewController * _detail;
    UIView * _highlightedView;
    NSMutableArray * _keys;
    NSMutableDictionary * _managedValues;
    NSMutableDictionary * _observersForKeys;
    struct CGColor { } * _originalBorderColor;
    double  _originalBorderWidth;
    UIRefreshControl * _refreshControl;
    UIView * _rootViewForInspection;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSMutableDictionary *controlsForKeys;
@property (nonatomic, retain) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDebuggingInformationInspectorDetailViewController *detail;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightedView;
@property (nonatomic, retain) NSMutableArray *keys;
@property (nonatomic, retain) NSMutableDictionary *managedValues;
@property (nonatomic, retain) NSMutableDictionary *observersForKeys;
@property (nonatomic) struct CGColor { }*originalBorderColor;
@property (nonatomic) double originalBorderWidth;
@property (nonatomic, retain) UIRefreshControl *refreshControl;
@property (nonatomic, retain) UIView *rootViewForInspection;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)_observersForKey:(id)arg1;
- (void)addPropertyForKey:(id)arg1 ofType:(long long)arg2 defaultValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5;
- (void)addPropertyObserver:(id)arg1 forKey:(id)arg2;
- (void)chooseNewTarget:(id)arg1;
- (id)controlsForKeys;
- (id)data;
- (id)detail;
- (void)didReceiveNewView:(id)arg1;
- (id)getViewsRecursiveWithLevel:(unsigned long long)arg1 forView:(id)arg2;
- (void)highlightView:(id)arg1;
- (id)highlightedView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keys;
- (id)managedValues;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)observersForKeys;
- (struct CGColor { }*)originalBorderColor;
- (double)originalBorderWidth;
- (void)refresh:(id)arg1;
- (id)refreshControl;
- (void)removePropertyObserver:(id)arg1 forKey:(id)arg2;
- (id)rootViewForInspection;
- (void)setControlsForKeys:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setHighlightedView:(id)arg1;
- (void)setKeys:(id)arg1;
- (void)setManagedValues:(id)arg1;
- (void)setObserversForKeys:(id)arg1;
- (void)setOriginalBorderColor:(struct CGColor { }*)arg1;
- (void)setOriginalBorderWidth:(double)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setRootViewForInspection:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)valueWithKey:(id)arg1 changedToValue:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceDealsViewController : UIViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    NSLayoutConstraint * _collapsedConstraint;
    <MKMapItemVendorDeal> * _deal;
    _MKPlaceDealView * _dealView;
    <MKPlaceDealsViewControllerDelegate> * _delegate;
    bool  _resizableViewsDisabled;
}

@property (nonatomic, retain) <MKMapItemVendorDeal> *deal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceDealsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool resizableViewsDisabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dealSelected:(id)arg1;
- (id)deal;
- (id)delegate;
- (id)infoCardChildPossibleActions;
- (void)loadView;
- (bool)resizableViewsDisabled;
- (void)setDeal:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;

@end
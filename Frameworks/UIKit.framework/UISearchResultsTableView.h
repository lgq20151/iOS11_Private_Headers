/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchResultsTableView : UITableView {
    UISearchDisplayController * _controller;
    double  _offsetForNoResultsMessage;
    UIView * _topShadowView;
}

@property (getter=_topShadowView, setter=_setTopShadowView:, nonatomic, retain) UIView *_topShadowView;
@property (nonatomic) UISearchDisplayController *controller;

- (void).cxx_destruct;
- (void)_numberOfRowsDidChange;
- (double)_offsetForNoResultsMessage;
- (void)_setOffsetForNoResultsMessage:(double)arg1;
- (void)_setTopShadowView:(id)arg1;
- (id)_topShadowView;
- (id)controller;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setController:(id)arg1;

@end

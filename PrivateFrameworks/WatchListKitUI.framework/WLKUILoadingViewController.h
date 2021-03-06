/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUILoadingViewController : UIViewController {
    bool  _cancelLoading;
    bool  _loading;
    WLKUISpinnerView * _loadingView;
    UIView * _parentView;
    UIView * _principalView;
}

@property (nonatomic) bool loading;

- (void).cxx_destruct;
- (bool)loading;
- (void)setLoading:(bool)arg1;
- (void)setView:(id)arg1;

@end

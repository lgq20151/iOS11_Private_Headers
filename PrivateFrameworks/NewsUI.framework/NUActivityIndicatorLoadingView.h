/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUActivityIndicatorLoadingView : UIView <NULoadingViewProviding> {
    UIActivityIndicatorView * _activityIndicatorView;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityIndicatorView;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)loadingViewStartAnimating;
- (void)loadingViewStopAnimating;

@end

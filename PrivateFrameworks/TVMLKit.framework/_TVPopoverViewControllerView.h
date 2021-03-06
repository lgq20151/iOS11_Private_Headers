/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPopoverViewControllerView : UIView {
    UIButton * _cancelButton;
    UITableView * _tableView;
}

@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_configureSubviews;
- (id)cancelButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTableView:(id)arg1;
- (id)tableView;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailAttendeesCell : EKEventDetailCell {
    EKEventDetailAttendeesListView * _attendeesListView;
    UILabel * _countLabel;
    UIImageView * _disclosure;
    NSLayoutConstraint * _listHeight;
    UILabel * _titleLabel;
    UIViewController * _viewController;
}

@property UIViewController *viewController;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_attendeesListView;
- (double)displayHeight;
- (double)footerInset;
- (double)headerInset;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (double)listToTitle;
- (void)setAttendees:(id)arg1;
- (void)setViewController:(id)arg1;
- (bool)update;
- (id)viewController;

@end

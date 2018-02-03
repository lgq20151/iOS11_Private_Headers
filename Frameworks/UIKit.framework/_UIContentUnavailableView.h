/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIContentUnavailableView : UIView {
    UIButton * _actionButton;
    _UIBackdropView * _backdrop;
    id /* block */  _buttonAction;
    NSString * _buttonTitle;
    UIView * _containerView;
    NSMutableArray * _containerViewContraints;
    UIView * _fromSnapshot;
    struct CGSize { 
        double width; 
        double height; 
    }  _fromSnapshotSize;
    NSString * _message;
    UILabel * _messageLabel;
    UIScrollView * _scrollView;
    unsigned long long  _style;
    NSString * _title;
    UILabel * _titleLabel;
    UIView * _toSnapshot;
    unsigned long long  _vibrantOptions;
    NSLayoutConstraint * buttonHeightConstraint;
    NSLayoutConstraint * messageToButtonConstraint;
    NSLayoutConstraint * titleToMessageConstraint;
}

@property (nonatomic, copy) id /* block */ buttonAction;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long vibrantOptions;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (double)_buttonAlpha;
- (id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2;
- (id)_buttonFont;
- (struct CGSize { double x1; double x2; })_buttonSize;
- (id)_buttonTextStyle;
- (double)_buttonVerticalSpacing;
- (id)_flatTextColor;
- (bool)_hasVibrantButton;
- (bool)_hasVibrantText;
- (double)_labelAlpha;
- (double)_labelVerticalSpacing;
- (id)_messageTextStyle;
- (void)_rebuildConstraints;
- (id)_titleFont;
- (void)_updateForCurrentContentSizeCategory;
- (void)_updateViewHierarchy;
- (id)_vibrantBaseColor;
- (id /* block */)buttonAction;
- (id)buttonTitle;
- (void)cleanupLingeringRotationState;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 title:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(bool)arg4;
- (void)layoutSubviews;
- (id)message;
- (id)preferredFocusedView;
- (void)setButtonAction:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVibrantOptions:(unsigned long long)arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (unsigned long long)vibrantOptions;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;

@end

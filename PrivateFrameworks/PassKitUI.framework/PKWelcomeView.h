/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKWelcomeView : UIView <PKPGSVSectionSubheaderView> {
    NSMutableArray * _actionButtons;
    UIActivityIndicatorView * _activityIndicator;
    UIImageView * _backgroundView;
    UIImage * _headerImage;
    UIImageView * _headerView;
    NSAttributedString * _message;
    UITextView * _messageView;
    UIImageView * _shadowView;
    bool  _showActivityIndicator;
}

@property (nonatomic, retain) NSMutableArray *actionButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *headerImage;
@property (nonatomic, copy) NSAttributedString *message;
@property (nonatomic) bool showActivityIndicator;
@property (readonly) Class superclass;

+ (double)bottomMargin;
+ (double)buttonHeight;
+ (double)buttonSpacing;
+ (id)buttonWithTitle:(id)arg1;
+ (double)defaultHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerImageMargins;
+ (struct CGSize { double x1; double x2; })headerImageSize;
+ (double)indicatorSpacing;
+ (bool)isAvailable;
+ (id)messageFont;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;
+ (double)textToButtonSpacing;

- (void).cxx_destruct;
- (id)actionButtons;
- (void)addActionButton:(id)arg1;
- (void)dealloc;
- (id)headerImage;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithHeight:(double)arg1;
- (void)layoutSubviews;
- (id)message;
- (bool)needsUpdate;
- (void)setActionButtons:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (bool)showActivityIndicator;

@end

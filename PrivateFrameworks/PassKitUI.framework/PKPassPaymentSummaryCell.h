/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentSummaryCell : PKTableViewCell {
    UILabel * _amountLabel;
    <PKPassPaymentSummaryCellDelegate> * _delegate;
    UIButton * _detailsButton;
}

@property (nonatomic, retain) NSString *amountText;
@property (nonatomic) <PKPassPaymentSummaryCellDelegate> *delegate;
@property (nonatomic, retain) NSString *detailText;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *primaryText;
@property (nonatomic) long long primaryTextNumberOfLines;
@property (nonatomic) bool showDetailsButton;

+ (id)_amountTextFont;
+ (id)_detailTextFont;
+ (id)_primaryTextFont;
+ (struct CGSize { double x1; double x2; })_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(long long)arg3 width:(double)arg4;
+ (double)heightWithPrimaryText:(id)arg1 primaryTextNumberOfLines:(long long)arg2 detailText:(id)arg3 amountText:(id)arg4 image:(id)arg5 showDetailsButton:(bool)arg6 width:(double)arg7;

- (void).cxx_destruct;
- (void)_detailsButtonPressed:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (id)amountText;
- (void)dealloc;
- (id)delegate;
- (id)detailText;
- (id)image;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryText;
- (long long)primaryTextNumberOfLines;
- (void)setAmountText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextNumberOfLines:(long long)arg1;
- (void)setShowDetailsButton:(bool)arg1;
- (bool)showDetailsButton;

@end

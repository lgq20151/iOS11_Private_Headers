/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCLargeTagView : UIView {
    DOCTagIconView * _checkmarkView;
    long long  _style;
    DOCTagIconView * _tagDotView;
    UILabel * _tagNameLabel;
    UIVisualEffectView * _tagNameLabelWrapper;
    DOCTag * _tagValue;
}

@property (nonatomic, readonly) DOCTagIconView *checkmarkView;
@property (nonatomic) long long style;
@property (nonatomic, readonly) DOCTagIconView *tagDotView;
@property (nonatomic, readonly) UILabel *tagNameLabel;
@property (nonatomic, readonly) UIVisualEffectView *tagNameLabelWrapper;
@property (nonatomic, retain) DOCTag *tagValue;

- (void).cxx_destruct;
- (id)checkmarkView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStyle:(long long)arg1;
- (void)setTagValue:(id)arg1;
- (long long)style;
- (id)tagDotView;
- (id)tagNameLabel;
- (id)tagNameLabelWrapper;
- (id)tagValue;
- (void)updateBackgroundColor;
- (void)updateBorder;

@end
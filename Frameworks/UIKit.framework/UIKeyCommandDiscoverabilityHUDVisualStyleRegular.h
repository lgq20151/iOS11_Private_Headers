/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular : UIKeyCommandDiscoverabilityHUDVisualStyle {
    UIColor * _dividerColor;
    UIColor * _inputColor;
    UIColor * _titleColor;
}

@property (nonatomic, retain) UIColor *dividerColor;
@property (nonatomic, retain) UIColor *inputColor;
@property (nonatomic, retain) UIColor *titleColor;

- (void).cxx_destruct;
- (double)HUDPageControlBottomMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })HUDViewInsets;
- (double)columnDividerHeightForHUDHeight:(double)arg1;
- (double)columnDividerWidth;
- (id)dividerColor;
- (id)init;
- (id)inputColor;
- (double)maxHUDHeightForHeight:(double)arg1;
- (double)maxHUDWidthForWidth:(double)arg1;
- (double)minimumFontScaleBeforeTruncation;
- (void)setDividerColor:(id)arg1;
- (void)setInputColor:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (double)summaryDescriptionToModifiersSpacing;
- (id)summaryFont;
- (double)summaryLineHeight;
- (double)summaryLineSpacing;
- (double)summaryModifiersSpacing;
- (double)summaryXPadding;
- (double)summaryYPadding;
- (id)titleColor;

@end

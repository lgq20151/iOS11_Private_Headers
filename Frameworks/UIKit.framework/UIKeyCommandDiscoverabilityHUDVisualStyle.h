/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject <UIKeyCommandDiscoverabilityHUDVisualStyle>

@property (nonatomic, readonly) double HUDPageControlBottomMargin;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } HUDViewInsets;
@property (nonatomic, readonly) double columnDividerWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *dividerColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *inputColor;
@property (nonatomic, readonly) double minimumFontScaleBeforeTruncation;
@property (nonatomic, readonly) double summaryDescriptionToModifiersSpacing;
@property (nonatomic, readonly) UIFont *summaryFont;
@property (nonatomic, readonly) double summaryLineHeight;
@property (nonatomic, readonly) double summaryLineSpacing;
@property (nonatomic, readonly) double summaryModifiersSpacing;
@property (nonatomic, readonly) double summaryXPadding;
@property (nonatomic, readonly) double summaryYPadding;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *titleColor;

+ (id)visualStyleForTraitCollection:(id)arg1;

- (double)columnDividerHeightForHUDHeight:(double)arg1;
- (double)maxHUDHeightForHeight:(double)arg1;
- (double)maxHUDWidthForWidth:(double)arg1;

@end

/* made by EzioChiu.
 */

@protocol _UIButtonBarAppearanceDelegate

@required

- (double)absorptionForItem:(UIBarButtonItem *)arg1;
- (id)appearanceStorage;
- (double)backButtonMargin;
- (double)backButtonMaximumWidth;
- (UIImage *)backIndicatorImage;
- (UIImage *)backIndicatorMaskImage;
- (long long)barMetrics;
- (long long)barType;
- (bool)barWantsLetterpress;
- (bool)centerTextButtons;
- (double)defaultEdgeSpacing;
- (UIFontDescriptor *)defaultFontDescriptor;
- (double)defaultTextPadding;
- (unsigned long long)edgesPaddingBarButtonItem:(UIBarButtonItem *)arg1;
- (bool)isRTL;
- (UIColor *)tintColor;

@end

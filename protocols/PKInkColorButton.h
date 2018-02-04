/* made by EzioChiu.
 */

@protocol PKInkColorButton

@required

+ (UIButton<PKInkColorButton> *)buttonWithColor:(UIColor *)arg1 isCompact:(bool)arg2;

- (UIColor *)color;
- (UIButton<PKInkColorButton> *)initWithColor:(UIColor *)arg1 isCompact:(bool)arg2;
- (bool)isCompact;
- (bool)isUsedOnDarkBackground;
- (void)setColor:(UIColor *)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;

@end
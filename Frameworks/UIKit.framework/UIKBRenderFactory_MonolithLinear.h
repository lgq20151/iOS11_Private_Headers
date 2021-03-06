/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory_MonolithLinear : UIKBRenderFactory_Monolith

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetRectForSpaceKeyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 yOffset:(double)arg2;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (bool)forceVariantsInsideKeyplane;
- (bool)includeDeleteInVariants;
- (bool)preferGlyphForClear;
- (bool)preferGlyphForDelete;
- (bool)smallTextForSpaceAndClear;
- (bool)spaceKeyIsPressed;
- (double)tldKeyFontSize;
- (double)tldKeyFontWeight;

@end

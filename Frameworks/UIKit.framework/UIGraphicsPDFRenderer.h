/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer

+ (struct CGContext { }*)contextWithFormat:(id)arg1;
+ (void)prepareCGContext:(struct CGContext { }*)arg1 withRendererContext:(id)arg2;
+ (Class)rendererContextClass;

- (id)PDFDataWithActions:(id /* block */)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 format:(id)arg2;
- (void)popContext:(id)arg1;
- (void)pushContext:(id)arg1;
- (bool)writePDFToURL:(id)arg1 withActions:(id /* block */)arg2 error:(id*)arg3;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfGridExporter : KNPdfExporter

- (bool)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 createPage:(bool)arg4;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;

@end
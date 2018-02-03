/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPageRenderer : NSObject {
    long long  _cachedPageCount;
    double  _footerHeight;
    double  _headerHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _paperRect;
    struct CGContext { } * _printContext;
    NSMutableArray * _printFormatters;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _printableRect;
}

@property (nonatomic) double footerHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic, readonly) long long numberOfPages;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paperRect;
@property (nonatomic, copy) NSArray *printFormatters;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } printableRect;

- (void).cxx_destruct;
- (void)_drawPage:(long long)arg1;
- (void)_endPrintContext:(id)arg1 success:(bool)arg2;
- (void)_endSaveContext;
- (long long)_maxFormatterPage;
- (long long)_numberOfPages;
- (bool)_numberOfPagesIsCached;
- (void)_removePrintFormatter:(id)arg1;
- (bool)_startPrintContext:(id)arg1 printSettings:(id)arg2;
- (void)_startSaveContext:(struct CGContext { }*)arg1;
- (void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(long long)arg2;
- (void)dealloc;
- (void)drawContentForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawHeaderForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawPrintFormatter:(id)arg1 forPageAtIndex:(long long)arg2;
- (double)footerHeight;
- (double)headerHeight;
- (long long)numberOfPages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paperRect;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)printFormatters;
- (id)printFormattersForPageAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })printableRect;
- (void)setFooterHeight:(double)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setPaperRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPrintFormatters:(id)arg1;
- (void)setPrintableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

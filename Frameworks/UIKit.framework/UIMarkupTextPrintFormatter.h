/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
    NSString * _markupText;
    UIWebPaginationInfo * _paginationInfo;
    UIWebDocumentView * _webDocumentView;
}

@property (nonatomic, copy) NSString *markupText;

- (void).cxx_destruct;
- (long long)_recalcPageCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (id)initWithMarkupText:(id)arg1;
- (id)markupText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (void)removeFromPrintPageRenderer;
- (void)setMarkupText:(id)arg1;

@end

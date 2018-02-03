/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPaginationInfo : NSObject {
    NSObject<WebDocumentView> * _documentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    NSArray * _pageRects;
    double  _scaleFactor;
    UIWebDocumentView * _webDocumentView;
}

@property (nonatomic, readonly) double lastPageHeight;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, retain) UIWebDocumentView *webDocumentView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)documentView;
- (id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(struct CGSize { double x1; double x2; })arg3 pageRects:(id)arg4;
- (double)lastPageHeight;
- (struct CGSize { double x1; double x2; })layoutSize;
- (unsigned long long)pageCount;
- (id)pageRects;
- (double)scaleFactor;
- (void)setWebDocumentView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForPageAtIndex:(long long)arg1;
- (id)webDocumentView;

@end

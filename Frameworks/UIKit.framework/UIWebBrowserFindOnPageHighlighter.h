/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {
    UIWebBrowserView * _browserView;
    <UIWebFindOnPageHighlighterDelegate> * _delegate;
    NSMutableArray * _highlightBubbleViews;
    UIView * _highlightHostView;
    unsigned long long  _highlightedMatchIndex;
    unsigned long long  _numberOfMatches;
    UIWebPDFViewHandler * _pdfHandler;
    NSArray * _pdfHighlightViews;
    NSString * _searchText;
    bool  _zoomToHighlightSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIWebFindOnPageHighlighterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long highlightedMatchIndex;
@property (nonatomic, readonly) unsigned long long numberOfMatches;
@property (nonatomic, readonly, copy) NSString *searchText;
@property (readonly) Class superclass;

+ (bool)expandedRectsWouldIntersect:(id)arg1;

- (void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_clearHighlightViews;
- (void)_commonInitialize;
- (id)_currentPDFSearchResult;
- (void)_highlightFindOnPageMatch:(bool)arg1;
- (void)_highlightFindOnPageMatchForPDF:(bool)arg1 withPDFHandler:(id)arg2;
- (bool)_highlightSelection;
- (void)_setSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentImage:(struct CGImage { }*)arg3 contentViews:(id)arg4 wobble:(bool)arg5;
- (bool)_updateHighlightedMatchIndex:(bool)arg1;
- (void)clearBrowserView;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)findOnPageOptions;
- (void)highlightNextMatch;
- (void)highlightPreviousMatch;
- (unsigned long long)highlightedMatchIndex;
- (id)initWithBrowserView:(id)arg1;
- (id)initWithPDFViewHandler:(id)arg1;
- (unsigned long long)numberOfMatches;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (void)searchDidBegin:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (id)searchText;
- (void)searchWasCancelled:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentImage:(struct CGImage { }*)arg3 wobble:(bool)arg4;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(bool)arg4;
- (bool)updateHighlightBubbleWobble:(bool)arg1;

@end

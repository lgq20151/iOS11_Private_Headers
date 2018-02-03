/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPDFSearchOperation : NSOperation {
    bool  _complete;
    unsigned long long  _currentPageResultCount;
    unsigned long long  _numberOfResultsToSkip;
    unsigned long long  _pageIndex;
    NSMutableArray * _results;
    unsigned long long  _totalResultsCount;
    double  documentScale;
    UIPDFDocument * documentToSearch;
    unsigned long long  resultLimit;
    NSObject<UIWebPDFSearchOperationDelegate> * searchDelegate;
    NSString * searchString;
    unsigned long long  startingPageIndex;
}

@property (nonatomic, readonly) unsigned long long currentPageIndex;
@property (nonatomic, readonly) unsigned long long currentPageResultCount;
@property (nonatomic) double documentScale;
@property (retain) UIPDFDocument *documentToSearch;
@property (nonatomic) unsigned long long numberOfResultsToSkip;
@property (nonatomic) unsigned long long resultLimit;
@property NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) unsigned long long startingPageIndex;

- (struct __CTFont { }*)_fontWithPDFFont:(struct CGPDFFont { }*)arg1 size:(double)arg2;
- (bool)_hitSearchLimit;
- (void)_notifyDelegateOfStatus;
- (void)_search;
- (void)cancel;
- (unsigned long long)currentPageIndex;
- (unsigned long long)currentPageResultCount;
- (void)dealloc;
- (double)documentScale;
- (id)documentToSearch;
- (id)init;
- (void)main;
- (unsigned long long)numberOfResultsToSkip;
- (unsigned long long)resultLimit;
- (id)sanitizedAttributedStringForAttributedString:(id)arg1;
- (id)searchDelegate;
- (id)searchString;
- (void)setDocumentScale:(double)arg1;
- (void)setDocumentToSearch:(id)arg1;
- (void)setNumberOfResultsToSkip:(unsigned long long)arg1;
- (void)setResultLimit:(unsigned long long)arg1;
- (void)setSearchDelegate:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setStartingPageIndex:(unsigned long long)arg1;
- (unsigned long long)startingPageIndex;

@end

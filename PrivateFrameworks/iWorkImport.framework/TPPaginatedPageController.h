/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPaginatedPageController : TPPageController {
    TPTextWrapController * _wrapController;
}

- (void).cxx_destruct;
- (unsigned long long)calculatePageIndexFromCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })canvasSizeToFitAllPages;
- (void)d_toggleWrapAnimation;
- (void)dealloc;
- (void)i_rebuildCachedLayoutChildrenFromStartPage:(unsigned long long)arg1 toEndPage:(unsigned long long)arg2 setNeedsLayout:(bool)arg3;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isPaginated;
- (unsigned long long)p_backupPageIndexForCharIndex:(unsigned long long)arg1;
- (bool)p_couldBeFirstPageIndex:(unsigned long long)arg1 forPartitionedAttachmentCharIndex:(unsigned long long)arg2;
- (Class)p_pageInfoClass;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_pageRangeAffectedByInfo:(id)arg1;
- (void)p_performWithCachedPageLayouts:(id /* block */)arg1;
- (void)p_rebuildPageLayoutsContainingDrawableUUIDs:(id)arg1;
- (unsigned long long)pageIndexFromCanvasPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })pageOriginForPageIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageRectForPageIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })pageSize;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)processHeaderFooterPropertyChanged;
- (void)teardown;
- (id)textWrapper;

@end

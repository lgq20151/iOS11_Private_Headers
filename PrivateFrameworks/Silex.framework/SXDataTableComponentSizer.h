/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableComponentSizer : SXComponentSizer <SXDataTableComponentControllerDataSource> {
    double  _currentWidth;
    SXDataTableComponentController * _dataTableComponentController;
    SXDataTableLayouter * _layouter;
}

@property (nonatomic) double currentWidth;
@property (nonatomic, retain) SXDataTableComponentController *dataTableComponentController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXDataTableLayouter *layouter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)componentForDataTableComponentController:(id)arg1;
- (id)contentSizeCategoryForDataTableComponentController:(id)arg1;
- (double)currentWidth;
- (id)dataTableComponentController;
- (id)documentColumnLayoutForDataTableComponentController:(id)arg1;
- (id)documentControllerForDataTableComponentController:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 context:(id)arg4 layoutAttributes:(id)arg5;
- (id)layouter;
- (void)setCurrentWidth:(double)arg1;
- (void)setDataTableComponentController:(id)arg1;
- (void)setLayouter:(id)arg1;
- (id)tableStyleForComponent:(id)arg1 documentController:(id)arg2;
- (id)textComponentLayoutHostingForDataTableComponentController:(id)arg1;
- (double)widthForDataTableComponentController:(id)arg1;

@end
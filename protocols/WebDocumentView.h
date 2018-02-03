/* made by EzioChiu.
 */

@protocol WebDocumentView <NSObject>

@required

- (void)dataSourceUpdated:(WebDataSource *)arg1;
- (void)layout;
- (void)setDataSource:(WebDataSource *)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(WAKWindow *)arg1;

@end

/* made by EzioChiu.
 */

@protocol NUViewControllerEndOfArticleProviding <SXDocumentSectionItemProvider>

@required

- (<NUViewControllerEndOfArticleProvidingDelegate> *)delegate;
- (bool)isVisible;
- (void)setDelegate:(id <NUViewControllerEndOfArticleProvidingDelegate>)arg1;
- (void)setIsVisible:(bool)arg1;

@end

/* made by EzioChiu.
 */

@protocol NUArticleDataProvider <NSObject>

@required

- (NSString *)articleID;
- (void)loadContextWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SXContext *, NSError *, void*

@end
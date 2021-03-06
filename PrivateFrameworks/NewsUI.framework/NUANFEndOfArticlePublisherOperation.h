/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticlePublisherOperation : FCOperation {
    FCArticle * _article;
    id /* block */  _completion;
    NUANFEndOfArticlePublisherOperationResult * _result;
    double  _scale;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NUANFEndOfArticlePublisherOperationResult *result;
@property (nonatomic, readonly) double scale;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })adjustSizeForNameImage:(id)arg1;
- (id)article;
- (id /* block */)completion;
- (id)initWithArticle:(id)arg1 scale:(double)arg2;
- (id)loadAndScaleImageFromFilePath:(id)arg1;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (id)result;
- (double)scale;
- (void)setCompletion:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (bool)validateOperation;

@end

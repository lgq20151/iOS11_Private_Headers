/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleDataProviderFactory : NSObject <NUEndOfArticleDataProviderFactory> {
    FCCloudContext * _cloudContext;
    <NUEmailSubscribeViewControllerFactory> * _emailSubscribeViewControllerFactory;
}

@property (nonatomic, readonly) FCCloudContext *cloudContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUEmailSubscribeViewControllerFactory> *emailSubscribeViewControllerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cloudContext;
- (id)createEndOfArticleDataProviderWithArticle:(id)arg1;
- (id)emailSubscribeViewControllerFactory;
- (id)initWithCloudContext:(id)arg1 emailSubscribeViewControllerFactory:(id)arg2;

@end

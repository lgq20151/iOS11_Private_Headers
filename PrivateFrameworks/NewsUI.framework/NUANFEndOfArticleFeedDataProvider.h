/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleFeedDataProvider : NSObject <NUFeedDataProvider, NUFeedTriggerProvider> {
    NUFeedBlueprint * _blueprint;
    NUANFEndOfArticleFeedCollectionViewLayout * _feedLayout;
    <NUFeedHeadlineCollectionViewCellRenderer> * _headlineRenderer;
    NUEndOfArticleSettings * _settings;
}

@property (nonatomic, readonly) NUFeedBlueprint *blueprint;
@property (nonatomic, readonly) UICollectionViewLayout *collectionViewLayout;
@property (nonatomic, readonly) unsigned long long contentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUANFEndOfArticleFeedCollectionViewLayout *feedLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUFeedHeadlineCollectionViewCellRenderer> *headlineRenderer;
@property (nonatomic, copy) NUEndOfArticleSettings *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blueprint;
- (id)buildBlueprintForHeadlings:(id)arg1;
- (id)collectionViewLayout;
- (unsigned long long)contentHeight;
- (id)feedLayout;
- (id)feedTriggerInitialLoadForFeedSettings:(id)arg1;
- (id)feedTriggerResetForFeedSettings:(id)arg1;
- (id)headlineRenderer;
- (id)initWithHeadlines:(id)arg1 settings:(id)arg2;
- (void)setSettings:(id)arg1;
- (id)settings;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQueryPredictions : NSObject <SFFeedbackListener, SGQPAssetUpdateDelegate, SGQPSearchToShareInternalToolServerProtocol, SGQPSearchToShareServerProtocol> {
    SGQPAssetManager * _assetManager;
    unsigned long long  _currentAssetVersion;
    SGQPMetricsTracker * _metricsTracker;
    SGQPLanguageContext * _noLanguageContext;
    <PMLTrainingProtocol> * _pmlTraining;
    SGQPLanguageContext * _primaryLanguageContext;
    SGQPSessionTracker * _sessionTracker;
    SGQPSqlStore * _store;
}

@property unsigned long long currentAssetVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SGQPMetricsTracker *metricsTracker;
@property (retain) SGQPLanguageContext *noLanguageContext;
@property (retain) SGQPLanguageContext *primaryLanguageContext;
@property (retain) SGQPSessionTracker *sessionTracker;
@property (readonly) Class superclass;

+ (id)sharedInstanceWithDirectory:(id)arg1;
+ (id)sharedInstanceWithDirectory:(id)arg1 errorHandler:(id)arg2;

- (void).cxx_destruct;
- (void)addMessageToConversation:(id)arg1 withContent:(id)arg2 isSent:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)assetInfoWithCompletion:(id /* block */)arg1;
- (unsigned long long)currentAssetVersion;
- (id)currentMetricsTrackerForTesting;
- (void)deleteMessagesForConversation:(id)arg1;
- (void)deleteMessagesWithUniqueIdentifiers:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEndSearch:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didEngageResult:(id)arg1;
- (void)didEngageResult:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didStartSearch:(id)arg1;
- (void)didStartSearch:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithAssetManagerAndStore:(id)arg1 training:(id)arg2;
- (id)initWithStore:(id)arg1 training:(id)arg2;
- (id)languageContextForMessages:(id)arg1;
- (id)metricsTracker;
- (id)noLanguageContext;
- (id)predictionsForConversation:(id)arg1 limit:(unsigned long long)arg2;
- (void)primaryAssetUpdated:(id)arg1;
- (id)primaryLanguageContext;
- (id)queryPredictionsFeedbackReportForConversation:(id)arg1;
- (void)queryPredictionsFeedbackReportForConversation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryPredictionsForConversation:(id)arg1 count:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)queryPredictionsForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2;
- (void)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidAppear:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)searchViewDidDisappear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendCustomFeedback:(id)arg1;
- (void)sendCustomFeedback:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)sessionTracker;
- (void)setCurrentAssetVersion:(unsigned long long)arg1;
- (void)setMetricsTracker:(id)arg1;
- (void)setNoLanguageContext:(id)arg1;
- (void)setPrimaryLanguageContext:(id)arg1;
- (void)setSessionTracker:(id)arg1;
- (void)storeMessageWithUid:(id)arg1 conversationId:(id)arg2 content:(id)arg3 createdAt:(id)arg4 senderIsAccountOwner:(bool)arg5;
- (void)trimMessages;

@end
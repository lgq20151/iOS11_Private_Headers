/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXFetchClientStateOperation : FPOperation {
    CSSearchableIndex * _index;
    NSString * _indexName;
}

+ (id)_currentIndexerVersion;

- (void).cxx_destruct;
- (bool)_clientStateResetNeeded;
- (void)_fetchClientState;
- (void)_handleFetchedClientState:(id)arg1 error:(id)arg2;
- (void)_markClientStateResetDone;
- (id)initWithIndex:(id)arg1 indexName:(id)arg2;
- (void)main;

@end

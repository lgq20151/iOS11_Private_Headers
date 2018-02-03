/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSTopHitSearchQuery : NSObject {
    id /* block */  _completionHandler;
    NSArray * _filterQueries;
    unsigned long long  _foundItemCount;
    id /* block */  _foundItemsHandler;
    CSSearchQuery * _query;
}

@property (nonatomic, copy) NSArray *bundleIDs;
@property (getter=isCancelled, readonly) bool cancelled;
@property (copy) id /* block */ completionHandler;
@property (copy) NSArray *filterQueries;
@property (readonly) unsigned long long foundItemCount;
@property (copy) id /* block */ foundItemsHandler;
@property (readonly) NSString *keyboardLanguage;
@property (copy) NSArray *protectionClasses;
@property (nonatomic, retain) CSSearchQuery *query;

+ (id)_makeUniqueFetchAttributesWithAttributes:(id)arg1;

- (void).cxx_destruct;
- (void)_handleBatches:(id)arg1;
- (id)bundleIDs;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)filterQueries;
- (unsigned long long)foundItemCount;
- (id /* block */)foundItemsHandler;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 hitCount:(unsigned long long)arg4;
- (bool)isCancelled;
- (id)keyboardLanguage;
- (id)protectionClasses;
- (id)query;
- (void)setBundleIDs:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setFilterQueries:(id)arg1;
- (void)setFoundItemsHandler:(id /* block */)arg1;
- (void)setProtectionClasses:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)start;
- (void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2;

@end

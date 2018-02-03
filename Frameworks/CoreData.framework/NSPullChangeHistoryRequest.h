/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPullChangeHistoryRequest : NSPersistentStoreRequest {
    NSArray * _generationTokens;
}

- (void)dealloc;
- (id)description;
- (id)generationTokens;
- (id)initWithGenerationTokens:(id)arg1;
- (unsigned long long)requestType;
- (void)setGenerationTokens:(id)arg1;

@end

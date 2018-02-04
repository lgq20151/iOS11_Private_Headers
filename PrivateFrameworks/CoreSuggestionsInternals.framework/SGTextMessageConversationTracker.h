/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTextMessageConversationTracker : NSObject {
    SGLRUCache * _conversations;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)addMessage:(id)arg1;
- (void)clear;
- (id)init;

@end
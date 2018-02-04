/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGServiceContext : NSObject {
    SGSqlEntityStore * _store;
}

@property (nonatomic, readonly) SGSqlEntityStore *store;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStore:(id)arg1;
- (id)store;

@end
/* made by EzioChiu
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface _SFSearchRequest : NSObject {
    NSDictionary * _headerFields;
    NSDictionary * _queryParameters;
    long long  _searchTypes;
}

@property (nonatomic, copy) NSDictionary *headerFields;
@property (nonatomic, copy) NSDictionary *queryParameters;
@property (nonatomic) long long searchTypes;

- (void).cxx_destruct;
- (id)headerFields;
- (id)queryParameters;
- (long long)searchTypes;
- (void)setHeaderFields:(id)arg1;
- (void)setQueryParameters:(id)arg1;
- (void)setSearchTypes:(long long)arg1;

@end
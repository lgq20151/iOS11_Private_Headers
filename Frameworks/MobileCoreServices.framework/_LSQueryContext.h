/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSQueryContext : NSObject {
    id  _resolver;
}

@property (readonly) <_LSQueryResolving> *_resolver;

+ (id)defaultContext;
+ (void)setSimulateLimitedMappingForXCTests:(bool)arg1;
+ (bool)simulateLimitedMappingForXCTests;

- (id)_init;
- (id)_resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 XPCConnection:(id)arg3 error:(id*)arg4;
- (id)_resolver;
- (void)clearCaches;
- (void)dealloc;
- (id)debugDescription;
- (void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (id)resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 error:(id*)arg3;

@end

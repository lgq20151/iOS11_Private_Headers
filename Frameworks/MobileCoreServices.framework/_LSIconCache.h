/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSIconCache : NSObject {
    NSString * _cacheKeySalt;
    NSURL * _cacheURL;
    bool  _initialized;
}

@property (copy) NSString *cacheKeySalt;
@property (retain) NSURL *cacheURL;
@property (readonly) bool initialized;

+ (id)UUIDStringForString:(id)arg1;
+ (id)cacheContainerURL;
+ (id)cacheFolderURL;
+ (long long)currentDisplayGamut;
+ (id)iconCacheSystemVersionFileURL;

- (void).cxx_destruct;
- (id)bundleCacheKeyForBundleIdentifier:(id)arg1 cacheKey:(id)arg2 variant:(int)arg3 options:(int)arg4;
- (id)bundleCacheKeyPrefixForBundleIdentifier:(id)arg1;
- (id)cacheKeySalt;
- (id)cacheURL;
- (id)iconDataForKey:(id)arg1 generatorBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithCacheURL:(id)arg1 salt:(id)arg2;
- (bool)initialized;
- (void)setCacheKeySalt:(id)arg1;
- (void)setCacheURL:(id)arg1;

@end

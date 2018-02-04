/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataCacheRegister : NSObject {
    NSMutableDictionary * _caches;
    NSMutableDictionary * _freeable;
    bool  _hasLoadedAllCaches;
}

+ (id)diskCachePath;
+ (void)setDiskCachePath:(id)arg1;

- (void).cxx_destruct;
- (id)_allExistingProviderIDs;
- (id)_cacheKeysPerSize;
- (void)_loadAllCachesIfNecessary;
- (id)allCacheEntries;
- (id)allCaches;
- (id)cacheForProviderID:(int)arg1;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg1;
- (void)deletePhoneNumberMapping;
- (void)evictAllEntries;
- (id)init;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(id /* block */)arg2;

@end
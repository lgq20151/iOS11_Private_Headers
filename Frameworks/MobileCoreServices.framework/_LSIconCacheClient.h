/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSIconCacheClient : _LSIconCache {
    unsigned long long  _sandboxExtensionHandle;
}

@property unsigned long long sandboxExtensionHandle;

+ (id)sharedInstance;

- (void)_fetchCacheURLAndSalt;
- (id)connection;
- (id)getAlternateIconNameForIdentifier:(id)arg1;
- (id)iconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 cacheKey:(id)arg6 variant:(int)arg7 options:(int)arg8;
- (id)init;
- (void)invalidateCacheEntriesForBundleIdentifier:(id)arg1 clearAlternateName:(bool)arg2 validationDictionary:(id)arg3;
- (unsigned long long)sandboxExtensionHandle;
- (void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 withResult:(id /* block */)arg4;
- (void)setSandboxExtensionHandle:(unsigned long long)arg1;

@end

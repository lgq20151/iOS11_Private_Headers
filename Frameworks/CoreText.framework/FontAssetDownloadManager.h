/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface FontAssetDownloadManager : NSObject {
    NSMutableDictionary * fAssetToDescriptors;
    struct TCFRef<const __CFArray *> { 
        struct TAtomicPtr<const __CFArray *> { 
            /* Warning: Unrecognized filer type: '^' using 'void*' */ void*__a_; 
        } fRef; 
    }  fDescriptors;
    NSMutableDictionary * fDownloadOptions;
    struct TCFRef<const __CFSet *> { 
        struct TAtomicPtr<const __CFSet *> { 
            /* Warning: Unrecognized filer type: '^' using 'void*' */ void*__a_; 
        } fRef; 
    }  fMandatoryAttributes;
    id /* block */  fProgressCallbackBlock;
    NSMutableDictionary * fProgressParams;
}

+ (bool)activateFontsFromAssetURL:(id)arg1;
+ (id)attributesFromFontInfo:(id)arg1 assetDesignLanguages:(id)arg2;
+ (id)availableFontAttributesArrayMatchingRequests:(id)arg1 options:(unsigned long long)arg2;
+ (id)availableMobileAssetsWithOptions:(unsigned int)arg1 error:(id*)arg2;
+ (id)availableMobileAssetsWithOptions:(unsigned int)arg1 manager:(id)arg2 error:(id*)arg3;
+ (unsigned long long)calculateDownloadSize:(id)arg1;
+ (unsigned int)defaultQueryOptions;
+ (id)enabledKeyboardLanguages;
+ (bool)fontInfo:(id)arg1 andAssetDesignLanguages:(id)arg2 matchesRequest:(id)arg3;
+ (Class)getASAssetQueryClass;
+ (bool)shouldIgnoreFontAssetWithAttributes:(id)arg1;
+ (bool)shouldRetryWithServer;
+ (bool)shouldTryServer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)assetStalled:(id)arg1;
- (bool)callProgressCallback:(unsigned int)arg1;
- (void)dealloc;
- (id)doFinalMatching;
- (bool)downloadAllowed;
- (void)downloadFontAssets;
- (bool)executeDownloadingFontAssets:(id)arg1;
- (id)initWithDescriptors:(struct __CFArray { }*)arg1 andMandatoryAttributes:(struct __CFSet { }*)arg2 withBlock:(id /* block */)arg3;
- (id)mobileAssetsForUnmatched:(id)arg1;
- (id)preciousFontLanguages;
- (void)setDownloadOptionsForMobileAsset;
- (void)setGarbageCollectionBehaviorForAsset:(id)arg1;
- (void)setProgressParam:(id)arg1 forKey:(id)arg2;
- (id)unmatchedDescriptors;

@end

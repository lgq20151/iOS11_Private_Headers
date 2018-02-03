/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAAsset : NSObject {
    NSString * _assetId;
    NSString * _assetType;
    NSDictionary * _attributes;
    long long  _state;
}

@property (nonatomic, readonly) NSString *assetId;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) long long state;

+ (void)startCatalogDownload:(id)arg1 then:(id /* block */)arg2;

- (id)assetId;
- (id)assetProperty:(id)arg1;
- (id)assetType;
- (void)attachProgressCallBack:(id /* block */)arg1;
- (id)attributes;
- (void)cancelDownload:(id /* block */)arg1;
- (void)commonAssetDownload:(id)arg1 then:(id /* block */)arg2;
- (id)createExtractor;
- (void)dealloc;
- (id)getLocalFileUrl;
- (id)getLocalUrl;
- (id)hashToString:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (void)logAsset;
- (void)purge:(id /* block */)arg1;
- (bool)refreshState;
- (void)startDownload:(id /* block */)arg1;
- (void)startDownloadWithExtractor:(id /* block */)arg1 completion:(id /* block */)arg2;
- (long long)state;

@end

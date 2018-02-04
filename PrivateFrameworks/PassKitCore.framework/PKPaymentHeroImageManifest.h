/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentHeroImageManifest : NSObject {
    NSDictionary * _manifest;
    NSString * _preferredLanguage;
    PKPaymentWebService * _webService;
}

+ (id)_manifestFileNameForRegion:(id)arg1;
+ (bool)manifestFileExistsForRegion:(id)arg1;
+ (void)removeManifestFileForRegion:(id)arg1;

- (void).cxx_destruct;
- (bool)_deviceMeetsRequirementsForNetwork:(id)arg1;
- (void)_downloadManifestWithCompletion:(id /* block */)arg1;
- (id)_fileNameForNetworkImageOnDisk:(id)arg1;
- (id)_readManifestDataFromDevice;
- (void)_saveManifestDataToDevice:(id)arg1;
- (bool)containsPaymentCredentialType:(long long)arg1;
- (id)description;
- (void)downloadRemoteManifestWithCompletion:(id /* block */)arg1;
- (id)imageDataOnDiskForNetwork:(id)arg1;
- (id)imageInfoForNetwork:(id)arg1;
- (id)imageURLsForFeaturedNetworks:(id)arg1;
- (id)initWithWebService:(id)arg1;
- (id)initWithWebService:(id)arg1 preferredLanguage:(id)arg2;
- (id)parseData:(id)arg1;
- (id)primaryFeaturedNetwork;
- (id)requirementsForNetwork:(id)arg1;
- (void)setManifestWithData:(id)arg1;
- (id)sha1ForNetwork:(id)arg1;
- (id)urlForNetwork:(id)arg1;

@end
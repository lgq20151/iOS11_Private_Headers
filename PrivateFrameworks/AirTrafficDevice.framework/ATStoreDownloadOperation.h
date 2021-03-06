/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATStoreDownloadOperation : ICRequestOperation {
    ATAsset * _asset;
    bool  _cancelAllRemaining;
    NSString * _downloadFilePath;
    long long  _downloadState;
}

@property (nonatomic, retain) ATAsset *asset;
@property (nonatomic) bool cancelAllRemaining;
@property (nonatomic, retain) NSString *downloadFilePath;
@property (nonatomic) long long downloadState;

- (void).cxx_destruct;
- (id)_ATErrorFromError:(id)arg1;
- (id)asset;
- (bool)cancelAllRemaining;
- (id)description;
- (id)downloadFilePath;
- (long long)downloadState;
- (void)finishWithError:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (void)performDownloadOnOperationsQueue:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setAsset:(id)arg1;
- (void)setCancelAllRemaining:(bool)arg1;
- (void)setDownloadFilePath:(id)arg1;
- (void)setDownloadState:(long long)arg1;

@end

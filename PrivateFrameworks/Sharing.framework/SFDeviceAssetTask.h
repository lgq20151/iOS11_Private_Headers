/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceAssetTask : NSObject {
    NSBundle * _assetBundle;
    id /* block */  _completionHandler;
    SFDeviceAssetQuery * _deviceAssetQuery;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSError * _error;
    NSBundle * _fallbackAssetBundle;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) NSBundle *assetBundle;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) SFDeviceAssetQuery *deviceAssetQuery;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSBundle *fallbackAssetBundle;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (id)assetBundle;
- (id)bundleAtURL:(id)arg1 error:(id*)arg2;
- (id)bundleFromAsset:(id)arg1;
- (void)cancelTimeout;
- (void)complete;
- (id /* block */)completionHandler;
- (id)deviceAssetQuery;
- (id)dispatchQueue;
- (id)error;
- (id)fallbackAssetBundle;
- (id)initWithDeviceQuery:(id)arg1 dispatchQueue:(id)arg2 timeout:(double)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)timer;
- (bool)updateTaskWithAsset:(id)arg1 error:(id)arg2 isFallback:(bool)arg3;

@end

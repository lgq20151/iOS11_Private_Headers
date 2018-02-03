/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoaderURLSessionDataDelegate : NSObject <NSURLSessionDataDelegate> {
    AVWeakReference * _weakReferenceToAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (void)invokeFigAssetDelegateWithBlock:(id /* block */)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end

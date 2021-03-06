/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNetworkSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    struct RefPtr<WebKit::NetworkSessionCocoa> { 
        struct NetworkSessionCocoa {} *m_ptr; 
    }  _session;
    bool  _withCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (struct NetworkDataTaskCocoa { int (**x1)(); unsigned int x2; int x3; struct Timer { int (**x_4_1_1)(); struct MonotonicTime { double x_2_2_1; } x_4_1_2; struct MonotonicTime { double x_3_2_1; } x_4_1_3; struct Seconds { double x_4_2_1; } x_4_1_4; int x_4_1_5; unsigned int x_4_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16> {} *x_4_1_7; struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {} x_4_1_8; } x4; }*)existingTask:(id)arg1;
- (id)initWithNetworkSession:(struct NetworkSessionCocoa { int (**x1)(); unsigned int x2; struct SessionID { unsigned long long x_3_1_1; } x3; struct HashSet<WebKit::NetworkDataTask *, WTF::PtrHash<WebKit::NetworkDataTask *>, WTF::HashTraits<WebKit::NetworkDataTask *> > { struct HashTable<WebKit::NetworkDataTask *, WebKit::NetworkDataTask *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::NetworkDataTask *>, WTF::HashTraits<WebKit::NetworkDataTask *>, WTF::HashTraits<WebKit::NetworkDataTask *> > { struct NetworkDataTask {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_4_1_1; } x4; struct HashMap<unsigned long long, WebKit::NetworkDataTaskCocoa *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebKit::NetworkDataTaskCocoa *> > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebKit::NetworkDataTaskCocoa *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebKit::NetworkDataTaskCocoa *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WebKit::NetworkDataTaskCocoa *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebKit::NetworkDataTaskCocoa *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WebKit::NetworkDataTaskCocoa *> {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_5_1_1; } x5; }*)arg1 withCredentials:(bool)arg2;
- (void)sessionInvalidated;

@end

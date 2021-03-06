/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHOperationQueue : NSObject {
    NSMutableArray * mActiveOperations;
    NSMutableDictionary * mDefaultAuthenticationMethods;
    NSString * mDefaultUserAgent;
    NSMutableArray * mOperationQueue;
    TSHRequestQueue * mRequestQueue;
}

- (void)addOperation:(id)arg1;
- (void)appendUserAgentFragment:(id)arg1;
- (void)cancel;
- (void)cancelOperation:(id)arg1;
- (void)dealloc;
- (id)defaultAuthenicationMethodForScheme:(id)arg1;
- (id)defaultUserAgent;
- (id)dependantsOf:(id)arg1;
- (void)dequeueDependantsOf:(id)arg1;
- (void)doWork;
- (id)init;
- (bool)isBlocked:(id)arg1;
- (bool)isInactive;
- (unsigned long long)maxConcurrentRequestCount;
- (id)nextUnblockedOperation;
- (void)operation:(id)arg1 connection:(id)arg2 didFailWithError:(id)arg3;
- (void)operationDidFinish:(id)arg1;
- (id)requestQueue;
- (void)setDefaultAuthenticationMethod:(id)arg1 forScheme:(id)arg2;
- (void)setDefaultUserAgent:(id)arg1;
- (void)setMaxConcurrentRequestCount:(unsigned long long)arg1;

@end

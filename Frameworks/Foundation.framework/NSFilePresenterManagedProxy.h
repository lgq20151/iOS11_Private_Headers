/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterManagedProxy : NSObject <NSXPCProxyCreating> {
    id /* block */  _errorHandler;
    unsigned long long  _filePresenterResponses;
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> * _nonboostingXPCProxy;
    NSFileAccessProcessManager * _processManager;
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> * _xpcProxy;
}

@property (copy) id /* block */ errorHandler;
@property unsigned long long filePresenterResponses;
@property (retain) NSFileAccessProcessManager *processManager;

- (bool)_presenterRespondsToSelector:(SEL)arg1;
- (void)_safelySendMessageWithSelector:(SEL)arg1 withErrorCompletionHandler:(id /* block */)arg2 sender:(id /* block */)arg3;
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id /* block */)errorHandler;
- (unsigned long long)filePresenterResponses;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCProxy:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)processManager;
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)saveChangesWithCompletionHandler:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFilePresenterResponses:(unsigned long long)arg1;
- (void)setProcessManager:(id)arg1;

@end

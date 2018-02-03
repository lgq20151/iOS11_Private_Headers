/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {
    id /* block */  _afterDidReportProgressOnQueue;
    bool  _canWrite;
    id /* block */  _dataAckCompletion;
    bool  _didIssueNeedFinish;
    __NSCFLocalDownloadFile * _downloadFile;
    id /* block */  _fileCompletion;
    long long  _initialResumeSize;
    unsigned long long  _ioSuspend;
    bool  _needFinish;
    NSDictionary * _originalResumeInfo;
    id /* block */  _resumeCallback;
    int  _seqNo;
    bool  _suppressProgress;
    unsigned long long  _totalWrote;
    unsigned long long  _transientWriteProgress;
    NSObject<OS_dispatch_data> * _writeBuffer;
}

@property (copy) id /* block */ _afterDidReportProgressOnQueue;
@property (copy) id /* block */ dataAckCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) __NSCFLocalDownloadFile *downloadFile;
@property (copy) id /* block */ fileCompletion;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ resumeCallback;
@property (readonly) Class superclass;

+ (id)_expandResumeData:(id)arg1;
+ (id)_requestFromResumeDataDictionary:(id)arg1;
+ (id)_requestFromResumeDataDictionary:(id)arg1 key:(id)arg2;

- (id /* block */)_afterDidReportProgressOnQueue;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (void)_onqueue_cancelByProducingResumeData:(id /* block */)arg1;
- (void)_onqueue_completeInitialization;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_private_errorCompletion;
- (void)_private_fileCompletion;
- (void)_private_posixError:(int)arg1;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelByProducingResumeData:(id /* block */)arg1;
- (void)checkWrite;
- (id)createResumeInformation:(id)arg1;
- (id /* block */)dataAckCompletion;
- (void)dealloc;
- (id)downloadFile;
- (id)explicitDownloadDirectory;
- (id /* block */)fileCompletion;
- (id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithTask:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)reportProgress:(unsigned long long)arg1;
- (id /* block */)resumeCallback;
- (void)setDataAckCompletion:(id /* block */)arg1;
- (void)setDownloadFile:(id)arg1;
- (void)setFileCompletion:(id /* block */)arg1;
- (void)setResumeCallback:(id /* block */)arg1;
- (void)set_afterDidReportProgressOnQueue:(id /* block */)arg1;
- (bool)setupForNewDownload:(id)arg1;
- (void)suspendExtractor;
- (void)terminateExtractorWithError:(id)arg1;
- (void)writeAndResume;

@end

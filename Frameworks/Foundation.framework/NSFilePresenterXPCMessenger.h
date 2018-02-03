/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterXPCMessenger : NSObject <NSFilePresenterXPCInterface> {
    <NSFilePresenter> * _filePresenter;
    NSFilePresenterProxy * _filePresenterProxy;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(id /* block */)arg2;
- (void)_makePresenter:(id)arg1 observeChangeOfUbiquityAttributes:(id)arg2;
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;
- (void)_makePresenter:(id)arg1 observeSharingChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 purposeID:(id)arg3 ifNecessaryUsingSelector:(SEL)arg4 recordingRelinquishment:(id)arg5 continuer:(id /* block */)arg6;
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 purposeID:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_makePresenter:(id)arg1 reportUnsavedChangesWithCompletionHandler:(id /* block */)arg2;
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(id /* block */)arg2;
- (void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2;
- (void)_makePresenter:(id)arg1 setProviderPurposeIdentifier:(id)arg2;
- (void)_makePresenter:(id)arg1 validateRelinquishmentToSubitemAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_makePresenter:(id)arg1 validateRemoteDeletionRecordingRelinquishment:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_makePresenterObserveDisconnection:(id)arg1;
- (void)_makePresenterObserveReconnection:(id)arg1;
- (id)_readRelinquishment;
- (id)_writeRelinquishment;
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithFilePresenter:(id)arg1 queue:(id)arg2;
- (id)initWithFilePresenterProxy:(id)arg1;
- (void)invalidate;
- (oneway void)logSuspensionWarning;
- (oneway void)observeChangeOfUbiquityAttributes:(id)arg1;
- (oneway void)observeChangeWithSubitemURL:(id)arg1;
- (oneway void)observeDisconnection;
- (oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (oneway void)observePresenterChange:(bool)arg1 forSubitemAtURL:(id)arg2;
- (oneway void)observeReconnection;
- (oneway void)observeSharingChangeWithSubitemURL:(id)arg1;
- (oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1;
- (oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4;
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)saveChangesWithCompletionHandler:(id /* block */)arg1;
- (oneway void)setProviderPurposeIdentifier:(id)arg1;
- (oneway void)updateLastEventID:(unsigned long long)arg1;

@end

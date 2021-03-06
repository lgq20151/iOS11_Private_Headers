/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLClientTransaction : PLClientServerTransaction {
    long long  _addChangeScopesBatch;
    NSSet * _batchScopes;
    NSSet * _changeScopes;
    NSString * _changeScopesDescriptionSnapshot;
    NSObject<OS_dispatch_semaphore> * _fdResourceSemaphore;
    int  _fileDescriptor;
    NSString * _path;
    id  _processAssertion;
}

@property (copy) NSString *changeScopesDescriptionSnapshot;
@property (nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore;
@property (nonatomic) int fileDescriptor;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) id processAssertion;

+ (id)_fdIsolationQueue;
+ (id)_fdResourceSemaphore;

- (void)_updateChangeScopesDescriptionSnapshot;
- (void)abortTransaction;
- (void)addChangeScopes:(id)arg1;
- (id)changeScopes;
- (id)changeScopesDescriptionSnapshot;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)fdResourceSemaphore;
- (int)fileDescriptor;
- (id)generateChangeScopesDescription;
- (id)init;
- (bool)isClientTransaction;
- (id)path;
- (void)persistTransactionScopes:(id)arg1;
- (void)popChangeScopesBatch;
- (id)processAssertion;
- (void)pushChangeScopesBatch;
- (void)setChangeScopesDescriptionSnapshot:(id)arg1;
- (void)setFdResourceSemaphore:(id)arg1;
- (void)setFileDescriptor:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setProcessAssertion:(id)arg1;

@end

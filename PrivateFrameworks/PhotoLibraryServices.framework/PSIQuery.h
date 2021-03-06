/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIQuery : NSObject {
    bool  _didStart;
    id /* block */  _earlyNotificationHandler;
    PSIDatabase * _idx;
    bool  _isCanceled;
    bool  _isWildcardQuery;
    int  _queryId;
    NSString * _searchText;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (getter=isCanceled, readonly) bool canceled;
@property (nonatomic, readonly) bool isWildcardQuery;
@property (nonatomic, readonly) int queryId;
@property (nonatomic, readonly, copy) NSString *searchText;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithQueryId:(int)arg1 index:(id)arg2 searchText:(id)arg3 isWildcardQuery:(bool)arg4;
- (bool)isCanceled;
- (bool)isWildcardQuery;
- (int)queryId;
- (void)runWithResultsHandler:(id /* block */)arg1;
- (id)searchText;
- (void)setEarlyResultsNotificationHandler:(id /* block */)arg1;

@end

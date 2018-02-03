/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface MDSearchQuery : NSObject {
    NSString * _clientBundleID;
    <MDSearchQueryDelegate> * _delegate;
    NSPredicate * _predicate;
    CSSearchQuery * _query;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _status;
}

@property (retain) NSString *clientBundleID;
@property <MDSearchQueryDelegate> *delegate;
@property (readonly, copy) NSDictionary *options;
@property (copy) NSPredicate *predicate;
@property (nonatomic, retain) CSSearchQuery *query;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long status;

- (void).cxx_destruct;
- (void)_didFinishWithError:(id)arg1;
- (void)_didReturnItems:(id)arg1;
- (void)cancel;
- (id)clientBundleID;
- (id)delegate;
- (id)initWithPredicate:(id)arg1 options:(id)arg2;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (id)options;
- (id)predicate;
- (id)query;
- (id)queryString;
- (id)queue;
- (void)setClientBundleID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)start;
- (unsigned long long)status;

@end

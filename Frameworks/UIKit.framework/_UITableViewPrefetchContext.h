/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewPrefetchContext : NSObject {
    id /* block */  _cancelHandler;
    long long  _cancelThresholdCount;
    double  _lastContentOffset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lastVisibleIndexRange;
    long long  _maxIndex;
    NSMutableIndexSet * _outstandingRequests;
    long long  _prefetchItemCount;
    long long  _refreshPrefetchThresholdCount;
    id /* block */  _requestHandler;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic) long long cancelThresholdCount;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastVisibleIndexRange;
@property (nonatomic) long long maxIndex;
@property (nonatomic, retain) NSMutableIndexSet *outstandingRequests;
@property (nonatomic) long long prefetchItemCount;
@property (nonatomic) long long refreshPrefetchThresholdCount;
@property (nonatomic, copy) id /* block */ requestHandler;

- (void).cxx_destruct;
- (int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withContentOffset:(double)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_offsetAndValidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 firstIndexOffset:(long long)arg2 lastIndexOffset:(long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_validatedRangeWithLocation:(long long)arg1 length:(long long)arg2;
- (void)cancel;
- (id /* block */)cancelHandler;
- (long long)cancelThresholdCount;
- (void)cancelWithNewMaxIndex:(long long)arg1;
- (id)computedPrefetchIndexSet;
- (id)description;
- (id)initWithMaxIndex:(long long)arg1 prefetchItemCount:(long long)arg2 refreshPrefetchThresholdCount:(long long)arg3 cancelThresholdCount:(long long)arg4;
- (double)lastContentOffset;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastVisibleIndexRange;
- (long long)maxIndex;
- (id)outstandingRequests;
- (long long)prefetchItemCount;
- (long long)refreshPrefetchThresholdCount;
- (id /* block */)requestHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setCancelThresholdCount:(long long)arg1;
- (void)setLastContentOffset:(double)arg1;
- (void)setLastVisibleIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMaxIndex:(long long)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setPrefetchItemCount:(long long)arg1;
- (void)setRefreshPrefetchThresholdCount:(long long)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (void)updateVisibleIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withContentOffset:(double)arg2;

@end

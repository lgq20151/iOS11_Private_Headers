/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKExpiringCompletionTimer : NSObject {
    id /* block */  _completion;
    double  _expirationTime;
    bool  _invalidated;
    NSDate * _startDate;
    double  _timeout;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_invalidateAndInvokeCompletion:(bool)arg1 error:(id)arg2;
- (void)_start;
- (void)dealloc;
- (id)initWithCompletion:(id /* block */)arg1;
- (void)invalidate;
- (void)invalidateAndInvokeCompletionWithError:(id)arg1;
- (bool)isExpired;
- (void)restart;
- (id)startDate;
- (void)startWithTimeoutInterval:(double)arg1 handler:(id /* block */)arg2;

@end

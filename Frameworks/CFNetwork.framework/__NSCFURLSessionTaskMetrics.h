/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskMetrics : NSURLSessionTaskMetrics <NSSecureCoding> {
    unsigned long long  _redirectCount;
    NSDateInterval * _taskInterval;
    NSArray * _transactionMetrics;
}

+ (bool)supportsSecureCoding;

- (id)_initWithTask:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)redirectCount;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setTaskInterval:(id)arg1;
- (void)setTransactionMetrics:(id)arg1;
- (id)taskInterval;
- (id)transactionMetrics;

@end

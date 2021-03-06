/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTrafficLogger : NSObject {
    NSString * _requestID;
    long long  _sequenceNumber;
}

@property (nonatomic, retain) NSString *requestID;
@property (nonatomic) long long sequenceNumber;

- (void).cxx_destruct;
- (void)_logObject:(id)arg1 ofType:(unsigned long long)arg2;
- (void)finishRequestLog;
- (id)initWithRequestID:(id)arg1;
- (void)logPartialRequestObjectData:(id)arg1;
- (void)logPartialResponseObjectData:(id)arg1;
- (void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3;
- (void)logRequestBodyStreamReset;
- (void)logResponse:(id)arg1;
- (void)logResponseConfiguration:(unsigned long long)arg1 withMessageClassString:(id)arg2;
- (id)requestID;
- (long long)sequenceNumber;
- (void)setRequestID:(id)arg1;
- (void)setSequenceNumber:(long long)arg1;
- (bool)shouldLog;

@end

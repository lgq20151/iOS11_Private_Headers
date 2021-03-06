/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAsynchronousTask : NSObject {
    id /* block */  _handler;
    bool  _hasTimeout;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeout;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) bool hasTimeout;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id /* block */)handler;
- (bool)hasTimeout;
- (id)queue;
- (void)setHandler:(id /* block */)arg1;
- (void)setHasTimeout:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end

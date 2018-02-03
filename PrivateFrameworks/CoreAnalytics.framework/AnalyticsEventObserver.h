/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreAnalytics.framework/CoreAnalytics
 */

@interface AnalyticsEventObserver : NSObject {
    <AnalyticsEventObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    struct shared_ptr<(anonymous namespace)::EventObserverImpl>="__ptr_"^{EventObserverImpl {}  observer;
}

@property (nonatomic) <AnalyticsEventObserverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setEventObserverDelegate:(id)arg1 queue:(id)arg2;
- (void)setQueue:(id)arg1;
- (bool)startObservingEventList:(id)arg1;
- (bool)stopObserving;

@end

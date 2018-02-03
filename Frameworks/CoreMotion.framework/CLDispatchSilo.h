/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLDispatchSilo : CLSilo {
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)afterInterval:(double)arg1 async:(id /* block */)arg2;
- (void)assertInside;
- (void)assertOutside;
- (void)async:(id /* block */)arg1;
- (id)debugDescription;
- (id)initMain;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithUnderlyingQueue:(id)arg1;
- (id)newTimer;
- (id)operationQueue;
- (id)queue;
- (void)sync:(id /* block */)arg1;

@end

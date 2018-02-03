/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBackgroundTaskInfo : NSObject {
    int  _count;
    id /* block */  _expireHandler;
    BKSProcessAssertion * _processAssertion;
    unsigned long long  _taskId;
}

+ (id)backgroundTaskAssertionQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fireExpirationHandler;
- (id)initWithProcessAssertion:(id)arg1 expirationHandler:(id /* block */)arg2;
- (void)invalidate;

@end
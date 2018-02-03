/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSFileAccessAsynchronousProcessAssertionOperation : NSOperation {
    BKSProcessAssertion * _assertion;
    bool  _finishedBeforeExecuted;
    NSString * _name;
    int  _pid;
    int  _state;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

- (void)dealloc;
- (void)finish;
- (id)initWithPID:(int)arg1 name:(id)arg2;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;

@end
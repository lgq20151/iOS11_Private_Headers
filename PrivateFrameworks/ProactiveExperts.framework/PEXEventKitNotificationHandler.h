/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXEventKitNotificationHandler : PEXNotificationHandler {
    NSMutableSet * _events;
    struct atomic_flag { 
        bool _Value; 
    }  _hasWaiter;
    struct atomic_flag { 
        bool _Value; 
    }  _isFiring;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (void)_clearFlags;
- (void)_executeBlocksWithEvents:(id)arg1;
- (id)_popEvents;
- (void)_pushEvents:(id)arg1;
- (id)description;
- (void)fireWithEvents:(id)arg1;
- (id)initWithName:(id)arg1 waitTime:(unsigned int)arg2;

@end

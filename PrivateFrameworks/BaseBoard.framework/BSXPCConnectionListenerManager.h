/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCConnectionListenerManager : NSObject {
    NSObject<OS_dispatch_queue> * _defaultHandlerQueue;
    NSObject<OS_dispatch_queue> * _listeningQueue;
    NSMutableDictionary * _services;
    NSLock * _servicesLock;
}

+ (id)defaultHandlerQueue;
+ (void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
+ (id)sharedInstance;
+ (void)stopListeningForService:(id)arg1;

- (void)_addService:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3;
- (id)_defaultHandlerQueue;
- (id)_init;
- (void)_removeService:(id)arg1;
- (void)dealloc;
- (id)init;

@end

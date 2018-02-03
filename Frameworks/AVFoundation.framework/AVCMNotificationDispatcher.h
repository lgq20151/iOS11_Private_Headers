/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCMNotificationDispatcher : NSObject {
    AVCallbackContextRegistry * _callbackContextRegistry;
    struct opaqueCMNotificationCenter { } * _cmNotificationCenter;
    NSMutableDictionary * _listenerObjectsPassedToFig;
    NSObject<OS_dispatch_queue> * _listenerObjectsQueue;
}

@property (nonatomic, readonly) struct opaqueCMNotificationCenter { }*CMNotificationCenter;
@property (getter=_callbackContextRegistry, nonatomic, readonly) AVCallbackContextRegistry *callbackContextRegistry;

+ (void)initialize;
+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;

- (struct opaqueCMNotificationCenter { }*)CMNotificationCenter;
- (void)_addListenerAndCallback:(id)arg1 forWeakReferenceToListener:(id)arg2 callback:(int (*)arg3 name:(struct __CFString { }*)arg4 object:(const void*)arg5;
- (id)_callbackContextRegistry;
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg1 callback:(int (*)arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4;
- (void)addListenerWithWeakReference:(id)arg1 callback:(int (*)arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4 flags:(unsigned int)arg5;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;
- (void)removeListenerWithWeakReference:(id)arg1 callback:(int (*)arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4;

@end

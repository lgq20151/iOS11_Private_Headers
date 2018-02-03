/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationTokenRegistration : _CFXNotificationRegistrationBase {
    id /* block */  _handler;
    unsigned long long  _options;
    bool  _registered;
    unsigned long long  _token;
}

@property (readonly, copy) id /* block */ handler;
@property (readonly) struct __CFString { }*name;
@property (readonly) void*object;
@property (readonly) void*observer;
@property (readonly) unsigned long long options;
@property (retain) id queue;
@property (getter=isRegistered, readonly) bool registered;
@property (readonly) unsigned long long token;

+ (id)createTokenRegistration:(int)arg1 token:(unsigned long long)arg2 connection:(id)arg3 notifyToken:(int)arg4 options:(unsigned long long)arg5 queue:(id)arg6 handler:(id /* block */)arg7;
+ (id)find:(unsigned long long)arg1;
+ (const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); }*)keyCallbacks;
+ (void)remove:(unsigned long long)arg1;

- (void)_invalidate;
- (void)_removeFromParent;
- (void)addToObserver:(id)arg1;
- (id /* block */)copyHandler;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithToken:(unsigned long long)arg1 options:(unsigned long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)invalidate;
- (bool)isRegistered;
- (void*)key;
- (struct __CFString { }*)name;
- (void*)object;
- (void*)observer;
- (unsigned long long)options;
- (id)queue;
- (void)removeFromParent;
- (void)setQueue:(id)arg1;
- (unsigned long long)token;

@end

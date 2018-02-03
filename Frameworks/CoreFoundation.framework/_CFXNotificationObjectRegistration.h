/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationObjectRegistration : _CFXNotificationRegistrationContainer {
    void * _object;
}

@property (readonly) void*object;

+ (Class)childClass;
+ (const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); }*)stringKeyCallbacks;

- (id)acquireObserver:(void*)arg1 options:(unsigned long long)arg2;
- (bool)enumerate:(id /* block */)arg1;
- (void)find:(void*)arg1 matching:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg2;
- (id)initWithObject:(void*)arg1 parent:(id)arg2;
- (void*)key;
- (void)match:(void*)arg1 matching:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg2;
- (void*)object;

@end

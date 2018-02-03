/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationObjcObserverRegistration : _CFXNotificationObserverRegistration {
    id  _object;
    bool  _useFallback;
}

- (void)dealloc;
- (void)find:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg1;
- (id)initWithObserver:(void*)arg1 parent:(id)arg2;
- (void*)observer;
- (void)resetObserverAndChildren:(void*)arg1;
- (id)retainedObserver;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase {
    struct { 
        union { 
            struct __CFNull {} *empty; 
            _CFXNotificationRegistrationBase *child; 
            struct __CFDictionary {} *children; 
        } elements; 
        void *singleChildKey; 
        struct { /* ? */ } *callbacks; 
    }  _children;
}

+ (Class)childClass;

- (void)addChild:(id)arg1;
- (void)dealloc;
- (bool)enumerate:(id /* block */)arg1;
- (id)initWithParent:(id)arg1;
- (id)initWithParent:(id)arg1 childKeyCallbacks:(const struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); }*)arg2;
- (void)invalidate;
- (void)removeChild:(id)arg1;
- (void)resetChildren;

@end

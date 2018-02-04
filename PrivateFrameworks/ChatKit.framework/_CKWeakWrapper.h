/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface _CKWeakWrapper : NSProxy {
    Class  _targetClass;
    IMWeakReference * _weakReference;
}

@property (nonatomic, retain) Class targetClass;
@property (nonatomic, retain) IMWeakReference *weakReference;

- (void).cxx_destruct;
- (Class)class;
- (bool)conformsToProtocol:(id)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setTargetClass:(Class)arg1;
- (void)setWeakReference:(id)arg1;
- (Class)targetClass;
- (id)weakReference;

@end
/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet {
    struct objc_ivar { } * _ivar;
}

+ (struct { unsigned long long x1; /* Warning: unhandled array encoding: '[4@]}' */ id x2[4]; }*)_proxyNonGCPoolPointer;

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (unsigned long long)count;
- (void)intersectSet:(id)arg1;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end

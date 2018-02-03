/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConditionLock : NSObject <NSLocking> {
    void * _priv;
}

@property (readonly) long long condition;
@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (long long)condition;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCondition:(long long)arg1;
- (void)lock;
- (bool)lockBeforeDate:(id)arg1;
- (void)lockWhenCondition:(long long)arg1;
- (bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLock;
- (bool)tryLockWhenCondition:(long long)arg1;
- (void)unlock;
- (void)unlockWithCondition:(long long)arg1;

@end

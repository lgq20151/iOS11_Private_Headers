/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMTask : NSObject {
    NSString * _bundleID;
    bool  _isFinished;
    NSString * _name;
    int  _pid;
    NSString * _reason;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) bool isFinished;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int pid;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSUUID *uuid;

+ (id)taskWithName:(id)arg1 reason:(id)arg2;
+ (id)taskWithName:(id)arg1 reason:(id)arg2 forBundleID:(id)arg3;

- (void).cxx_destruct;
- (void)begin;
- (id)bundleID;
- (id)description;
- (void)end;
- (id)init;
- (bool)isFinished;
- (id)name;
- (int)pid;
- (id)reason;
- (void)setBundleID:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end

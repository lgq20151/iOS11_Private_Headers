/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSProcessHandle : NSObject <BSXPCCoding, FBSProcess, FBSProcessIdentity, NSSecureCoding> {
    BSAuditToken * _auditToken;
    NSString * _bundleID;
    NSString * _bundlePath;
    NSString * _jobLabel;
    NSString * _name;
    int  _pid;
    BSMachPortTaskNameRight * _taskNameRight;
}

@property (nonatomic, readonly, retain) BSAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jobLabel;
@property (nonatomic, readonly, copy) NSString *jobLabel;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) BSMachPortTaskNameRight *taskNameRight;
@property (nonatomic, readonly) long long type;
@property (getter=isValid, nonatomic, readonly) bool valid;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)processHandle;
+ (id)processHandleForAuditToken:(id)arg1;
+ (id)processHandleForNSXPCConnection:(id)arg1;
+ (id)processHandleForPID:(int)arg1;
+ (id)processHandleForPID:(int)arg1 bundleID:(id)arg2;
+ (id)processHandleForTaskNameRight:(id)arg1;
+ (id)processHandleForXPCConnection:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithPID:(int)arg1 bundleID:(id)arg2;
- (bool)_isRunningWithCertainty:(out bool*)arg1;
- (id)auditToken;
- (id)bundleIdentifier;
- (id)bundlePath;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)initWithCurrentProcess;
- (id)initWithPID:(int)arg1 bundleID:(id)arg2;
- (id)initWithTaskNameRight:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isValid;
- (id)jobLabel;
- (id)name;
- (int)pid;
- (void)setBundlePath:(id)arg1;
- (void)setJobLabel:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)taskNameRight;
- (id)valueForEntitlement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (id)handle;
- (long long)type;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMachPortTaskNameRight : BSMachPortSendRight {
    BSAuditToken * _auditToken;
    int  _pid;
}

@property (nonatomic, readonly, retain) BSAuditToken *auditToken;
@property (nonatomic, readonly) int pid;

+ (bool)supportsSecureCoding;
+ (id)taskNameForPID:(int)arg1;

- (id)auditToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (int)pid;

@end

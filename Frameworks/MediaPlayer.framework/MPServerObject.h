/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObject : NSObject {
    struct { unsigned int x1[8]; } * _clientAuditToken;
    NSString * _clientBundleIdentifier;
    NSString * _clientBundleVersion;
    int  _clientPID;
    NSMutableArray * _deferredInvocations;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; }*clientAuditToken;
@property (nonatomic, readonly, copy) NSString *clientBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientBundleVersion;
@property (nonatomic, readonly) int clientPID;
@property (nonatomic, retain) NSMutableArray *deferredInvocations;

+ (id)_center;

- (id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)_registerNotificationsForSelectors;
- (struct { unsigned int x1[8]; }*)clientAuditToken;
- (id)clientBundleIdentifier;
- (id)clientBundleVersion;
- (int)clientPID;
- (id)deferredInvocations;
- (id)init;
- (void)performDelayedInvocationsIfNeeded;
- (void)setDeferredInvocations:(id)arg1;
- (bool)shouldDelayInvocation:(id)arg1;

@end

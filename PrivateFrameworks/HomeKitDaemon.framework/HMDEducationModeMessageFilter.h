/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEducationModeMessageFilter : HMDMessageFilter {
    bool  _ephemeralMultiUser;
    bool  _managedAppleID;
}

@property (getter=isEphemeralMultiUser, nonatomic) bool ephemeralMultiUser;
@property (getter=isManagedAppleID, nonatomic) bool managedAppleID;

- (void)_update;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (void)dealloc;
- (void)handleActiveAccountChanged:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEphemeralMultiUser;
- (bool)isManagedAppleID;
- (void)setEphemeralMultiUser:(bool)arg1;
- (void)setManagedAppleID:(bool)arg1;

@end

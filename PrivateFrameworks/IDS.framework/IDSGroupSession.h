/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSGroupSession : NSObject {
    _IDSGroupSession * _internal;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (nonatomic, readonly) NSString *sessionID;

- (void).cxx_destruct;
- (id)_internal;
- (void)dealloc;
- (id)destination;
- (void)groupSessionParticipantsWithRequestID:(id)arg1;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (void)joinGroupSession;
- (void)leaveGroupSession;
- (unsigned int)sessionEndedReason;
- (id)sessionID;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setParticipantInfo:(id)arg1;
- (void)setPreferences:(id)arg1;
- (unsigned int)state;
- (void)updateMembers:(id)arg1 forGroupID:(id)arg2 isTriggeredLocally:(bool)arg3;

@end

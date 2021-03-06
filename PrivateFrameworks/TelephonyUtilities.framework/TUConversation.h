/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversation : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSSet * _activeRemoteParticipants;
    NSUUID * _groupUUID;
    bool  _locallyCreated;
    NSSet * _participantHandles;
    long long  _state;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, copy) NSSet *activeRemoteParticipants;
@property (nonatomic, readonly) NSUUID *groupUUID;
@property (getter=isLocallyCreated, nonatomic) bool locallyCreated;
@property (nonatomic, copy) NSSet *participantHandles;
@property (nonatomic) long long state;

+ (id)emptyConversationWithGroupUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activeRemoteParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupUUID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 groupUUID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversation:(id)arg1;
- (bool)isLocallyCreated;
- (id)participantHandles;
- (void)setActiveRemoteParticipants:(id)arg1;
- (void)setLocallyCreated:(bool)arg1;
- (void)setParticipantHandles:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end

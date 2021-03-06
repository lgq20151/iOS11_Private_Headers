/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCSessionConfiguration : NSObject {
    unsigned long long  _maxRemoteParticipants;
    long long  _sessionType;
}

@property (nonatomic) unsigned long long maxRemoteParticipants;
@property (nonatomic) long long sessionType;

+ (long long)clientSessionTypeWithSessionType:(long long)arg1;
+ (long long)sessionTypeWithClientSessionType:(long long)arg1;

- (id)dictionary;
- (unsigned long long)maxRemoteParticipants;
- (long long)sessionType;
- (void)setMaxRemoteParticipants:(unsigned long long)arg1;
- (void)setSessionType:(long long)arg1;
- (void)setUpWithDictionary:(id)arg1;

@end

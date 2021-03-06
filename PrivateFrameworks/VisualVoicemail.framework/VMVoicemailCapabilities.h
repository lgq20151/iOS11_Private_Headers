/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailCapabilities : NSObject <NSCopying, NSSecureCoding> {
    bool  _canChangeGreeting;
    bool  _canChangePassword;
    long long  _mailboxGreetingState;
    bool  _mailboxRequiresSetup;
    double  _maximumGreetingDuration;
    unsigned long long  _maximumPasswordLength;
    unsigned long long  _minimumPasswordLength;
    bool  _transcriptionEnabled;
}

@property (nonatomic, readonly) bool canChangeGreeting;
@property (nonatomic, readonly) bool canChangePassword;
@property (nonatomic, readonly) long long mailboxGreetingState;
@property (nonatomic, readonly) bool mailboxRequiresSetup;
@property (nonatomic, readonly) double maximumGreetingDuration;
@property (nonatomic, readonly) unsigned long long maximumPasswordLength;
@property (nonatomic, readonly) unsigned long long minimumPasswordLength;
@property (getter=isTranscriptionEnabled, nonatomic, readonly) bool transcriptionEnabled;

+ (bool)supportsSecureCoding;

- (bool)canChangeGreeting;
- (bool)canChangePassword;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCanChangeGreeting:(bool)arg1 canChangePassword:(bool)arg2 mailboxRequiresSetup:(bool)arg3 mailboxGreetingState:(long long)arg4 maximumGreetingDuration:(double)arg5 minimumPasswordLength:(unsigned long long)arg6 maximumPasswordLength:(unsigned long long)arg7 transcriptionEnabled:(bool)arg8;
- (id)initWithCapabilities:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCapabilities:(id)arg1;
- (bool)isTranscriptionEnabled;
- (long long)mailboxGreetingState;
- (bool)mailboxRequiresSetup;
- (double)maximumGreetingDuration;
- (unsigned long long)maximumPasswordLength;
- (unsigned long long)minimumPasswordLength;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRBroadcastCommandResponse : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifer;
    NSArray * _commandHandlerStatuses;
    int  _pid;
    NSData * _responseData;
}

@property (nonatomic, readonly) NSString *bundleIdentifer;
@property (nonatomic, readonly) NSArray *commandHandlerStatuses;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSData *responseData;

+ (bool)supportsSecureCoding;

- (id)bundleIdentifer;
- (id)commandHandlerStatuses;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1 bundleIdentifier:(id)arg2 responseData:(id)arg3;
- (id)initWithPID:(int)arg1 bundleIdentifier:(id)arg2 statuses:(id)arg3;
- (int)pid;
- (id)responseData;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {
    NSString * _clientID;
    unsigned int  _contextID;
    NSString * _displayUUID;
    int  _pid;
}

@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly) unsigned int contextID;
@property (nonatomic, readonly, copy) NSString *displayUUID;
@property (nonatomic, readonly) int pid;

+ (id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
+ (bool)supportsSecureCoding;

- (id)clientID;
- (id)conciseDescription;
- (unsigned int)contextID;
- (void)dealloc;
- (id)description;
- (id)displayUUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualNotIncludingClientIDAndPid:(id)arg1;
- (int)pid;
- (id)propertiesOneLevelMoreGeneric;
- (void)setPid:(int)arg1;

@end

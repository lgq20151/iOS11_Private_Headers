/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPNetworkPort : TSgPTPPort {
    unsigned int  _connection;
    NSString * _interfaceName;
}

@property (getter=isASCapable, nonatomic, readonly) bool asCapable;
@property (nonatomic, readonly) unsigned int connection;
@property (nonatomic, readonly, copy) NSString *destinationAddressString;
@property (nonatomic, readonly) bool hasLocalFrequencyStability;
@property (nonatomic, readonly) bool hasLocalFrequencyTolerance;
@property (nonatomic, readonly) bool hasRemoteFrequencyStability;
@property (nonatomic, readonly) bool hasRemoteFrequencyTolerance;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic, readonly) BOOL localAnnounceLogMeanInterval;
@property (nonatomic, readonly) unsigned int localFrequencyStability;
@property (nonatomic, readonly) unsigned int localFrequencyTolerance;
@property (nonatomic, readonly) unsigned char localLinkType;
@property (nonatomic, readonly) BOOL localSyncLogMeanInterval;
@property (nonatomic, readonly) unsigned char localTimestampingMode;
@property (nonatomic, readonly) unsigned int maximumPropagationDelay;
@property (nonatomic, readonly) unsigned int minimumPropagationDelay;
@property (nonatomic, readonly) unsigned int propagationDelay;
@property (nonatomic, readonly) BOOL remoteAnnounceLogMeanInterval;
@property (nonatomic, readonly) unsigned long long remoteClockIdentity;
@property (nonatomic, readonly) unsigned int remoteFrequencyStability;
@property (nonatomic, readonly) unsigned int remoteFrequencyTolerance;
@property (nonatomic, readonly) unsigned char remoteLinkType;
@property (nonatomic, readonly) unsigned short remotePortNumber;
@property (nonatomic, readonly) BOOL remoteSyncLogMeanInterval;
@property (nonatomic, readonly) unsigned char remoteTimestampingMode;
@property (nonatomic, readonly, copy) NSString *sourceAddressString;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;

- (bool)_commonInitWithService:(unsigned int)arg1;
- (unsigned int)connection;
- (void)dealloc;
- (id)destinationAddressString;
- (bool)hasLocalFrequencyStability;
- (bool)hasLocalFrequencyTolerance;
- (bool)hasRemoteFrequencyStability;
- (bool)hasRemoteFrequencyTolerance;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (id)interfaceName;
- (bool)isASCapable;
- (BOOL)localAnnounceLogMeanInterval;
- (unsigned int)localFrequencyStability;
- (unsigned int)localFrequencyTolerance;
- (unsigned char)localLinkType;
- (BOOL)localSyncLogMeanInterval;
- (unsigned char)localTimestampingMode;
- (unsigned int)maximumPropagationDelay;
- (unsigned int)minimumPropagationDelay;
- (unsigned int)propagationDelay;
- (BOOL)remoteAnnounceLogMeanInterval;
- (unsigned long long)remoteClockIdentity;
- (unsigned int)remoteFrequencyStability;
- (unsigned int)remoteFrequencyTolerance;
- (unsigned char)remoteLinkType;
- (unsigned short)remotePortNumber;
- (BOOL)remoteSyncLogMeanInterval;
- (unsigned char)remoteTimestampingMode;
- (bool)requestRemoteMessageIntervalsWithPDelayMessageInterval:(BOOL)arg1 syncMessageInterval:(BOOL)arg2 announceMessageInterval:(BOOL)arg3 error:(id*)arg4;
- (id)sourceAddressString;

@end

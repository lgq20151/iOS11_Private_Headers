/* made by EzioChiu.
 */

@protocol NWNetworkAgent

@required

+ (NSString *)agentDomain;
+ (id)agentFromData:(NSData *)arg1;
+ (NSString *)agentType;

- (NSString *)agentDescription;
- (NSUUID *)agentUUID;
- (NSData *)copyAgentData;
- (bool)isActive;
- (bool)isKernelActivated;
- (bool)isUserActivated;
- (bool)isVoluntary;
- (void)setActive:(bool)arg1;
- (void)setAgentDescription:(NSString *)arg1;
- (void)setAgentUUID:(NSUUID *)arg1;
- (void)setKernelActivated:(bool)arg1;
- (void)setUserActivated:(bool)arg1;
- (void)setVoluntary:(bool)arg1;

@optional

- (bool)assertAgentWithOptions:(NSDictionary *)arg1;
- (void)closeNexusWithOptions:(NSDictionary *)arg1;
- (bool)isNetworkProvider;
- (bool)isNexusProvider;
- (bool)isSpecificUseOnly;
- (bool)requestNexusWithOptions:(NSDictionary *)arg1;
- (void)setNetworkProvider:(bool)arg1;
- (void)setNexusProvider:(bool)arg1;
- (void)setSpecificUseOnly:(bool)arg1;
- (void)setSupportsBrowseRequests:(bool)arg1;
- (bool)startAgentWithOptions:(NSDictionary *)arg1;
- (bool)supportsBrowseRequests;
- (void)unassertAgentWithOptions:(NSDictionary *)arg1;

@end

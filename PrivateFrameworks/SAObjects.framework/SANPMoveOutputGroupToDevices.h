/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPMoveOutputGroupToDevices : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;

+ (id)moveOutputGroupToDevices;
+ (id)moveOutputGroupToDevicesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupID;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setGroupID:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;

@end

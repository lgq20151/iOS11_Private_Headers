/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>

@property (nonatomic, retain) NSObject<OS_xpc_object> *assertionEndpoint;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)policyByCombiningPolicies:(id)arg1;
+ (id)policyCancelingTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
+ (id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)arg1 withHostContextId:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (id)assertionEndpoint;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchSharingTouchesPolicy:(id /* block */)arg1 orCancelTouchesPolicy:(id /* block */)arg2 orCombinedPolicy:(id /* block */)arg3;
- (id)policyByMappingContainedPoliciesWithBlock:(id /* block */)arg1;
- (id)policyExcludingPolicy:(id)arg1;
- (id)policyIncludingPolicy:(id)arg1;
- (id)reducePolicyToObjectWithBlock:(id /* block */)arg1;
- (void)setAssertionEndpoint:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSkipTimeInterval : SADomainCommand

@property (nonatomic, copy) NSNumber *adjustmentInMilliseconds;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;

+ (id)skipTimeInterval;
+ (id)skipTimeIntervalWithDictionary:(id)arg1 context:(id)arg2;

- (id)adjustmentInMilliseconds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setAdjustmentInMilliseconds:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;

@end

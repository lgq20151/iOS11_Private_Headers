/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSServiceFacilityClient : FBSSystemServiceFacilityClient {
    long long  _numberOfCheckOuts;
}

+ (void)checkInClient:(id)arg1;
+ (id)checkOutClientWithClass:(Class)arg1;
+ (id)serviceFacilityIdentifier;

- (bool)_decrementCheckout;
- (void)_incrementCheckout;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAbstractApplicationService : SBSAbstractFacilityService

@property (nonatomic, readonly) SBSApplicationClient *client;

+ (Class)serviceFacilityClientClass;

- (id)client;

@end

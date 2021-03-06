/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFInstallProvisioningProfileRequest : CATTaskRequest {
    NSString * _managingProfileIdentifier;
    NSData * _profileData;
}

@property (nonatomic, copy) NSString *managingProfileIdentifier;
@property (nonatomic, copy) NSData *profileData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)managingProfileIdentifier;
- (id)profileData;
- (void)setManagingProfileIdentifier:(id)arg1;
- (void)setProfileData:(id)arg1;

@end

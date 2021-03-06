/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) unsigned long long presentationGesture;
@property (nonatomic) bool shouldEnableInternalModules;
@property (nonatomic) bool shouldEnablePrototypeFeatures;
@property (nonatomic) bool shouldEnableTigrisCarryUI;
@property (nonatomic) unsigned long long userInvocationCount;

// Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (unsigned long long)_defaultPresentationGesture;
- (id)init;
- (void)setShouldEnableTigrisCarryUI:(bool)arg1;
- (bool)shouldEnableTigrisCarryUI;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (unsigned long long)presentationGesture;
- (void)setPresentationGesture:(unsigned long long)arg1;
- (void)setShouldEnableInternalModules:(bool)arg1;
- (void)setShouldEnablePrototypeFeatures:(bool)arg1;
- (void)setUserInvocationCount:(unsigned long long)arg1;
- (bool)shouldEnableInternalModules;
- (bool)shouldEnablePrototypeFeatures;
- (unsigned long long)userInvocationCount;

@end

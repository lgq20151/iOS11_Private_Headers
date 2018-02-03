/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIShareExtensionRemoteViewController : _UIRemoteViewController <_UIShareExtensionHost> {
    NSExtension * _extension;
    <NSCopying><NSObject> * _extensionRequestIdentifier;
    NSUUID * _extensionServicePresentedActivityUUID;
    <_UIShareExtensionHost> * _shareExtensionHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying><NSObject> *extensionRequestIdentifier;
@property (nonatomic, retain) NSUUID *extensionServicePresentedActivityUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) <_UIShareExtensionHost> *shareExtensionHost;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(id /* block */)arg2;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (void)_cancelPendingExtensionRequests;
- (id)extension;
- (id)extensionRequestIdentifier;
- (id)extensionServicePresentedActivityUUID;
- (void)invalidate;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setExtensionServicePresentedActivityUUID:(id)arg1;
- (void)setShareExtensionHost:(id)arg1;
- (id)shareExtensionHost;
- (id)shareExtensionService;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
- (void)shareExtensionServiceChangeSheetDismissButtonHidden:(bool)arg1;
- (void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1;
- (void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2;
- (void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
- (void)shareExtensionServicePreferredContentSizeUpdated:(struct CGSize { double x1; double x2; })arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1;
- (void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(bool)arg2 completion:(id /* block */)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

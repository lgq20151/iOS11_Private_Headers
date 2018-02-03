/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewControllerInterfaceClient : NSExtensionContext {
    <_UIIVCInterface> * _forwardingInterface;
}

@property (nonatomic, retain) <_UIIVCInterface> *forwardingInterface;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_handleInputViewControllerState:(id)arg1;
- (void)_tearDownRemoteService;
- (void)dealloc;
- (id)forwardingInterface;
- (id)responseDelegate;
- (void)setForwardingInterface:(id)arg1;

@end

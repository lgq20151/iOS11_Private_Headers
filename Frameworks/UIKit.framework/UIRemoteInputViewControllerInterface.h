/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate> {
    <_UIIVCResponseDelegate> * _responseDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_UIIVCResponseDelegate> *responseDelegate;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_handleInputViewControllerState:(id)arg1;
- (void)_openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_performInputViewControllerOutput:(id)arg1;
- (void)_tearDownRemoteService;
- (void)dealloc;
- (id)responseDelegate;
- (void)setResponseDelegate:(id)arg1;

@end

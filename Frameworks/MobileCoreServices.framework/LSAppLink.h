/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSAppLink : NSObject <NSSecureCoding> {
    NSURL * _URL;
    _LSValidationToken * __validationToken;
    LSApplicationProxy * _targetApplicationProxy;
}

@property (copy) NSURL *URL;
@property (retain) _LSValidationToken *_validationToken;
@property long long openStrategy;
@property (retain) LSApplicationProxy *targetApplicationProxy;

+ (bool)URLComponentsAreValidForAppLinks:(id)arg1 error:(id*)arg2;
+ (bool)_XPCConnectionIsBrowser:(id)arg1;
+ (id)_appLinkWithURL:(id)arg1 applicationProxy:(id)arg2 plugIn:(id)arg3;
+ (void)_getAppLinksFromPlugInAtIndex:(unsigned long long)arg1 forURLComponents:(id)arg2 limit:(unsigned long long)arg3 XPCConnection:(id)arg4 results:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)_getAppLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 requireEntitlement:(bool)arg3 XPCConnection:(id)arg4 completionHandler:(id /* block */)arg5;
+ (long long)_openStrategyForBundleIdentifier:(id)arg1;
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 XPCConnection:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_setOpenStrategy:(long long)arg1 forBundleIdentifier:(id)arg2 XPCConnection:(id)arg3;
+ (bool)_shouldAppLinkOpenWithStrategy:(long long)arg1 state:(id)arg2 XPCConnection:(id)arg3;
+ (id)dispatchQueue;
+ (void)getAppLinkWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getAppLinksWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getAppLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)openWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (id)URL;
- (id)_validationToken;
- (id)_validationTokenPayload;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)openInWebBrowser:(bool)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openInWebBrowser:(bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openInWebBrowser:(bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)openStrategy;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)openWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setOpenStrategy:(long long)arg1;
- (void)setTargetApplicationProxy:(id)arg1;
- (void)setURL:(id)arg1;
- (void)set_validationToken:(id)arg1;
- (id)targetApplicationProxy;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSInstallationManager : NSObject

+ (id)sharedInstance;

- (void)install:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)uninstall:(id)arg1 withCompletionBlock:(id /* block */)arg2;

@end

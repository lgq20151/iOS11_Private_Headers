/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationRemovabilityService : SBSAbstractApplicationService

- (void)fetchRemovabilityForBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setRemovalAllowed:(bool)arg1 forBundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setRemovalAllowed:(bool)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end

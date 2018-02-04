/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNLSApplicationWorkspace : NSObject <CNLSApplicationWorkspace>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)launchServices;
+ (id)remoteAdapter;

- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1;
- (void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;

@end
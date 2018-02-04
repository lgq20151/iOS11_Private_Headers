/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNLaunchServicesLocalAdapter : NSObject <CNLaunchServicesAdapter> {
    LSApplicationWorkspace * _workspace;
}

@property (nonatomic, retain) LSApplicationWorkspace *workspace;

+ (id)lsApplicationWorkspaceForBundleId:(id)arg1;

- (void).cxx_destruct;
- (void)applicationForBundleIdentifier:(id)arg1 withReply:(id /* block */)arg2;
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(id /* block */)arg2;
- (void)applicationsForUserActivityType:(id)arg1 withReply:(id /* block */)arg2;
- (id)initWithApplicationWorkspace:(id)arg1;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(id /* block */)arg3;
- (void)setWorkspace:(id)arg1;
- (id)workspace;

@end
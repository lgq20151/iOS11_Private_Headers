/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _applicationWorkspace;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSObject<OS_dispatch_queue> * _completionQueue;
    FBApplicationLibraryConfiguration * _configuration;
    bool  _initializing;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMapTable * _observerQueue_tokensToBlocks;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _workQueue_installedApplicationsByBundleID;
    NSMutableArray * _workQueue_pendingSynchronizationExecutionBlocks;
    NSMutableDictionary * _workQueue_placeholdersByBundleID;
    unsigned long long  _workQueue_synchronizationActionCount;
    bool  _workQueue_usingNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUsingNetwork, nonatomic, readonly) bool usingNetwork;

+ (id)_systemApplicationBundleIdentifier;
+ (id)_systemApplicationProxy;
+ (id)sharedInstance;

- (void)_load;
- (void)_notifyDidAddApplications:(id)arg1;
- (void)_notifyDidAddPlaceholders:(id)arg1;
- (void)_notifyDidCancelPlaceholders:(id)arg1;
- (void)_notifyDidChangeNetworkUsage:(bool)arg1;
- (void)_notifyDidDemoteApplications:(id)arg1;
- (void)_notifyDidRemoveApplications:(id)arg1;
- (void)_notifyDidReplaceApplications:(id)arg1;
- (void)_notifyForType:(long long)arg1 synchronously:(bool)arg2 withCastingBlock:(id /* block */)arg3;
- (id)_observeType:(long long)arg1 withBlock:(id)arg2;
- (bool)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (id)_workQueue_applicationInfoForProxy:(id)arg1 filterExisting:(bool)arg2 createIfNecessary:(bool)arg3 createReason:(id)arg4;
- (id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(bool)arg2 createReason:(id)arg3 createdApplications:(id*)arg4 existingApplications:(id*)arg5 filterExistingApplications:(id*)arg6 unmappedProxies:(id*)arg7;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_workQueue_executeInstallSynchronizationBlocksIfAppropriate;
- (void)_workQueue_incrementSynchronizationActionCount;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1;
- (id)_workQueue_placeholderForProxy:(id)arg1 filterExisting:(bool)arg2 updateExistingIfNecessary:(bool)arg3 createIfNecessary:(bool)arg4 createReason:(id)arg5;
- (id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(bool)arg2 createIfNecessary:(bool)arg3 createReason:(id)arg4 createdPlaceholders:(id*)arg5 existingPlaceholders:(id*)arg6 filterExistingPlaceholders:(id*)arg7 unmappedProxies:(id*)arg8;
- (void)_workQueue_removeInstalledApplicationFromModelForBundleID:(id)arg1 withReason:(id)arg2;
- (void)_workQueue_removePlaceholderFromModelForBundleID:(id)arg1 withReason:(id)arg2;
- (id)allInstalledApplications;
- (id)allPlaceholders;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)executeOrPendInstallSynchronizationBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1 configuration:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isUsingNetwork;
- (void)networkUsageChanged:(bool)arg1;
- (void)noteSystemAppDidFinishLaunching;
- (id)observeDidAddApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidAddPlaceholdersWithBlock:(id /* block */)arg1;
- (id)observeDidCancelPlaceholdersWithBlock:(id /* block */)arg1;
- (id)observeDidChangeNetworkUsageWithBlock:(id /* block */)arg1;
- (id)observeDidDemoteApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidRemoveApplicationsWithBlock:(id /* block */)arg1;
- (id)observeDidReplaceApplicationsWithBlock:(id /* block */)arg1;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (void)removeObserverForToken:(id)arg1;
- (void)uninstallApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;

@end

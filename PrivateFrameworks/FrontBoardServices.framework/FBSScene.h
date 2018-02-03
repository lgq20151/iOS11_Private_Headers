/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSScene : NSObject <BSDescriptionProviding, FBSSceneLayerDelegate, FBSSceneUpdaterDelegate>

@property (nonatomic, readonly, retain) FBSSceneClientSettings *clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) NSArray *layers;
@property (nonatomic, readonly, retain) FBSSceneSettings *settings;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (void)_didCreateWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)_hasAgent;
- (id)_init;
- (void)_willDestroyWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)clientSettings;
- (id)contexts;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)display;
- (id)fbsDisplay;
- (id)identifier;
- (id)init;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)invalidate;
- (bool)invalidateSnapshotWithContext:(id)arg1;
- (id)layers;
- (bool)performSnapshotWithContext:(id)arg1;
- (void)sceneLayerDidInvalidate:(id)arg1;
- (void)sceneLayerDidUpdate:(id)arg1;
- (bool)sceneLayerShouldObserveUpdates:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotRequest;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)uiCanReceiveDeviceOrientationEvents;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateUIClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateUIClientSettingsWithTransitionBlock:(id /* block */)arg1;

@end

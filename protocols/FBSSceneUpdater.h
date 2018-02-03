/* made by EzioChiu.
 */

@protocol FBSSceneUpdater <NSObject>

@required

- (<FBSProcess> *)hostProcess;
- (void)registerDelegate:(id <FBSSceneUpdaterDelegate>)arg1 forSceneID:(NSString *)arg2;
- (void)scene:(FBSScene *)arg1 didAttachLayer:(FBSSceneLayer *)arg2;
- (void)scene:(FBSScene *)arg1 didDetachLayer:(FBSSceneLayer *)arg2;
- (void)scene:(FBSScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(FBSScene *)arg1 didUpdateLayer:(FBSSceneLayer *)arg2;
- (void)scene:(void *)arg1 sendMessage:(void *)arg2 withResponse:(void *)arg3; // needs 3 arg types, found 9: FBSScene *, FBSSceneMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneMessage *, NSError *, void*
- (void)unregisterDelegateForSceneID:(NSString *)arg1;
- (bool)willObserveLayersManually;

@end

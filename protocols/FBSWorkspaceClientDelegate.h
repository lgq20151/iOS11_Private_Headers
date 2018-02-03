/* made by EzioChiu.
 */

@protocol FBSWorkspaceClientDelegate <NSObject>

@required

- (void)client:(FBSWorkspaceClient *)arg1 handleActions:(FBSWorkspaceActionsEvent *)arg2;
- (void)client:(void *)arg1 handleCreateScene:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: FBSWorkspaceClient *, FBSWorkspaceCreateSceneEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceCreateSceneResponseEvent *, void*
- (void)client:(void *)arg1 handleDestroyScene:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: FBSWorkspaceClient *, FBSWorkspaceDestroySceneEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceDestroySceneResponseEvent *, void*
- (void)clientBeginTransaction:(FBSWorkspaceClient *)arg1;
- (void)clientEndTransaction:(FBSWorkspaceClient *)arg1;
- (void)clientSystemApplicationTerminated:(FBSWorkspaceClient *)arg1;

@end

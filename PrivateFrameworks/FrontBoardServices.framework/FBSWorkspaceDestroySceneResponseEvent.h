/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceDestroySceneResponseEvent : FBSWorkspaceSceneUpdateResponseEvent

@property (nonatomic, retain) FBSWorkspaceDestroySceneResponse *response;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
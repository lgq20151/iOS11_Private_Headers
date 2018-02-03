/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding> {
    <FBSSceneSnapshotRequestDelegate> * _delegate;
    bool  _handled;
    NSString * _sceneID;
    FBSSceneSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSSceneSnapshotRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sceneID;
@property (nonatomic, readonly, copy) FBSSceneSettings *settings;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)performSnapshotWithContext:(id)arg1;
- (id)sceneID;
- (void)setDelegate:(id)arg1;
- (void)setSceneID:(id)arg1;
- (id)settings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

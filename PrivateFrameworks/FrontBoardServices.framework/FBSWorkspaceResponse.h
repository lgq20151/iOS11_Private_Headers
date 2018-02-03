/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {
    BKSAnimationFenceHandle * _animationFence;
    FBSSceneMessage * _message;
}

@property (nonatomic, retain) BKSAnimationFenceHandle *animationFence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FBSSceneMessage *message;
@property (readonly) Class superclass;

- (id)animationFence;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)message;
- (void)setAnimationFence:(id)arg1;
- (void)setMessage:(id)arg1;

@end

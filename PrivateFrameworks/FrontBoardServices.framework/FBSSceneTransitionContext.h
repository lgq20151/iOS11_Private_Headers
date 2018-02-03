/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneTransitionContext : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying> {
    NSSet * _actions;
    BKSAnimationFenceHandle * _animationFence;
    BSAnimationSettings * _animationSettings;
    BSProcessHandle * _originatingProcess;
    BSMutableSettings * _otherSettings;
    BSMutableSettings * _transientLocalClientSettings;
}

@property (nonatomic, copy) NSSet *actions;
@property (nonatomic, retain) BKSAnimationFenceHandle *animationFence;
@property (nonatomic, copy) BSAnimationSettings *animationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSProcessHandle *originatingProcess;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)transitionContext;

- (id)actions;
- (id)animationFence;
- (id)animationSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originatingProcess;
- (id)otherSettings;
- (void)setActions:(id)arg1;
- (void)setAnimationFence:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setOriginatingProcess:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transientLocalClientSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)isUISubclass;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneClientSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSSet * _occlusions;
    BSSettings * _otherSettings;
    long long  _preferredInterfaceOrientation;
    double  _preferredLevel;
    NSString * _preferredSceneHostIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *occlusions;
@property (nonatomic, readonly) long long preferredInterfaceOrientation;
@property (nonatomic, readonly) double preferredLevel;
@property (nonatomic, readonly, copy) NSString *preferredSceneHostIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (bool)_isMutable;
+ (id)settings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)occlusions;
- (id)otherSettings;
- (long long)preferredInterfaceOrientation;
- (double)preferredLevel;
- (id)preferredSceneHostIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)isUISubclass;

@end

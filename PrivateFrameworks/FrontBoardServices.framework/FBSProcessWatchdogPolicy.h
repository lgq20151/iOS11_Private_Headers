/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessWatchdogPolicy : NSObject <BSDescriptionProviding, NSCopying> {
    NSString * _name;
    NSArray * _provisions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *provisions;
@property (readonly) Class superclass;

+ (id)policyWithName:(id)arg1 forProvisions:(id)arg2;
+ (id)policyWithProvisions:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)name;
- (id)provisions;
- (void)setName:(id)arg1;
- (void)setProvisions:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

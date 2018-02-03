/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPluginBundle : NSObject {
    NSBundle * _bundle;
    NSString * _identifier;
    NSString * _name;
    Class  _principalClass;
    NSString * _requiredClassOrProtocolName;
    NSString * _specifiedClassName;
    NSString * _type;
}

@property (nonatomic, readonly, retain) NSBundle *bundle;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, retain) Class principalClass;
@property (nonatomic, copy) NSString *requiredClassOrProtocolName;
@property (nonatomic, copy) NSString *specifiedClassName;
@property (nonatomic, readonly, copy) NSString *type;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)bundleWithPath:(id)arg1 availableSpecifications:(id)arg2;

- (id)bundle;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithBundle:(id)arg1;
- (bool)isLoaded;
- (bool)isValid;
- (bool)loadPlugin;
- (bool)loadPlugin:(id /* block */)arg1;
- (id)name;
- (Class)principalClass;
- (id)requiredClassOrProtocolName;
- (void)setRequiredClassOrProtocolName:(id)arg1;
- (void)setSpecifiedClassName:(id)arg1;
- (id)specifiedClassName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)type;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCBundle : NSObject <BSDescriptionProviding> {
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    NSString * _executablePath;
    NSDictionary * _infoDictionary;
    NSObject<OS_xpc_object> * _xpcBundle;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *executablePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *infoDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSObject<OS_xpc_object> *xpcBundle;

+ (id)bundleForPID:(int)arg1;
+ (id)bundleWithExecutablePath:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleWithXPCBundle:(id)arg1;
+ (id)mainBundle;

- (id)bundleIdentifier;
- (id)bundlePath;
- (id)bundleWithXPCBundle:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)executablePath;
- (id)infoDictionary;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)xpcBundle;

@end

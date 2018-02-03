/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAcquireAssertionAction : BSAction

@property (nonatomic, readonly) NSString *assertionName;
@property (nonatomic, readonly) unsigned int port;
@property (nonatomic, readonly) NSString *reason;

+ (id)assertionWithAssertionName:(id)arg1 reason:(id)arg2 withHandler:(id /* block */)arg3;

- (id)assertionName;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned int)port;
- (id)reason;

@end

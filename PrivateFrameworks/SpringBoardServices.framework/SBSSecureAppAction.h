/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSSecureAppAction : BSAction

@property (nonatomic, readonly) unsigned long long secureAppType;

- (id)initWithType:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (unsigned long long)secureAppType;

@end

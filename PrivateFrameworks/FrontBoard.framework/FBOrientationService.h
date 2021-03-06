/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOrientationService : NSObject {
    FBOrientationServiceServer * _server;
}

+ (id)sharedInstance;

- (id)init;
- (void)noteInterfaceOrientationChanged:(long long)arg1;
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;

@end

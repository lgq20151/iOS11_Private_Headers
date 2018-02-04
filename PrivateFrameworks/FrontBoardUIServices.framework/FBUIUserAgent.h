/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUIUserAgent : NSObject <FBUIUserAgentInternal> {
    bool  _systemApp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isSystemApp, nonatomic) bool systemApp;

+ (id)sharedAgent;

- (id)currentProcess;
- (id)init;
- (bool)isSystemApp;
- (id)mainQueue;
- (id)processManager;
- (id)sceneManager;
- (void)setSystemApp:(bool)arg1;

@end
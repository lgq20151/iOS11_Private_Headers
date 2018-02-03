/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputManagerMux : NSObject {
    NSMutableArray * _clients;
    <_UIIVCResponseDelegateImpl> * _responseDelegate;
    <TIKeyboardInputManager> * _systemInputManager;
}

@property (nonatomic, readonly) bool hasSystemInputManager;
@property (nonatomic, retain) <_UIIVCResponseDelegateImpl> *responseDelegate;
@property (nonatomic, retain) <TIKeyboardInputManager> *systemInputManager;

+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)sharedInstance;

- (bool)_systemHasKbd;
- (void)addClient:(id)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (bool)hasSystemInputManager;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)releaseConnectedClients;
- (void)removeAllClients;
- (void)removeClient:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)responseDelegate;
- (void)setResponseDelegate:(id)arg1;
- (void)setSystemInputManager:(id)arg1;
- (void)setSystemInputManagerFromKeyboardState:(id)arg1 devicePasscodeEntry:(bool)arg2;
- (id)systemInputManager;
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHBClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration> {
    unsigned long long  _clickCount;
    unsigned long long  _lastSeenClickCount;
    bool  _recognizesOnPressPhaseBegan;
    UIPressesEvent * _registeredEventForTerminalEvents;
}

@property (nonatomic, readonly) NSArray *allowedPressTypes;
@property (nonatomic) unsigned long long clickCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recognizesOnPressPhaseBegan;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fail;
- (void)_processPresses:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_succeed;
- (unsigned long long)clickCount;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesEventDidReceiveTerminal:(id)arg1;
- (bool)recognizesOnPressPhaseBegan;
- (void)setClickCount:(unsigned long long)arg1;
- (void)setRecognizesOnPressPhaseBegan:(bool)arg1;

@end

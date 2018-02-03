/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHBLongClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration> {
    unsigned long long  _lastSeenClickCount;
    unsigned long long  _numberOfClicksRequired;
    UIPressesEvent * _registeredEventForTerminalEvents;
}

@property (nonatomic, readonly) NSArray *allowedPressTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfClicksRequired;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_effectiveNumberOfClicksRequired;
- (void)_fail;
- (void)_processPresses:(id)arg1;
- (bool)_requiredClickCountMetForPress:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_succeed;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (unsigned long long)numberOfClicksRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesEventDidReceiveTerminal:(id)arg1;
- (void)setNumberOfClicksRequired:(unsigned long long)arg1;

@end

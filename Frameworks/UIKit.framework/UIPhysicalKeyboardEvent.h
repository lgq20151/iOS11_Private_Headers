/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPhysicalKeyboardEvent : UIPressesEvent {
    bool  __externalEvent;
    NSString * _commandModifiedInput;
    NSString * _hint;
    int  _inputFlags;
    NSString * _markedInput;
    NSString * _modifiedInput;
    long long  _modifierFlags;
    NSString * _privateInput;
    NSString * _shiftModifiedInput;
    NSString * _unmodifiedInput;
}

@property (nonatomic, retain) NSString *_commandModifiedInput;
@property (getter=_isExternalEvent, nonatomic) bool _externalEvent;
@property (nonatomic, readonly) long long _gsModifierFlags;
@property (nonatomic, retain) NSString *_hint;
@property (nonatomic) int _inputFlags;
@property (nonatomic, readonly) bool _isGlobeKey;
@property (nonatomic, readonly) bool _isKeyDown;
@property (nonatomic, readonly) long long _keyCode;
@property (nonatomic, retain) NSString *_markedInput;
@property (nonatomic, retain) NSString *_modifiedInput;
@property (nonatomic) long long _modifierFlags;
@property (nonatomic, retain) NSString *_privateInput;
@property (nonatomic, retain) NSString *_shiftModifiedInput;
@property (nonatomic, retain) NSString *_unmodifiedInput;

+ (id)_eventWithInput:(id)arg1 inputFlags:(int)arg2;

- (void).cxx_destruct;
- (id)_cloneEvent;
- (id)_commandModifiedInput;
- (long long)_gsModifierFlags;
- (id)_hint;
- (int)_inputFlags;
- (bool)_isExternalEvent;
- (bool)_isGlobeKey;
- (bool)_isKeyDown;
- (long long)_keyCode;
- (id)_markedInput;
- (bool)_matchesKeyCommand:(id)arg1;
- (id)_modifiedInput;
- (long long)_modifierFlags;
- (id)_privateInput;
- (void)_privatizeInput;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1 keyboard:(struct __GSKeyboard { }*)arg2;
- (id)_shiftModifiedInput;
- (id)_unmodifiedInput;
- (bool)isEqual:(id)arg1;
- (void)set_commandModifiedInput:(id)arg1;
- (void)set_externalEvent:(bool)arg1;
- (void)set_hint:(id)arg1;
- (void)set_inputFlags:(int)arg1;
- (void)set_markedInput:(id)arg1;
- (void)set_modifiedInput:(id)arg1;
- (void)set_modifierFlags:(long long)arg1;
- (void)set_privateInput:(id)arg1;
- (void)set_shiftModifiedInput:(id)arg1;
- (void)set_unmodifiedInput:(id)arg1;
- (long long)type;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventKeyCommandDescriptor : BKSHIDEventDescriptor {
    NSString * _commandModifiedInput;
    NSString * _input;
    long long  _keyCode;
    long long  _modifierFlags;
    NSString * _shiftModifiedInput;
    NSString * _unmodifiedInput;
}

@property (nonatomic, retain) NSString *commandModifiedInput;
@property (nonatomic, readonly, retain) NSString *input;
@property (nonatomic, readonly) bool isTextualDescriptor;
@property (nonatomic, readonly) long long keyCode;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, retain) NSString *shiftModifiedInput;
@property (nonatomic, retain) NSString *unmodifiedInput;

+ (bool)_keyCodeIsModifierKey:(long long)arg1;
+ (bool)_shouldMatchKeyCommandsWithKeyCode:(long long)arg1 gsKeyboard:(struct __GSKeyboard { }*)arg2;
+ (id)descriptorWithInput:(id)arg1 modifierFlags:(long long)arg2;
+ (id)descriptorWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
+ (id)keyCommandDescriptorForEvent:(struct __IOHIDEvent { }*)arg1 gsKeyboard:(struct __GSKeyboard { }*)arg2;
+ (bool)supportsSecureCoding;

- (id)commandModifiedInput;
- (void)dealloc;
- (long long)describes:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 modifierFlags:(long long)arg2;
- (id)initWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
- (id)input;
- (bool)isEqual:(id)arg1;
- (bool)isTextualDescriptor;
- (long long)keyCode;
- (long long)modifierFlags;
- (void)setCommandModifiedInput:(id)arg1;
- (void)setShiftModifiedInput:(id)arg1;
- (void)setUnmodifiedInput:(id)arg1;
- (id)shiftModifiedInput;
- (id)unmodifiedInput;

@end

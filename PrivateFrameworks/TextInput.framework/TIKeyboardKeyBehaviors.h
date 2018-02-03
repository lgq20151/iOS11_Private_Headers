/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardKeyBehaviors : NSObject {
    unsigned long long  _returnKeyBehavior;
    unsigned long long  _spaceKeyBehavior;
}

@property (nonatomic) unsigned long long returnKeyBehavior;
@property (nonatomic) unsigned long long spaceKeyBehavior;

+ (id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2;

- (id)initWithSpaceKeyBehavior:(unsigned long long)arg1 returnKeyBehavior:(unsigned long long)arg2;
- (unsigned long long)returnKeyBehavior;
- (void)setReturnKeyBehavior:(unsigned long long)arg1;
- (void)setSpaceKeyBehavior:(unsigned long long)arg1;
- (unsigned long long)spaceKeyBehavior;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding> {
    NSString * _accentKeyString;
    bool  _assertDefaultKeyPlane;
    TIKeyboardInputManagerState * _inputManagerState;
    TIKeyboardIntermediateText * _intermediateText;
    NSString * _layoutTag;
    NSArray * _multilingualLanguages;
}

@property (nonatomic, copy) NSString *accentKeyString;
@property (nonatomic) bool assertDefaultKeyPlane;
@property (nonatomic, copy) TIKeyboardInputManagerState *inputManagerState;
@property (nonatomic, retain) TIKeyboardIntermediateText *intermediateText;
@property (nonatomic, copy) NSString *layoutTag;
@property (nonatomic, retain) NSArray *multilingualLanguages;

+ (bool)supportsSecureCoding;

- (id)accentKeyString;
- (bool)assertDefaultKeyPlane;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)inputManagerState;
- (id)intermediateText;
- (id)layoutTag;
- (id)multilingualLanguages;
- (void)setAccentKeyString:(id)arg1;
- (void)setAssertDefaultKeyPlane:(bool)arg1;
- (void)setInputManagerState:(id)arg1;
- (void)setIntermediateText:(id)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setMultilingualLanguages:(id)arg1;

@end

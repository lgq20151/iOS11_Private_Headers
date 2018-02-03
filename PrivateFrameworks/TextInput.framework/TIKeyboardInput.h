/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardInput : NSObject <NSSecureCoding> {
    TIKeyboardCandidate * _acceptedCandidate;
    bool  _backspace;
    union { 
        long long integerValue; 
        struct { 
            unsigned int uppercase : 1; 
            unsigned int autoshifted : 1; 
            unsigned int popupVariant : 1; 
            unsigned int multitap : 1; 
            unsigned int flick : 1; 
            unsigned int gesture : 1; 
            unsigned int synthesizedByAcceptingCandidate : 1; 
            unsigned int doubleSpace : 1; 
        } fields; 
    }  _flags;
    NSString * _inputManagerHint;
    <NSCopying><NSObject><NSSecureCoding> * _object;
    NSString * _string;
    TIKeyboardTouchEvent * _touchEvent;
}

@property (nonatomic, retain) TIKeyboardCandidate *acceptedCandidate;
@property (getter=isAutoshifted, nonatomic) bool autoshifted;
@property (getter=isBackspace, nonatomic) bool backspace;
@property (getter=isDoubleSpace, nonatomic) bool doubleSpace;
@property (getter=isFlick, nonatomic) bool flick;
@property (getter=isGesture, nonatomic) bool gesture;
@property (nonatomic, copy) NSString *inputManagerHint;
@property (getter=isMultitap, nonatomic) bool multitap;
@property (nonatomic, copy) <NSCopying><NSObject><NSSecureCoding> *object;
@property (getter=isPopupVariant, nonatomic) bool popupVariant;
@property (nonatomic, copy) NSString *string;
@property (getter=isSynthesizedByAcceptingCandidate, nonatomic) bool synthesizedByAcceptingCandidate;
@property (nonatomic, retain) TIKeyboardTouchEvent *touchEvent;
@property (getter=isUppercase, nonatomic) bool uppercase;

+ (bool)supportsSecureCoding;

- (id)acceptedCandidate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)inputManagerHint;
- (bool)isAutoshifted;
- (bool)isBackspace;
- (bool)isDoubleSpace;
- (bool)isFlick;
- (bool)isGesture;
- (bool)isMultitap;
- (bool)isPopupVariant;
- (bool)isSynthesizedByAcceptingCandidate;
- (bool)isUppercase;
- (id)object;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setAutoshifted:(bool)arg1;
- (void)setBackspace:(bool)arg1;
- (void)setDoubleSpace:(bool)arg1;
- (void)setFlick:(bool)arg1;
- (void)setGesture:(bool)arg1;
- (void)setInputManagerHint:(id)arg1;
- (void)setMultitap:(bool)arg1;
- (void)setObject:(id)arg1;
- (void)setPopupVariant:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setSynthesizedByAcceptingCandidate:(bool)arg1;
- (void)setTouchEvent:(id)arg1;
- (void)setUppercase:(bool)arg1;
- (id)string;
- (id)touchEvent;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _documentIdentifier;
    UITextInputMode * _documentInputMode;
    TIDocumentState * _documentState;
    TITextInputTraits * _textInputTraits;
}

@property (nonatomic, copy) NSUUID *documentIdentifier;
@property (nonatomic, retain) UITextInputMode *documentInputMode;
@property (nonatomic, retain) TIDocumentState *documentState;
@property (nonatomic, retain) TITextInputTraits *textInputTraits;

+ (id)stateForKeyboardState:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createDocumentStateIfNecessary;
- (void)dealloc;
- (id)description;
- (id)documentIdentifier;
- (id)documentInputMode;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1;
- (void)setDocumentInputMode:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setTextInputTraits:(id)arg1;
- (id)textInputTraits;

@end

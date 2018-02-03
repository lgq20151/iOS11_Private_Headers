/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {
    UIResponder<UITextInput> * _textView;
}

@property UIResponder<UITextInput> *textView;

- (void)invalidate;
- (bool)isCloseToCaret;
- (void)setTextView:(id)arg1;
- (void)startTimer;
- (id)textView;

@end

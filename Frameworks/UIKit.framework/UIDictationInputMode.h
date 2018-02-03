/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationInputMode : UIKeyboardInputMode {
    UIKeyboardInputMode * _currentInputModeForDictation;
    UITouch * _triggeringTouch;
}

@property (nonatomic, retain) UIKeyboardInputMode *currentInputModeForDictation;
@property (nonatomic, retain) UITouch *triggeringTouch;
@property (nonatomic, readonly) Class viewControllerClass;

+ (bool)currentInputModeSupportsDictation;

- (id)currentInputModeForDictation;
- (void)dealloc;
- (void)setCurrentInputModeForDictation:(id)arg1;
- (void)setTriggeringTouch:(id)arg1;
- (id)triggeringTouch;
- (Class)viewControllerClass;

@end

/* made by EzioChiu.
 */

@protocol UIKeyboardInput <NSObject>

@optional

- (bool)keyboardInput:(id <UIKeyboardInput>)arg1 shouldInsertText:(NSString *)arg2 isMarkedText:(bool)arg3;
- (bool)keyboardInput:(id <UIKeyboardInput>)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (bool)keyboardInputChanged:(id <UIKeyboardInput>)arg1;
- (void)keyboardInputChangedSelection:(id <UIKeyboardInput>)arg1;
- (bool)keyboardInputShouldDelete:(id <UIKeyboardInput>)arg1;

@end

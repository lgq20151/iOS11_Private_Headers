/* made by EzioChiu.
 */

@protocol UITextInput <UIKeyInput>

@required

- (long long)baseWritingDirectionForPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (UITextPosition *)beginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(UITextPosition *)arg1;
- (UITextRange *)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (UITextRange *)characterRangeByExtendingPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(UITextRange *)arg2;
- (long long)comparePosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)endOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(UITextRange *)arg1;
- (<UITextInputDelegate> *)inputDelegate;
- (UITextRange *)markedTextRange;
- (NSDictionary *)markedTextStyle;
- (long long)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 offset:(long long)arg2;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 farthestInDirection:(long long)arg2;
- (void)replaceRange:(UITextRange *)arg1 withText:(NSString *)arg2;
- (UITextRange *)selectedTextRange;
- (NSArray *)selectionRectsForRange:(UITextRange *)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(UITextRange *)arg2;
- (void)setInputDelegate:(id <UITextInputDelegate>)arg1;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(NSDictionary *)arg1;
- (void)setSelectedTextRange:(UITextRange *)arg1;
- (NSString *)textInRange:(UITextRange *)arg1;
- (UITextRange *)textRangeFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (<UITextInputTokenizer> *)tokenizer;
- (void)unmarkText;

@optional

- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)characterOffsetOfPosition:(UITextPosition *)arg1 withinRange:(UITextRange *)arg2;
- (void)dictationRecognitionFailed;
- (void)dictationRecordingDidEnd;
- (void)endFloatingCursor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)insertDictationResult:(NSArray *)arg1;
- (id)insertDictationResultPlaceholder;
- (UITextPosition *)positionWithinRange:(UITextRange *)arg1 atCharacterOffset:(long long)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (long long)selectionAffinity;
- (void)setSelectionAffinity:(long long)arg1;
- (bool)shouldChangeTextInRange:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (UIView *)textInputView;
- (NSDictionary *)textStylingAtPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end

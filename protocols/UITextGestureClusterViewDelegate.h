/* made by EzioChiu.
 */

@protocol UITextGestureClusterViewDelegate <UITextAutoscrolling, NSObject>

@required

- (bool)autoscrolled;
- (void)canBeginDragCursor:(UIDragRecognizer *)arg1;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (bool)containerAllowsSelectionTintOnly;
- (bool)containerIsPlainStyleAtom;
- (bool)containerIsTextField;
- (void)didEndSelectionInteraction;
- (struct CGPoint { double x1; double x2; })loupeGestureEndPoint;
- (bool)needsGestureUpdate;
- (void)notifyKeyboardSelectionChanged;
- (UITextRange *)rangeForTextReplacement:(UITextRange *)arg1;
- (void)resetWillHandoffLoupeMagnifier;
- (void)scheduleDictationReplacementsForAlternatives:(NSTextAlternatives *)arg1 range:(UITextRange *)arg2;
- (void)scheduleReplacementsForRange:(UITextRange *)arg1 withOptions:(unsigned long long)arg2;
- (void)scrollSelectionToVisible;
- (void)selectWordWithoutShowingCommands;
- (UITextSelectionView *)selectionView;
- (void)setAutoscrolled:(bool)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setGestureRecognizers;
- (void)setLoupeGestureEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsGestureUpdate:(bool)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (bool)useGesturesForEditableContent;
- (UIView *)view;
- (bool)viewCouldBecomeEditable:(UIResponder<UITextInput> *)arg1;
- (void)willBeginSelectionInteraction;
- (bool)willHandoffLoupeMagnifier;

@optional

- (bool)overrideGestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (bool)overrideGestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;

@end

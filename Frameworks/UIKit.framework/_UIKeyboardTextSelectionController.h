/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardTextSelectionController : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _caretRectForCursorPosition;
    UITextPosition * _cursorPosition;
    bool  _hasInteractionAssistant;
    bool  _hasSelectionInteractionAssistant;
    bool  _hasTextInputView;
    UITextRange * _initialSelection;
    UIResponder<UITextInput> * _inputDelegate;
    UITextRange * _selectionBase;
    long long  _selectionGranularity;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRectForCursorPosition;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRectForFirstSelectedPosition;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRectForLastSelectedPosition;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRectForLeftmostSelectedPosition;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRectForRightmostSelectedPosition;
@property (nonatomic, retain) UITextPosition *cursorPosition;
@property (nonatomic, readonly) bool hasCaretSelection;
@property (nonatomic, readonly) bool hasRangedSelection;
@property (nonatomic, retain) UITextRange *initialSelection;
@property (nonatomic, readonly) UIResponder<UITextInput> *inputDelegate;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic, retain) UITextRange *selectionBase;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic, readonly) <UISelectionInteractionAssistant> *selectionInteractionAssistant;
@property (nonatomic, readonly) UIView *textInputView;

- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)beginLoupeGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginLoupeMagnifierAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginRangedMagnifierAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginSelection;
- (void)beginSelectionChange;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint { double x1; double x2; })arg2 executionContext:(id)arg3;
- (void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(struct CGPoint { double x1; double x2; })arg3 executionContext:(id)arg4;
- (struct CGPoint { double x1; double x2; })boundedDeltaForTranslation:(struct CGPoint { double x1; double x2; })arg1 cursorLocationBase:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForCursorPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForFirstSelectedPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForLastSelectedPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForLeftmostSelectedPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForRightmostSelectedPosition;
- (id)cursorPosition;
- (bool)cursorPositionIsContainedByRange:(id)arg1;
- (void)dealloc;
- (void)endFloatingCursor;
- (void)endLoupeGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)endLoupeMagnifierAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)endRangedMagnifierAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)endSelection;
- (void)endSelectionChange;
- (bool)hasCaretSelection;
- (bool)hasRangedSelection;
- (id)initWithInputDelegate:(id)arg1;
- (id)initialSelection;
- (id)inputDelegate;
- (id)interactionAssistant;
- (void)resetCursorPosition;
- (void)restartSelection;
- (void)scrollSelectionToVisible;
- (void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)selectPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 executionContext:(id)arg3;
- (id)selectionBase;
- (void)selectionDidChange;
- (long long)selectionGranularity;
- (id)selectionInteractionAssistant;
- (void)setCaretRectForCursorPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCursorPosition:(id)arg1;
- (void)setInitialSelection:(id)arg1;
- (void)setRangedSelectionShouldShowGrabbers:(bool)arg1;
- (void)setSelectionBase:(id)arg1;
- (void)setSelectionGranularity:(long long)arg1;
- (void)showSelectionCommands;
- (void)switchToRangedSelection;
- (void)textDidChange;
- (id)textInputView;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateGestureRecognizers;
- (void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateLoupeGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateLoupeMagnifierAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateRangedMagnifierAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionRects;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2;
- (void)willHandoffLoupeMagnifier;

@end

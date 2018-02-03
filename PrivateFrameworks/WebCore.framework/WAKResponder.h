/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKResponder : NSObject

- (void)_forwardEvent:(id)arg1;
- (bool)acceptsFirstResponder;
- (bool)becomeFirstResponder;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertText:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (id)nextResponder;
- (bool)resignFirstResponder;
- (void)scrollWheel:(id)arg1;
- (void)touch:(id)arg1;
- (bool)tryToPerform:(SEL)arg1 with:(id)arg2;

@end

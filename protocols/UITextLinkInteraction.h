/* made by EzioChiu.
 */

@protocol UITextLinkInteraction

@required

- (void)cancelInteractionWithLink;
- (bool)isInteractingWithLink;
- (bool)mightHaveLinks;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end

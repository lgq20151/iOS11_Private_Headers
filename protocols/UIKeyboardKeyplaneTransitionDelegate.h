/* made by EzioChiu.
 */

@protocol UIKeyboardKeyplaneTransitionDelegate

@required

- (void)finishTransitionWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareForTransition;
- (void)transitionDidFinish:(bool)arg1;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;

@end

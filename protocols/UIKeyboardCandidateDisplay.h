/* made by EzioChiu.
 */

@protocol UIKeyboardCandidateDisplay <NSObject>

@required

- (bool)_needsBackdrop;
- (void)candidatesDidChange;
- (void)dimKeys:(NSDictionary *)arg1;
- (double)extendedViewAnimationDuration;
- (double)extendedViewHeight;
- (UIView<UIKeyboardCandidateList> *)inlineView;
- (bool)isExtended;
- (bool)isFloating;
- (bool)isSplit;
- (void)setCandidateBarCanExtend:(bool)arg1;
- (void)setCandidateViewExtended:(bool)arg1;
- (void)setInlineView:(UIView<UIKeyboardCandidateList> *)arg1;
- (void)setIsFloating:(bool)arg1;
- (bool)shouldUseKeyboardBackground:(UIView *)arg1;
- (void)updatePageControlStatus;

@end

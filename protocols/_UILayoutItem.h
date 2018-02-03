/* made by EzioChiu.
 */

@protocol _UILayoutItem <NSLayoutItem>

@required

- (NSISVariable *)_boundsHeightVariable;
- (NSISVariable *)_boundsWidthVariable;
- (NSISVariable *)_minXVariable;
- (NSISVariable *)_minYVariable;
- (void*)_referenceView;
- (NSMutableSet *)_uili_existingBaseFrameVariables;
- (NSMutableSet *)_uili_existingLayoutVariables;
- (bool)_uili_isFocusGuide;
- (NSISEngine *)_uili_observableLayoutEngineForBaseFrameVariables:(bool)arg1;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(bool)arg1;
- (bool)_uili_requiresObservationForVariable:(NSISVariable *)arg1;
- (void)_uili_stashLayoutVariableObservation:(NSObservation *)arg1 forVariable:(NSISVariable *)arg2;
- (NSLayoutYAxisAnchor *)bottomAnchor;
- (NSLayoutXAxisAnchor *)centerXAnchor;
- (NSLayoutYAxisAnchor *)centerYAnchor;
- (NSLayoutDimension *)heightAnchor;
- (NSLayoutXAxisAnchor *)leadingAnchor;
- (NSLayoutXAxisAnchor *)leftAnchor;
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (NSISVariable *)nsli_heightVariable;
- (NSISVariable *)nsli_minXVariable;
- (NSISVariable *)nsli_minYVariable;
- (NSISVariable *)nsli_widthVariable;
- (NSLayoutXAxisAnchor *)rightAnchor;
- (NSLayoutYAxisAnchor *)topAnchor;
- (NSLayoutXAxisAnchor *)trailingAnchor;
- (NSLayoutDimension *)widthAnchor;

@optional

- (NSISVariable *)_contentHeightVariable;
- (NSISVariable *)_contentWidthVariable;
- (NSISVariable *)nsli_contentHeightVariable;
- (NSISVariable *)nsli_contentWidthVariable;

@end

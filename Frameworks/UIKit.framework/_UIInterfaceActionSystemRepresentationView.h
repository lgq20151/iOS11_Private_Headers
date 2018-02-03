/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInterfaceActionSystemRepresentationView : UIInterfaceActionRepresentationView <UIInterfaceActionDisplayPropertyObserver> {
    NSSet * _displayedViews;
    NSArray * _displayedViewsPositioningConstraints;
    NSArray * _displayedViewsSpacingConstraints;
    _UIInterfaceActionLabelsPropertyView * _labelsView;
    _UIInterfaceActionImagePropertyView * _leadingImageView;
    _UIInterfaceActionImagePropertyView * _trailingImageView;
    NSSet * _viewsToDisplayWhenContentsVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *displayedViews;
@property (nonatomic, readonly) NSArray *displayedViewsPositioningConstraints;
@property (nonatomic, readonly) NSArray *displayedViewsSpacingConstraints;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIInterfaceActionLabelsPropertyView *labelsView;
@property (nonatomic, readonly) _UIInterfaceActionImagePropertyView *leadingImageView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UIInterfaceActionImagePropertyView *trailingImageView;
@property (nonatomic, retain) NSSet *viewsToDisplayWhenContentsVisible;

- (void).cxx_destruct;
- (void)_activateDisplayedViewsConstraints;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToDisplayedViews;
- (void)_arrangeDisplayedViews;
- (id)_constraintsForHorizontallyCenteringLabelsView;
- (id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(bool)arg1;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(bool)arg1;
- (id)_constraintsForVeritcallyCenteringViews:(id)arg1;
- (id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg1;
- (bool)_displayedViewsConstraintsNeedsLoading;
- (bool)_hasLoadedContents;
- (id)_horizontalEdgeReference;
- (void)_invalidateDisplayedViewsConstraints;
- (bool)_isDisplayingLeadingImageView;
- (bool)_isDisplayingTrailingImageView;
- (void)_loadConstraintsForDisplayedViews;
- (void)_loadConstraintsForLabelsAndImagesDisplay;
- (void)_loadConstraintsForLabelsOnlyDisplay;
- (void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
- (void)_reloadViewsToDisplayWhenContentsVisible;
- (void)_removeAllDisplayedViews;
- (void)_updateDisplayedViewsConstraintsVisualStyleConstants;
- (id)displayedViews;
- (id)displayedViewsPositioningConstraints;
- (id)displayedViewsSpacingConstraints;
- (id)initWithAction:(id)arg1;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (id)labelsView;
- (id)leadingImageView;
- (void)loadContents;
- (void)setDisplayedViews:(id)arg1;
- (void)setViewsToDisplayWhenContentsVisible:(id)arg1;
- (id)trailingImageView;
- (void)updateConstraints;
- (void)updateContentsInsertedIntoHierarchy;
- (id)viewsToDisplayWhenContentsVisible;

@end

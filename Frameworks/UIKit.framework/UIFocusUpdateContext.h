/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusUpdateContext : NSObject {
    UIScrollView * _commonScrollView;
    _UIFocusItemInfo * _destinationItemInfo;
    double  _destinationViewDistanceOffscreen;
    _UIFocusMapSearchInfo * _focusMapSearchInfo;
    _UIFocusMovementInfo * _focusMovement;
    UIFocusGuide * _focusedGuide;
    bool  _hasValidated;
    <UIFocusEnvironment> * _initialDestinationEnvironment;
    bool  _isValid;
    _UIDebugLogReport * _preferredFocusReport;
    NSArray * _regionMapSnapshots;
    UIImage * _regionMapSnapshotsVisualRepresentation;
    <_UIFocusUpdateRequesting> * _request;
    bool  _shouldUpdateDestinationItem;
    _UIFocusItemInfo * _sourceItemInfo;
    bool  _sourceItemMayRemainFocused;
    _UIDebugIssueReport * _validationReport;
}

@property (getter=_commonScrollView, setter=_setCommonScrollView:, nonatomic, retain) UIScrollView *commonScrollView;
@property (getter=_destinationItemInfo, nonatomic, readonly, copy) _UIFocusItemInfo *destinationItemInfo;
@property (getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:, nonatomic) double destinationViewDistanceOffscreen;
@property (nonatomic, readonly) unsigned long long focusHeading;
@property (getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:, nonatomic, retain) _UIFocusMapSearchInfo *focusMapSearchInfo;
@property (getter=_focusMovement, nonatomic, readonly) _UIFocusMovementInfo *focusMovement;
@property (getter=_focusVelocity, nonatomic, readonly) struct CGVector { double x1; double x2; } focusVelocity;
@property (getter=_focusedGuide, nonatomic, readonly) UIFocusGuide *focusedGuide;
@property (getter=_initialDestinationEnvironment, nonatomic, readonly) <UIFocusEnvironment> *initialDestinationEnvironment;
@property (nonatomic, readonly) <UIFocusItem> *nextFocusedItem;
@property (nonatomic, readonly) UIView *nextFocusedView;
@property (getter=_preferredFocusReport, setter=_setPreferredFocusReport:, nonatomic, retain) _UIDebugLogReport *preferredFocusReport;
@property (nonatomic, readonly) <UIFocusItem> *previouslyFocusedItem;
@property (nonatomic, readonly) UIView *previouslyFocusedView;
@property (getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:, nonatomic, retain) NSArray *regionMapSnapshots;
@property (getter=_regionMapSnapshotsVisualRepresentation, nonatomic, readonly) UIImage *regionMapSnapshotsVisualRepresentation;
@property (getter=_request, nonatomic, readonly) <_UIFocusUpdateRequesting> *request;
@property (getter=_sourceItemInfo, nonatomic, readonly, copy) _UIFocusItemInfo *sourceItemInfo;
@property (getter=_validationReport, setter=_setValidationReport:, nonatomic, retain) _UIDebugIssueReport *validationReport;

+ (id)_defaultValidationReportFormatter;

- (void).cxx_destruct;
- (id)_commonScrollView;
- (id)_destinationItemInfo;
- (double)_destinationViewDistanceOffscreen;
- (void)_didUpdateFocus;
- (id)_focusMapSearchInfo;
- (id)_focusMapSnapshotDebugInfoArray;
- (id)_focusMovement;
- (struct CGVector { double x1; double x2; })_focusVelocity;
- (id)_focusedGuide;
- (id)_initWithContext:(id)arg1;
- (id)_initWithFocusMovementRequest:(id)arg1 nextFocusedItem:(id)arg2;
- (id)_initWithFocusUpdateRequest:(id)arg1;
- (id)_initialDestinationEnvironment;
- (bool)_isValidInFocusSystem:(id)arg1;
- (id)_preferredFocusReport;
- (id)_publicRegionMapSnapshots;
- (id)_regionMapSnapshots;
- (id)_regionMapSnapshotsVisualRepresentation;
- (id)_request;
- (void)_setCommonScrollView:(id)arg1;
- (void)_setDestinationViewDistanceOffscreen:(double)arg1;
- (void)_setFocusMapSearchInfo:(id)arg1;
- (void)_setFocusedGuide:(id)arg1;
- (void)_setInitialDestinationEnvironment:(id)arg1;
- (void)_setPreferredFocusReport:(id)arg1;
- (void)_setRegionMapSnapshots:(id)arg1;
- (void)_setSourceItemInfo:(id)arg1;
- (void)_setValidationReport:(id)arg1;
- (id)_sourceItemInfo;
- (void)_updateDestinationItemIfNeeded;
- (bool)_validate;
- (id)_validationReport;
- (void)_willUpdateFocusFromFocusedItem:(id)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (unsigned long long)focusHeading;
- (id)init;
- (id)nextFocusedItem;
- (id)nextFocusedView;
- (id)previouslyFocusedItem;
- (id)previouslyFocusedView;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting> {
    UIView * _blinderView;
    bool  _blinderViewEnabled;
    UIView * _initialSnapshotView;
    UIView * _updatedSnapshotView;
}

@property (nonatomic, retain) UIView *blinderView;
@property (nonatomic) bool blinderViewEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *initialSnapshotView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *updatedSnapshotView;

- (void).cxx_destruct;
- (id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(bool)arg2;
- (id)blinderView;
- (bool)blinderViewEnabled;
- (void)finalizeHighlightForPreviewingContext:(id)arg1;
- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;
- (id)initialSnapshotView;
- (void)prepareHighlightWithPreviewingContext:(id)arg1;
- (void)setBlinderView:(id)arg1;
- (void)setBlinderViewEnabled:(bool)arg1;
- (void)setInitialSnapshotView:(id)arg1;
- (void)setUpdatedSnapshotView:(id)arg1;
- (id)updatedSnapshotView;

@end

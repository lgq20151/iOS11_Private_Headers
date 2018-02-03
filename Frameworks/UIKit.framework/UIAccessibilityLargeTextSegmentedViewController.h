/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityLargeTextSegmentedViewController : UIViewController {
    UIScrollView * _mainScrollView;
    UISegment * _originalSelectedSegment;
    NSMutableArray * _segmentButtons;
    UISegmentedControl * _segmentedControl;
    NSArray * _segments;
}

@property (nonatomic, retain) UIScrollView *mainScrollView;
@property (nonatomic, retain) UISegment *originalSelectedSegment;
@property (nonatomic, retain) NSMutableArray *segmentButtons;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic, retain) NSArray *segments;

- (void).cxx_destruct;
- (void)_configureSegmentViews;
- (void)_orientationChanged:(id)arg1;
- (void)buttonPress:(id)arg1;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchUp:(id)arg1;
- (id)initWithSegmentedControl:(id)arg1 segments:(id)arg2 delegate:(id)arg3;
- (id)mainScrollView;
- (id)originalSelectedSegment;
- (id)segmentButtons;
- (id)segmentFromSegment:(id)arg1;
- (id)segmentedControl;
- (id)segments;
- (void)setMainScrollView:(id)arg1;
- (void)setOriginalSelectedSegment:(id)arg1;
- (void)setSegmentButtons:(id)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)viewDidLayoutSubviews;

@end

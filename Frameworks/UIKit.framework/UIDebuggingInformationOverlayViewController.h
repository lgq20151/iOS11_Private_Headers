/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingInformationOverlayViewController : UIViewController <UISplitViewControllerDelegate> {
    UIDynamicAnimator * _animator;
    UIDynamicBehavior * _behavior;
    NSArray * _bigConstraints;
    UIView * _containerView;
    NSLayoutConstraint * _heightConstraint;
    bool  _isFullscreen;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    UIDebuggingInformationRootTableViewController * _rootTableViewController;
    UIView * _shadowView;
    NSArray * _smallConstraints;
    UISplitViewController * _splitViewController;
    UIDebuggingInformationStickyBehavior * _stickyBehavior;
    UIDebuggingZoomViewController * _zoomViewController;
}

@property (nonatomic, retain) UIDynamicAnimator *animator;
@property (nonatomic, retain) UIDynamicBehavior *behavior;
@property (nonatomic, retain) NSArray *bigConstraints;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) bool isFullscreen;
@property struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, retain) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic, retain) UIView *shadowView;
@property (nonatomic, retain) NSArray *smallConstraints;
@property (nonatomic, retain) UISplitViewController *splitViewController;
@property (nonatomic, retain) UIDebuggingInformationStickyBehavior *stickyBehavior;
@property (nonatomic, retain) UIDebuggingZoomViewController *zoomViewController;

- (void).cxx_destruct;
- (id)animator;
- (id)behavior;
- (id)bigConstraints;
- (id)containerView;
- (void)didReceiveGesture:(id)arg1;
- (id)heightConstraint;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isFullscreen;
- (struct CGPoint { double x1; double x2; })offset;
- (id)rootTableViewController;
- (void)setAnimator:(id)arg1;
- (void)setBehavior:(id)arg1;
- (void)setBigConstraints:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setIsFullscreen:(bool)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRootTableViewController:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setSmallConstraints:(id)arg1;
- (void)setSplitViewController:(id)arg1;
- (void)setStickyBehavior:(id)arg1;
- (void)setZoomViewController:(id)arg1;
- (id)shadowView;
- (id)smallConstraints;
- (id)splitViewController;
- (bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (id)stickyBehavior;
- (void)toggleFullscreen;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)zoomViewController;

@end

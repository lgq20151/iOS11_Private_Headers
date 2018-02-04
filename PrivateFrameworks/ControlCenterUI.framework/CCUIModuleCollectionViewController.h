/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIModuleCollectionViewController : UIViewController <CCUIContentModuleContainerViewControllerDelegate, CCUILayoutViewLayoutSource, CCUIModuleInstanceManagerObserver, CCUIModuleSettingsManagerObserver, CCUISafeAppearancePropagationProvider> {
    NSHashTable * _currentModules;
    <CCUIModuleCollectionViewControllerDelegate> * _delegate;
    NSHashTable * _expandedModules;
    CCUIControlCenterPositionProvider * _landscapePositionProvider;
    CCUILayoutOptions * _layoutOptions;
    NSObject<OS_dispatch_group> * _moduleCloseDispatchGroup;
    NSDictionary * _moduleContainerViewByIdentifier;
    CCUIModuleInstanceManager * _moduleManager;
    NSDictionary * _moduleViewControllerByIdentifier;
    CCUIControlCenterPositionProvider * _portraitPositionProvider;
    CCUIModuleSettingsManager * _settingsManager;
    CCUIExpandedModuleBackgroundView * _sharedExpandedModuleBackgroundView;
}

@property (nonatomic, readonly) NSArray *childViewControllersForAppearancePropagation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIModuleCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long expandedModuleCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CCUIModuleCollectionView *moduleCollectionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activePositionProvider;
- (id)_currentLayoutOptions;
- (long long)_interfaceOrientation;
- (id)_moduleInstances;
- (void)_populateModuleViewControllers;
- (id)_positionProviderForInterfaceOrientation:(long long)arg1;
- (void)_refreshPositionProviders;
- (void)_removeAndTearDownModuleViewControllerFromHierarchy:(id)arg1;
- (id)_setupAndAddModuleViewControllerToHierarchy:(id)arg1;
- (bool)_shouldApplyBackgroundEffects;
- (id)_sizesForModuleIdentifiers:(id)arg1 moduleInstanceByIdentifier:(id)arg2 interfaceOrientation:(long long)arg3;
- (void)_updateEnabledModuleIdentifiers;
- (void)_updateModuleControllers;
- (id)backgroundViewForContentModuleContainerViewController:(id)arg1;
- (id)childViewControllersForAppearancePropagation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })compactModeFrameForContentModuleContainerViewController:(id)arg1;
- (bool)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (id)delegate;
- (void)dismissExpandedModuleAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissPresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)expandModuleWithIdentifier:(id)arg1;
- (unsigned long long)expandedModuleCount;
- (id)initWithModuleInstanceManager:(id)arg1;
- (bool)isAtMaxHeight;
- (bool)isModuleExpandedForIdentifier:(id)arg1;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })layoutSizeForLayoutView:(id)arg1;
- (struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })layoutView:(id)arg1 layoutRectForSubview:(id)arg2;
- (void)loadView;
- (id)moduleCollectionView;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)orderedEnabledModuleIdentifiersChangedForSettingsManager:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)queryAllTopLevelBlockingGestureRecognizers;
- (id)relevantSnapHeightsForOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModuleCollectionView:(id)arg1;
- (bool)shouldApplyBackgroundEffectsForContentModuleContainerViewController:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)willBecomeActive;
- (void)willResignActive;

@end
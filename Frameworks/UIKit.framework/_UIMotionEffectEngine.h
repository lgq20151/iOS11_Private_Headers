/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {
    bool  _allAnalyzersAreCentered;
    _UILazyMapTable * _analyzerSettingsToAnalyzers;
    NSMapTable * _analyzersToEffects;
    CADisplayLink * _displayLink;
    _UIAssociationTable * _effectViewAssociationTable;
    _UIMotionEffectEventProvider * _eventProvider;
    long long  _eventProviderStatus;
    bool  _generatingUpdates;
    bool  _hasAppliedAtLeastOneUpdateSinceStarting;
    bool  _hasReceivedAtLeastOneEventSinceStarting;
    bool  _isPendingReset;
    _UIMotionEffectEvent * _lastEvent;
    _UIMotionEffectEngineLogger * _motionLogger;
    _UIMotionEffectEvent * _pendingEvent;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingEventLock;
    bool  _pendingSlowDown;
    int  _screenDimmingNotificationToken;
    bool  _slowUpdatesEnabled;
    NSMutableSet * _suspendReasons;
    NSMapTable * _suspendedViewsToEffectSets;
    long long  _targetInterfaceOrientation;
    int  _thermalNotificationToken;
}

@property (setter=_setTargetInterfaceOrientation:, nonatomic) long long _targetInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *suspensionReasons;

+ (Class)_analyzerClass;
+ (Class)_eventProviderClass;
+ (bool)_motionEffectsEnabled;
+ (bool)_motionEffectsSupported;

- (void).cxx_destruct;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (void)_handleLatestDeviceMotion;
- (bool)_hasMotionEffectsForView:(id)arg1;
- (bool)_isSuspended;
- (bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;
- (bool)_motionEffectsAreSuspendedForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)_setTargetInterfaceOrientation:(long long)arg1;
- (bool)_shouldGenerateUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (void)_stopGeneratingUpdates;
- (long long)_targetInterfaceOrientation;
- (void)_toggleSlowUpdates;
- (void)_unapplyAllEffects;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)_updateDisplayLinkInterval;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)beginSuspendingForReason:(id)arg1;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)endSuspendingForReason:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (id)init;
- (void)resetMotionAnalysis;
- (id)suspensionReasons;
- (void)updateEventProviderStatus:(long long)arg1;
- (void)updateWithEvent:(id)arg1;

@end

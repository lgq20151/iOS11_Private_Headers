/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetsSceneSettings : PXSettings {
    bool  _animateContentByDefault;
    bool  _enableImagePreheating;
    double  _transitionDuration;
}

@property (nonatomic) bool animateContentByDefault;
@property (nonatomic) bool enableImagePreheating;
@property (nonatomic) double transitionDuration;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)animateContentByDefault;
- (bool)enableImagePreheating;
- (id)parentSettings;
- (void)setAnimateContentByDefault:(bool)arg1;
- (void)setDefaultValues;
- (void)setEnableImagePreheating:(bool)arg1;
- (void)setTransitionDuration:(double)arg1;
- (double)transitionDuration;

@end

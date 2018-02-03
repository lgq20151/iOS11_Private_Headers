/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPreferencesController : NSObject

@property long long handBias;
@property (nonatomic, readonly) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;

+ (id)sharedPreferencesController;

- (void)_configurePreferences;
- (bool)allEnabledInputModesAreValid;
- (bool)boolForKey:(int)arg1;
- (bool)boolForPreferenceKey:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (long long)handBias;
- (id)init;
- (bool)isFirstReachableKeyboardInteraction;
- (bool)isPreferenceKeyLockedDown:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performedFirstReachableKeyboardInteraction;
- (id)preferencesActions;
- (void)preferencesControllerChanged:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (double)rivenSizeFactor:(double)arg1;
- (void)saveInputModes:(id)arg1;
- (void)setEnabledDictationLanguages:(id)arg1;
- (void)setHandBias:(long long)arg1;
- (void)setLanguageAwareInputModeLastUsed:(id)arg1;
- (void)setLastUsedDictationLanguages:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (bool)spaceConfirmationEnabled;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (bool)typologyEnabled;
- (id)valueForKey:(int)arg1;
- (id)valueForPreferenceKey:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CoreUI : NSObject

+ (void)_determineCompatibilityMode;
+ (bool)_hasDarkMenuBarForLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (void)_invalidateVisibleWindows;
+ (bool)_isCurrentLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (void)_setCurrentSystemThemeLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (void)_setThemeLookDelegate:(id)arg1;
+ (id)_themeLookDelegate;
+ (void)_updateMenuBarDrawingStyleForLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (void)changeToLook:(struct _themelook { long long x1; char *x2; }*)arg1;
+ (long long)currentLookGradation;
+ (struct _themelook { long long x1; char *x2; }*)currentSystemThemeLook;
+ (long long)lookCongruencyForObject:(id)arg1;
+ (long long)maximumLookGradation;

@end

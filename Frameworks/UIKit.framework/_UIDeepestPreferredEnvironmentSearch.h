/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDeepestPreferredEnvironmentSearch : NSObject {
    bool  _allowsFocusRestoration;
    _UIDebugLogReport * _debugReport;
}

@property (nonatomic) bool allowsFocusRestoration;
@property (nonatomic, retain) _UIDebugLogReport *debugReport;

- (void).cxx_destruct;
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2;
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1;
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2;
- (void)_reportFoundFocusableItem:(id)arg1;
- (void)_reportSearchingEnvironment:(id)arg1;
- (void)_reportStartingSearch;
- (bool)allowsFocusRestoration;
- (id)debugReport;
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1;
- (id)deepestPreferredFocusableItemForEnvironment:(id)arg1 inFocusSystem:(id)arg2;
- (void)setAllowsFocusRestoration:(bool)arg1;
- (void)setDebugReport:(id)arg1;

@end

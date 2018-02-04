/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSModule : NSObject <PTSSectionObserver, _UISettingsKeyPathObserver> {
    NSMutableArray * _allSections;
    NSMutableArray * _enabledSections;
    NSHashTable * _observers;
    _UISettings * _settings;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *allSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *enabledSections;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UISettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)moduleWithSettings:(id)arg1;
+ (id)moduleWithTitle:(id)arg1 contents:(id)arg2;
+ (id)sectionWithRows:(id)arg1;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3;

- (void).cxx_destruct;
- (void)_addSection:(id)arg1;
- (void)_addSubmodule:(id)arg1;
- (id)_settingsForSection:(id)arg1;
- (bool)_shouldEnableSection:(id)arg1;
- (void)_updateEnabledSections;
- (void)addObserver:(id)arg1;
- (id)allSections;
- (void)dealloc;
- (void)deleteRowAtIndexPath:(id)arg1;
- (id)destinationForRowAtIndexPath:(id)arg1 withProposedDestination:(id)arg2;
- (id)enabledSections;
- (void)enumerateAllRowsUsingBlock:(id /* block */)arg1;
- (void)enumerateEnabledRowsUsingBlock:(id /* block */)arg1;
- (bool)hasEnabledEditableRows;
- (id)indexPathForRow:(id)arg1;
- (id)initWithContents:(id)arg1;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (unsigned long long)numberOfSections;
- (void)removeObserver:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)sectionDidReload:(id)arg1;
- (void)setAllSections:(id)arg1;
- (void)setEnabledSections:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)title;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_restoreDefaultsModule;

@end
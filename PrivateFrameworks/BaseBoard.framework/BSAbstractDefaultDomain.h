/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAbstractDefaultDomain : NSObject {
    bool  _boundDefaults;
    NSMutableDictionary * _defaultKeyToDefaultValue;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableSet * _observerQueue_observers;
    NSUserDefaults * _userDefaults;
}

+ (void)__assignPropertyImplementations:(id)arg1;
+ (Class)__classFromPropertyType:(id)arg1;
+ (id)__getPropertyMetadataForProperty:(struct objc_property { }*)arg1;
+ (bool)__isPropertyTypeValid:(BOOL)arg1 class:(Class)arg2;
+ (void)__processPropertyMetadata:(id)arg1;
+ (bool)__useDynamicMethodResolution;
+ (void)initialize;

- (void)_addObserver:(id)arg1;
- (void)_bindAndRegisterDefaults;
- (void)_bindDefaultsIfNecessary;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 options:(unsigned long long)arg4;
- (id)_defaultKeyFromPropertyName:(id)arg1;
- (id)_initWithDefaults:(id)arg1;
- (id)_initWithDomain:(id)arg1;
- (bool)_isCollectionEmpty:(id)arg1;
- (id)_propertyFromSelector:(SEL)arg1;
- (void)_removeObserver:(id)arg1;
- (void)_setUserDefaults:(id)arg1;
- (id)_store;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)observeDefault:(id)arg1 onQueue:(id)arg2 withBlock:(id /* block */)arg3;
- (id)observeDefaults:(id)arg1 onQueue:(id)arg2 withBlock:(id /* block */)arg3;
- (void)resetAllDefaults;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)synchronizeDefaults;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarItemStack : NSObject {
    <_UINavigationItemChangeObserver> * _changeObserver;
    NSMutableArray * _items;
    NSArray * _previousItems;
    int  _state;
    _UINavigationBarTransitionAssistant * _transitionAssistant;
}

@property (nonatomic, readonly) UINavigationItem *backItem;
@property (nonatomic) <_UINavigationItemChangeObserver> *changeObserver;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) UINavigationItem *previousBackItem;
@property (nonatomic, readonly) UINavigationItem *previousTopItem;
@property (getter=isPushingOrPopping, nonatomic, readonly) bool pushingOrPopping;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) UINavigationItem *topItem;
@property (nonatomic, readonly) _UINavigationBarTransitionAssistant *transitionAssistant;

- (void).cxx_destruct;
- (void)_completeTransition;
- (long long)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2;
- (void)_prepareTransitionWithAssistant:(id)arg1;
- (id)_shim_popNestedNavigationItem;
- (void)_shim_pushNestedNavigationItem:(id)arg1;
- (void)_updateChangeObserversFor:(id)arg1;
- (id)backItem;
- (void)cancelOperation;
- (id)changeObserver;
- (void)completeOperation;
- (id)description;
- (long long)effectiveDisplayModeForItemInCurrentStack:(id)arg1;
- (long long)effectiveDisplayModeForItemInPreviousStack:(id)arg1;
- (id)init;
- (id)initWithItems:(id)arg1;
- (bool)isPushingOrPopping;
- (long long)itemCount;
- (id)items;
- (void)iterateItems:(id /* block */)arg1;
- (void)popItemWithTransitionAssistant:(id)arg1;
- (id)previousBackItem;
- (id)previousTopItem;
- (void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2;
- (void)setChangeObserver:(id)arg1;
- (void)setItems:(id)arg1 withTransitionAssistant:(id)arg2;
- (bool)stackItemsAreEqualTo:(id)arg1;
- (int)state;
- (id)topItem;
- (id)transitionAssistant;

@end

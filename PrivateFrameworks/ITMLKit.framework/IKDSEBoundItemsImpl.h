/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDSEBoundItemsImpl : NSObject <IKDOMBindingControllerDelegate, IKDataSourceElementImplementing, IKJSDataItemObserver> {
    IKDOMBindingController * _bindingController;
    NSDictionary * _childrenByItemID;
    IKAppDataSet * _dataSet;
    IKDataSourceElement * _dataSourceElement;
    NSMutableDictionary * _instantiatedDOMElementsByItemID;
    IKElementChangeSet * _itemsChangeset;
    NSArray * _prototypes;
    NSMutableDictionary * _proxyChildrenByItemID;
    NSDictionary * _usedPrototypesByType;
    bool  _visibleIndexRangeIsDirty;
    NSMutableIndexSet * _visibleIndexSet;
}

@property (nonatomic, readonly) IKDOMBindingController *bindingController;
@property (nonatomic, copy) NSDictionary *childrenByItemID;
@property (nonatomic, retain) IKAppDataSet *dataSet;
@property (nonatomic, readonly) IKDataSourceElement *dataSourceElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IKElementChangeSet *itemsChangeset;
@property (nonatomic, retain) NSArray *prototypes;
@property (nonatomic, retain) NSMutableDictionary *proxyChildrenByItemID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *usedPrototypesByType;
@property (nonatomic, retain) NSMutableIndexSet *visibleIndexSet;

+ (bool)_isPrototypeDOMElement:(id)arg1 validForReuseWithID:(id)arg2;
+ (bool)areItemsBoundForBinding:(id)arg1;

- (void).cxx_destruct;
- (id)_appDataItemFromJSDataItem:(id)arg1 prototype:(id)arg2;
- (void)_appendAutoHighlightedIndexesWithIndex:(long long)arg1;
- (void)_appendUpdatedIndexesWithIndex:(long long)arg1;
- (void)_appendVisibleIndexSetWithIndex:(long long)arg1;
- (void)_applyAutoHighlightedIndexesValueWithIndexes:(id)arg1 domBindingController:(id)arg2;
- (void)_applyItemsValueWithItems:(id)arg1 domBindingController:(id)arg2;
- (void)_applyUpdatedIndexesValueWithIndexes:(id)arg1 domBindingController:(id)arg2;
- (void)_applyVisibleIndexRangeValueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 domBindingController:(id)arg2;
- (id)_instantiateItemAtIndex:(long long)arg1 domBindingController:(id)arg2;
- (id)_itemsPropertyPath;
- (id)_prototypeForType:(id)arg1;
- (id)actualElementForProxyElement:(id)arg1;
- (id)additionalKeysToResolveForDOMBindingController:(id)arg1;
- (void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(id /* block */)arg2;
- (id)bindingController;
- (id)childrenByItemID;
- (void)configureUpdatesWithImplementation:(id)arg1;
- (void)dataItem:(id)arg1 didChangeSubPropertyPathWithString:(id)arg2 forPropertyPathWithString:(id)arg3 subscriptIndex:(long long)arg4;
- (id)dataSet;
- (id)dataSourceElement;
- (bool)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3;
- (void)domBindingController:(id)arg1 didLoadBinding:(id)arg2;
- (void)domBindingController:(id)arg1 didResolveKeys:(id)arg2;
- (bool)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2;
- (bool)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2;
- (id)elementForItemAtIndex:(long long)arg1;
- (long long)indexOfItemForChildElement:(id)arg1;
- (id)initWithDataSourceElement:(id)arg1;
- (void)initializeWithElementFactory:(id)arg1;
- (id)itemsChangeset;
- (void)loadIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (id)prototypes;
- (id)proxyChildrenByItemID;
- (void)resetUpdates;
- (void)setChildrenByItemID:(id)arg1;
- (void)setDataSet:(id)arg1;
- (void)setItemsChangeset:(id)arg1;
- (void)setPrototypes:(id)arg1;
- (void)setProxyChildrenByItemID:(id)arg1;
- (void)setUsedPrototypesByType:(id)arg1;
- (void)setVisibleIndexSet:(id)arg1;
- (void)teardown;
- (void)unloadIndex:(long long)arg1;
- (void)updateStylesUsingUpdater:(id /* block */)arg1;
- (id)usedPrototypesByType;
- (id)visibleIndexSet;

@end

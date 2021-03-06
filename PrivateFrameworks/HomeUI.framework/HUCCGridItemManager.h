/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCGridItemManager : HFItemManager {
    HFItemProvider<HUCCFavoriteItemProvider> * _favoriteItemProvider;
    unsigned long long  _itemType;
    unsigned long long  _maximumNumberOfItems;
}

@property (nonatomic, retain) HFItemProvider<HUCCFavoriteItemProvider> *favoriteItemProvider;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic) unsigned long long maximumNumberOfItems;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)_itemForSorting;
- (id)favoriteItemProvider;
- (id)initWithDelegate:(id)arg1 itemType:(unsigned long long)arg2;
- (unsigned long long)itemType;
- (unsigned long long)maximumNumberOfItems;
- (void)reloadForMaximumNumberOfItemsChange;
- (void)setFavoriteItemProvider:(id)arg1;
- (void)setMaximumNumberOfItems:(unsigned long long)arg1;

@end

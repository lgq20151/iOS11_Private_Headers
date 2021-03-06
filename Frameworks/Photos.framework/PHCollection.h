/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollection : PHObject {
    NSDate * _creationDate;
    bool  _customSortAscending;
    int  _customSortKey;
    unsigned long long  _estimatedPhotosCount;
    unsigned long long  _estimatedVideosCount;
    NSString * _localizedSubtitle;
}

@property (nonatomic, readonly) bool canContainAssets;
@property (nonatomic, readonly) bool canContainCollections;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) bool customSortAscending;
@property (nonatomic, readonly) int customSortKey;
@property (nonatomic, readonly) unsigned long long estimatedPhotosCount;
@property (nonatomic, readonly) unsigned long long estimatedVideosCount;
@property (nonatomic, readonly) bool hasLocalizedTitle;
@property (nonatomic, readonly) bool hasLocationInfo;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;

+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (bool)canContainAssets;
- (bool)canContainCollections;
- (bool)canPerformEditOperation:(long long)arg1;
- (unsigned long long)collectionFixedOrderPriority;
- (bool)collectionHasFixedOrder;
- (id)creationDate;
- (bool)customSortAscending;
- (int)customSortKey;
- (id)description;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (bool)hasLocalizedTitle;
- (bool)hasLocationInfo;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localizedSubtitle;
- (id)localizedTitle;

@end

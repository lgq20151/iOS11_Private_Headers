/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoRepresentativeNameInfo : NSObject {
    bool  _addCountyIfNeeded;
    bool  _allEntriesAtHome;
    bool  _allEntriesMatchHomeForOrderType;
    NSMutableOrderedSet * _geoPlaces;
    unsigned long long  _matchingCount;
    NSString * _name;
    NSMutableOrderedSet * _remainingGeoPlaces;
    unsigned long long  _type;
}

@property (nonatomic) bool addCountyIfNeeded;
@property (nonatomic) bool allEntriesAtHome;
@property (nonatomic) bool allEntriesMatchHomeForOrderType;
@property (nonatomic, readonly) NSMutableOrderedSet *geoPlaces;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic) unsigned long long matchingCount;
@property (nonatomic, readonly, copy) NSNumber *minimumArea;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSMutableOrderedSet *remainingGeoPlaces;
@property (nonatomic) unsigned long long type;

- (void)_addResourceKeys:(id)arg1 toTypeMap:(id)arg2 forOrderType:(unsigned long long)arg3 countryCode:(id)arg4;
- (bool)_administrativeAreaCode:(id)arg1 supportedForOrderType:(unsigned long long)arg2;
- (bool)_currentLanguageSupportsModifiersForOrderType:(unsigned long long)arg1;
- (id)_resourceKeysForOrderType:(unsigned long long)arg1 countryCode:(id)arg2 administrativeAreaCode:(id)arg3;
- (id)_typeKeyForOrderType:(unsigned long long)arg1 countryCode:(id)arg2;
- (bool)addCountyIfNeeded;
- (void)addGeoPlace:(id)arg1;
- (void)addGeoPlaces:(id)arg1;
- (bool)allEntriesAtHome;
- (bool)allEntriesMatchHomeForOrderType;
- (void)clearGeoPlaces;
- (void)dealloc;
- (id)description;
- (id)geoPlaces;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;
- (id)localizedName;
- (unsigned long long)matchingCount;
- (id)minimumArea;
- (id)name;
- (void)prepareRemainingGeoPlaces;
- (id)remainingGeoPlaces;
- (void)removeGeoPlacesFromRemaining:(id)arg1;
- (void)setAddCountyIfNeeded:(bool)arg1;
- (void)setAllEntriesAtHome:(bool)arg1;
- (void)setAllEntriesMatchHomeForOrderType:(bool)arg1;
- (void)setMatchingCount:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)updateWithAddedNameInfo:(id)arg1;

@end
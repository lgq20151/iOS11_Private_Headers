/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLAdTileInfo : NSObject <NFLFeedTileInfo> {
    long long  _adType;
    NSString * _adUnitIdentifier;
    bool  _appearedOnScreen;
    bool  _appearedWithAd;
    bool  _isDisplayingAd;
    bool  _isOnScreen;
}

@property (nonatomic) long long adType;
@property (nonatomic, retain) NSString *adUnitIdentifier;
@property (nonatomic) bool appearedOnScreen;
@property (nonatomic) bool appearedWithAd;
@property (nonatomic, readonly) unsigned long long bookmarkOffsetType;
@property (nonatomic, readonly) bool bookmarkable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool isDisplayingAd;
@property (nonatomic) bool isOnScreen;
@property (nonatomic, readonly) bool pageable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tileInfoType;
@property (nonatomic, readonly) NSArray *underlyingFeedElements;

+ (long long)adTypeForIdentifier:(id)arg1;
+ (id)identifierForAdType:(long long)arg1;
+ (id)identifierPrefix;

- (void).cxx_destruct;
- (long long)adType;
- (id)adUnitIdentifier;
- (bool)appearedOnScreen;
- (bool)appearedWithAd;
- (unsigned long long)bookmarkOffsetType;
- (bool)bookmarkable;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAdType:(long long)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isDisplayingAd;
- (bool)isEqual:(id)arg1;
- (bool)isOnScreen;
- (bool)pageable;
- (void)setAdType:(long long)arg1;
- (void)setAdUnitIdentifier:(id)arg1;
- (void)setAppearedOnScreen:(bool)arg1;
- (void)setAppearedWithAd:(bool)arg1;
- (void)setIsDisplayingAd:(bool)arg1;
- (void)setIsOnScreen:(bool)arg1;
- (unsigned long long)tileInfoType;
- (id)underlyingFeedElements;

@end
/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitInfoLabelView : _MKUILabel {
    MKArtworkDataSourceCache * _artworkCache;
    bool  _containsText;
    bool  _hasCustomFont;
    bool  _hasCustomIconSize;
    bool  _hasCustomShieldSize;
    long long  _iconSize;
    NSArray * _labelItems;
    MKMapItem * _mapItem;
    double  _maxWidth;
    long long  _shieldSize;
    double  _spaceBetweenIcons;
    double  _spaceBetweenShields;
    id /* block */  _textForTruncation;
}

@property (nonatomic, retain) MKArtworkDataSourceCache *artworkCache;
@property (nonatomic, readonly) bool containsText;
@property (nonatomic) long long iconSize;
@property (nonatomic, copy) NSArray *labelItems;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) double maxWidth;
@property (nonatomic) long long shieldSize;
@property (nonatomic) double spaceBetweenIcons;
@property (nonatomic) double spaceBetweenShields;
@property (nonatomic, copy) id /* block */ textForTruncation;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (id)_generateText;
- (long long)_iconSizeForContentSizeCategory:(id)arg1;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_imageForShieldDataSource:(id)arg1;
- (void)_setFont:(id)arg1 custom:(bool)arg2;
- (void)_setupLabelInfo;
- (long long)_shieldSizeForContentSizeCategory:(id)arg1;
- (id)_stringAttributes;
- (id)artworkCache;
- (bool)containsText;
- (void)dealloc;
- (long long)iconSize;
- (id)init;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;
- (id)labelItems;
- (id)mapItem;
- (double)maxWidth;
- (void)setArtworkCache:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setIconSize:(long long)arg1;
- (void)setLabelItems:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setShieldSize:(long long)arg1;
- (void)setSpaceBetweenIcons:(double)arg1;
- (void)setSpaceBetweenShields:(double)arg1;
- (void)setTextForTruncation:(id /* block */)arg1;
- (long long)shieldSize;
- (double)spaceBetweenIcons;
- (double)spaceBetweenShields;
- (id /* block */)textForTruncation;

@end

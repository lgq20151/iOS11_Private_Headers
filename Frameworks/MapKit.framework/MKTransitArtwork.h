/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource> {
    NSString * _accessibilityText;
    long long  _artworkSourceType;
    long long  _artworkUseType;
    bool  _hasRoutingIncidentBadge;
    <GEOTransitIconDataSource> * _iconDataSource;
    <GEOTransitShieldDataSource> * _iconFallbackShieldDataSource;
    <GEOTransitShieldDataSource> * _shieldDataSource;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) long long artworkSourceType;
@property (nonatomic, readonly) long long artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly) Class superclass;

+ (id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2;
+ (id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2;

- (void).cxx_destruct;
- (id)accessibilityText;
- (long long)artworkSourceType;
- (long long)artworkUseType;
- (bool)hasRoutingIncidentBadge;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (id)initWithIcon:(id)arg1 accessibilityText:(id)arg2;
- (id)initWithIcon:(id)arg1 fallbackShield:(id)arg2 accessibilityText:(id)arg3;
- (id)initWithShield:(id)arg1 accessibilityText:(id)arg2;
- (id)shieldDataSource;

@end
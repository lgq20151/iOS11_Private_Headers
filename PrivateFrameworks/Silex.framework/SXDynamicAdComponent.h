/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDynamicAdComponent : NSObject {
    bool  _allowMediumRectangle;
    SXComponentAnchor * _anchor;
    unsigned long long  _bannerType;
    NSString * _identifier;
    NSString * _layout;
}

@property (nonatomic, readonly) bool allowMediumRectangle;
@property (nonatomic, retain) SXComponentAnchor *anchor;
@property (nonatomic, readonly) unsigned long long bannerType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *layout;
@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (unsigned long long)adType;
- (bool)allowMediumRectangle;
- (id)anchor;
- (unsigned long long)bannerType;
- (id)identifier;
- (id)initWithBannerType:(unsigned long long)arg1 allowMediumRectangle:(bool)arg2 andLayoutIdentifier:(id)arg3;
- (id)layout;
- (int)role;
- (void)setAnchor:(id)arg1;
- (id)type;

@end

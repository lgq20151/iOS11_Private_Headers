/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICoreUICatalogColorWrapper : NSObject <NSCoding> {
    NSString * _bundleID;
    NSMutableDictionary * _colorCache;
    UIColor * _fallbackColor;
    bool  _hasLoggedFailure;
    NSString * _name;
    NSString * _nibLoadingBundleID;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) UIColor *fallbackColor;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)_uikit_valueForTraitCollection:(id)arg1;
- (bool)_uikit_variesByTraitCollections;
- (id)bundle;
- (id)bundleID;
- (id)cachedColorForDisplayGamut:(long long)arg1;
- (struct CGColor { }*)cgColorForTraitCollection:(id)arg1;
- (id)color;
- (id)colorCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackColor;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 fallbackColor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCoreUICatalogColor:(id)arg1;
- (id)name;
- (id)nibLoadingBundle;
- (void)setCachedColor:(id)arg1 forDisplayGamut:(long long)arg2;

@end

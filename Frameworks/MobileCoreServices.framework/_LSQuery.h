/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSQuery : NSObject <NSCopying, NSSecureCoding> {
    bool  _legacy;
}

@property (getter=isLegacy, nonatomic) bool legacy;

+ (bool)supportsSecureCoding;

- (bool)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_init;
- (bool)_requiresDatabaseMappingEntitlement;
- (bool)_shouldCacheResolvedResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLegacy;
- (void)setLegacy:(bool)arg1;

@end

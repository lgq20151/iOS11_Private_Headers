/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSExtensionPointQuery : _LSQuery {
    NSString * _identifier;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *version;

+ (id)extensionPointQueryForIdentifier:(id)arg1 withVersion:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_initWithIdentifier:(id)arg1 andVersion:(id)arg2;
- (bool)_shouldCacheResolvedResults;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)version;

@end

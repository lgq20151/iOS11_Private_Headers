/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _UTType : _LSQueryResult <NSCopying, NSSecureCoding>

@property (getter=_isActive, nonatomic, readonly) bool _active;
@property (getter=_isAppleInternal, nonatomic, readonly) bool _appleInternal;
@property (nonatomic, readonly) NSURL *_iconURL;
@property (nonatomic, readonly) NSString *_kernelExtensionName;
@property (nonatomic, readonly) NSDictionary *_localizedDescriptionDictionary;
@property (nonatomic, readonly) NSSet *_pedigree;
@property (getter=_isPublic, nonatomic, readonly) bool _public;
@property (nonatomic, readonly) NSString *_unlocalizedDescription;
@property (getter=_isWildcard, nonatomic, readonly) bool _wildcard;
@property (nonatomic, readonly) NSDictionary *declaration;
@property (getter=isDeclared, nonatomic, readonly) bool declared;
@property (nonatomic, readonly) NSURL *declaringBundleURL;
@property (getter=isDynamic, nonatomic, readonly) bool dynamic;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSArray *parentIdentifiers;
@property (nonatomic, readonly) NSURL *referenceURL;
@property (nonatomic, readonly) NSDictionary *tagSpecification;
@property (nonatomic, readonly) NSNumber *version;

+ (struct __CFArray { }*)_copyIdentifiersWithQuery:(id)arg1;
+ (bool)_isDeclaration:(id)arg1 equalToDeclaration:(id)arg2;
+ (id)_localizationDictionaryForTypeWithIdentifier:(id)arg1 unit:(unsigned int)arg2 preferredLocalizations:(id)arg3;

- (void)_enumerateParentTypesWithBlock:(id /* block */)arg1;
- (id)_iconURL;
- (bool)_isActive;
- (bool)_isAppleInternal;
- (bool)_isPublic;
- (bool)_isWildcard;
- (id)_kernelExtensionName;
- (id)_localizedDescriptionDictionary;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 checkingParents:(bool)arg2;
- (id)_pedigree;
- (id)_unlocalizedDescription;
- (bool)conformsToType:(id)arg1;
- (bool)conformsToTypeIdentifier:(id)arg1;
- (id)debugDescription;
- (id)declaration;
- (id)declaringBundleURL;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isDeclared;
- (bool)isDynamic;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)parentIdentifiers;
- (id)referenceURL;
- (id)tagSpecification;
- (id)version;

@end

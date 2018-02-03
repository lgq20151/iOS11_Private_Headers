/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _UTConcreteType : _UTType {
    NSString * _identifier;
    NSSet * _pedigree;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_iconURL;
- (bool)_isActive;
- (bool)_isAppleInternal;
- (bool)_isPublic;
- (id)_kernelExtensionName;
- (id)_localizedDescriptionDictionary;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 checkingParents:(bool)arg2;
- (id)_pedigree;
- (id)_unlocalizedDescription;
- (bool)conformsToType:(id)arg1;
- (bool)conformsToTypeIdentifier:(id)arg1;
- (id)declaration;
- (id)declaringBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 pedigree:(id)arg2;
- (bool)isDeclared;
- (bool)isDynamic;
- (id)parentIdentifiers;
- (id)referenceURL;
- (id)tagSpecification;
- (id)version;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPFileProviderService : NSObject <NSSecureCoding> {
    NSString * _domainIdentifier;
    NSString * _itemIdentifier;
    NSString * _name;
    NSString * _providerIdentifier;
}

@property (copy) NSString *domainIdentifier;
@property (copy) NSString *itemIdentifier;
@property (readonly, copy) NSString *name;
@property (copy) NSString *providerIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 itemIdentifier:(id)arg2 providerIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (id)itemIdentifier;
- (id)name;
- (id)providerIdentifier;
- (void)setDomainIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;

@end

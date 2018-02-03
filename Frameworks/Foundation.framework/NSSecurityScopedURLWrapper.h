/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding> {
    bool  _backedByFileProvider;
    NSString * _domainIdentifier;
    NSString * _itemIdentifier;
    NSString * _providerIdentifier;
    bool  _readonly;
    NSData * _scope;
    NSURL * _url;
}

@property (nonatomic, readonly) NSData *_scope;
@property (getter=isBackedByFileProvider, nonatomic, readonly) bool backedByFileProvider;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (getter=isReadonly, nonatomic, readonly) bool readonly;
@property (nonatomic, readonly, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (id)_scope;
- (void)dealloc;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2 extensionClass:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2 scope:(id)arg3;
- (bool)isBackedByFileProvider;
- (bool)isReadonly;
- (id)itemIdentifier;
- (id)providerIdentifier;
- (id)url;

@end
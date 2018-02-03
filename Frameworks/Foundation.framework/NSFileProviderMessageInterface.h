/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileProviderMessageInterface : NSObject <NSSecureCoding> {
    NSString * _itemIdentifier;
    NSString * _name;
    NSString * _providerIdentifier;
}

@property (copy) NSString *itemIdentifier;
@property (readonly, copy) NSString *name;
@property (copy) NSString *providerIdentifier;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 itemIdentifier:(id)arg2 providerIdentifier:(id)arg3;
- (id)itemIdentifier;
- (id)name;
- (id)providerIdentifier;
- (void)setItemIdentifier:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;

@end

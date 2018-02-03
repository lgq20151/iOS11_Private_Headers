/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _UTTypeQueryWithTags : _UTTypeQuery {
    NSString * _conformsTo;
    long long  _limit;
    NSString * _tag;
    NSString * _tagClass;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4;
- (bool)isEqual:(id)arg1;

@end

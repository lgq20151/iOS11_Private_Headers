/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSApplicationProxyForUserActivityQuery : _LSBundleQuery {
    NSString * _activityType;
    NSString * _domainName;
}

@property (nonatomic, readonly, copy) NSString *activityType;
@property (nonatomic, readonly, copy) NSString *domainName;

+ (id)queryWithActivityType:(id)arg1;
+ (id)queryWithDomainName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (id)activityType;
- (void)dealloc;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVRepairApplicationRequest : SSRequest <SSXPCCoding> {
    NSNumber * _accountDSID;
    NSString * _bundleID;
    long long  _claimStyle;
}

@property (nonatomic, readonly) NSNumber *accountDSID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) long long claimStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountDSID;
- (id)bundleID;
- (long long)claimStyle;
- (id)copyXPCEncoding;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
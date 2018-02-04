/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation {
    VSStoreURLBag * _bag;
    VSOptional * _result;
    NSArray * _unlimitedIdentityProviders;
}

@property (nonatomic, retain) VSStoreURLBag *bag;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, copy) NSArray *unlimitedIdentityProviders;

- (void).cxx_destruct;
- (id)bag;
- (void)executionDidBegin;
- (id)init;
- (id)result;
- (void)setBag:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setUnlimitedIdentityProviders:(id)arg1;
- (id)unlimitedIdentityProviders;

@end
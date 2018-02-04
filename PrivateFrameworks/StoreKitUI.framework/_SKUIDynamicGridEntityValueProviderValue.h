/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface _SKUIDynamicGridEntityValueProviderValue : NSObject {
    <IKEntityValueProviding> * _entityValueProvider;
    long long  _sectionIndex;
}

@property (nonatomic, retain) <IKEntityValueProviding> *entityValueProvider;
@property (nonatomic) long long sectionIndex;

- (void).cxx_destruct;
- (id)entityValueProvider;
- (long long)sectionIndex;
- (void)setEntityValueProvider:(id)arg1;
- (void)setSectionIndex:(long long)arg1;

@end
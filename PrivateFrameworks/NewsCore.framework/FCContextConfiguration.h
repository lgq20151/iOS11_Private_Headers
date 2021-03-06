/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCContextConfiguration : NSObject <NSCopying> {
    NSString * _contentContainerCombinationIdentifier;
    NSString * _contentContainerIdentifier;
    bool  _isProductionEnvironment;
    NSString * _privateDataContainerCombinationIdentifier;
    NSString * _privateDataContainerIdentifier;
    NSString * _privateDataSecureContainerIdentifier;
}

@property (nonatomic, readonly, copy) NSString *contentContainerCombinationIdentifier;
@property (nonatomic, readonly, copy) NSString *contentContainerIdentifier;
@property (nonatomic, readonly) bool isProductionEnvironment;
@property (nonatomic, readonly, copy) NSString *privateDataContainerCombinationIdentifier;
@property (nonatomic, readonly, copy) NSString *privateDataContainerIdentifier;
@property (nonatomic, readonly, copy) NSString *privateDataSecureContainerIdentifier;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)contentContainerCombinationIdentifier;
- (id)contentContainerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithProductionEnvironment:(bool)arg1 contentContainerIdentifier:(id)arg2 privateDataContainerIdentifier:(id)arg3 privateDataSecureContainerIdentifier:(id)arg4 storeFrontID:(id)arg5;
- (bool)isProductionEnvironment;
- (id)privateDataContainerCombinationIdentifier;
- (id)privateDataContainerIdentifier;
- (id)privateDataSecureContainerIdentifier;

@end

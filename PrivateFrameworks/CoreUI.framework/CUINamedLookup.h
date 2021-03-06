/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedLookup : NSObject {
    unsigned int  _distilledInVersion;
    CUIRenditionKey * _key;
    NSString * _name;
    unsigned int  _odContent;
    NSString * _signature;
    unsigned long long  _storageRef;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool representsOnDemandContent;

- (bool)_cacheRenditionProperties;
- (unsigned int)_distilledInVersion;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTintable;
- (id)name;
- (id)renditionKey;
- (id)renditionName;
- (bool)representsOnDemandContent;
- (void)setName:(id)arg1;
- (void)setRepresentsOnDemandContent:(bool)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRAssetCatalogSet : NSObject {
    NSMutableArray * _configs;
    bool  _cubemap;
    unsigned long long  _interpretation;
    NSString * _name;
    unsigned long long  _origin;
}

@property (readonly) NSArray *configs;
@property (nonatomic, readonly) bool cubemap;
@property (nonatomic) unsigned long long interpretation;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long origin;

- (void).cxx_destruct;
- (bool)addConfig:(id)arg1 error:(id*)arg2;
- (id)configs;
- (bool)cubemap;
- (id)exportAtLocation:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithName:(id)arg1;
- (unsigned long long)interpretation;
- (id)name;
- (unsigned long long)origin;
- (void)setInterpretation:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setOrigin:(unsigned long long)arg1;

@end

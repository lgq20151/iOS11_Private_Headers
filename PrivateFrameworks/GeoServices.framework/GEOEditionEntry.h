/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEditionEntry : NSObject {
    unsigned int  _edition;
    bool  _invalidateOnly;
    unsigned int  _provider;
    unsigned int  _tileset;
}

@property unsigned int edition;
@property bool invalidateOnly;
@property unsigned int provider;
@property unsigned int tileset;

- (unsigned int)edition;
- (bool)invalidateOnly;
- (unsigned int)provider;
- (void)setEdition:(unsigned int)arg1;
- (void)setInvalidateOnly:(bool)arg1;
- (void)setProvider:(unsigned int)arg1;
- (void)setTileset:(unsigned int)arg1;
- (unsigned int)tileset;

@end

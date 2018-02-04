/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying> {
    NSData * _data;
    struct { 
        unsigned int w : 1; 
        unsigned int x : 1; 
        unsigned int y : 1; 
        unsigned int z : 1; 
    }  _has;
    float  _w;
    float  _x;
    float  _y;
    float  _z;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic) bool hasW;
@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) bool hasZ;
@property (nonatomic) float w;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasData;
- (bool)hasW;
- (bool)hasX;
- (bool)hasY;
- (bool)hasZ;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setHasW:(bool)arg1;
- (void)setHasX:(bool)arg1;
- (void)setHasY:(bool)arg1;
- (void)setHasZ:(bool)arg1;
- (void)setW:(float)arg1;
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (void)setZ:(float)arg1;
- (float)w;
- (void)writeTo:(id)arg1;
- (float)x;
- (float)y;
- (float)z;

@end
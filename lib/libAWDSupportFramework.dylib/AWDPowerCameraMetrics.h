/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerCameraMetrics : PBCodable <NSCopying> {
    unsigned int  _cameraBackOnDuration;
    unsigned int  _cameraFrontOnDuration;
    unsigned int  _cameraTorchOnDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int cameraBackOnDuration : 1; 
        unsigned int cameraFrontOnDuration : 1; 
        unsigned int cameraTorchOnDuration : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int cameraBackOnDuration;
@property (nonatomic) unsigned int cameraFrontOnDuration;
@property (nonatomic) unsigned int cameraTorchOnDuration;
@property (nonatomic) bool hasCameraBackOnDuration;
@property (nonatomic) bool hasCameraFrontOnDuration;
@property (nonatomic) bool hasCameraTorchOnDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)cameraBackOnDuration;
- (unsigned int)cameraFrontOnDuration;
- (unsigned int)cameraTorchOnDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCameraBackOnDuration;
- (bool)hasCameraFrontOnDuration;
- (bool)hasCameraTorchOnDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCameraBackOnDuration:(unsigned int)arg1;
- (void)setCameraFrontOnDuration:(unsigned int)arg1;
- (void)setCameraTorchOnDuration:(unsigned int)arg1;
- (void)setHasCameraBackOnDuration:(bool)arg1;
- (void)setHasCameraFrontOnDuration:(bool)arg1;
- (void)setHasCameraTorchOnDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

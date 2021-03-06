/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterHIDDeviceMessageProtobuf : PBCodable <NSCopying> {
    _MRVirtualTouchDeviceDescriptorProtobuf * _deviceDescriptor;
}

@property (nonatomic, retain) _MRVirtualTouchDeviceDescriptorProtobuf *deviceDescriptor;
@property (nonatomic, readonly) bool hasDeviceDescriptor;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceDescriptor;
- (id)dictionaryRepresentation;
- (bool)hasDeviceDescriptor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceDescriptor:(id)arg1;
- (void)writeTo:(id)arg1;

@end

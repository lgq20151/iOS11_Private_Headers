/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelLength : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int length : 1; 
    }  _has;
    unsigned int  _length;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLength;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)length;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLength:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

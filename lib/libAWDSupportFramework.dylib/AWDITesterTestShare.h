/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDITesterTestShare : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _shareMethod;
    NSString * _shareOption;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasShareMethod;
@property (nonatomic, readonly) bool hasShareOption;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *shareMethod;
@property (nonatomic, retain) NSString *shareOption;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShareMethod;
- (bool)hasShareOption;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setShareMethod:(id)arg1;
- (void)setShareOption:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)shareMethod;
- (id)shareOption;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

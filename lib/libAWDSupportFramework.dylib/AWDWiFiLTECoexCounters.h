/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiLTECoexCounters : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    AWDWiFiLTECoexBin * _heavyLTECoexBin;
    AWDWiFiLTECoexBin * _lightLTECoexBin;
    AWDWiFiLTECoexBin * _noLTECoexBin;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasHeavyLTECoexBin;
@property (nonatomic, readonly) bool hasLightLTECoexBin;
@property (nonatomic, readonly) bool hasNoLTECoexBin;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDWiFiLTECoexBin *heavyLTECoexBin;
@property (nonatomic, retain) AWDWiFiLTECoexBin *lightLTECoexBin;
@property (nonatomic, retain) AWDWiFiLTECoexBin *noLTECoexBin;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeavyLTECoexBin;
- (bool)hasLightLTECoexBin;
- (bool)hasNoLTECoexBin;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)heavyLTECoexBin;
- (bool)isEqual:(id)arg1;
- (id)lightLTECoexBin;
- (void)mergeFrom:(id)arg1;
- (id)noLTECoexBin;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHeavyLTECoexBin:(id)arg1;
- (void)setLightLTECoexBin:(id)arg1;
- (void)setNoLTECoexBin:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

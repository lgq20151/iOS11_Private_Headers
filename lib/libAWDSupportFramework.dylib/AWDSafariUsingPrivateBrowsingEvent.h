/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariUsingPrivateBrowsingEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int inPrivateBrowsing : 1; 
    }  _has;
    bool  _inPrivateBrowsing;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasInPrivateBrowsing;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool inPrivateBrowsing;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInPrivateBrowsing;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)inPrivateBrowsing;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasInPrivateBrowsing:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInPrivateBrowsing:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

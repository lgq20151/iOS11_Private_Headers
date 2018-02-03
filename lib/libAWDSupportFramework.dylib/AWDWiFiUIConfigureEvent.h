/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiUIConfigureEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int previousType : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _previousType;
    NSString * _process;
    unsigned long long  _timestamp;
    unsigned int  _type;
}

@property (nonatomic) bool hasPreviousType;
@property (nonatomic, readonly) bool hasProcess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int previousType;
@property (nonatomic, retain) NSString *process;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPreviousType;
- (bool)hasProcess;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)previousType;
- (id)process;
- (bool)readFrom:(id)arg1;
- (void)setHasPreviousType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPreviousType:(unsigned int)arg1;
- (void)setProcess:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end

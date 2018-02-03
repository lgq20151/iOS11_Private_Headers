/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiUIEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
    }  _has;
    NSString * _process;
    bool  _state;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasProcess;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *process;
@property (nonatomic) bool state;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProcess;
- (bool)hasState;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)process;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProcess:(id)arg1;
- (void)setState:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)state;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

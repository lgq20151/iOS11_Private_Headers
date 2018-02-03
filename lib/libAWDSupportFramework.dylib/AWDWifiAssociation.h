/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiAssociation : PBCodable <NSCopying> {
    NSData * _bssidOui;
    int  _channel;
    int  _deauthReason;
    NSData * _deauthSourceOui;
    unsigned int  _error;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int channel : 1; 
        unsigned int deauthReason : 1; 
        unsigned int error : 1; 
        unsigned int signal : 1; 
    }  _has;
    NSString * _security;
    int  _signal;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSData *bssidOui;
@property (nonatomic) int channel;
@property (nonatomic) int deauthReason;
@property (nonatomic, retain) NSData *deauthSourceOui;
@property (nonatomic) unsigned int error;
@property (nonatomic, readonly) bool hasBssidOui;
@property (nonatomic) bool hasChannel;
@property (nonatomic) bool hasDeauthReason;
@property (nonatomic, readonly) bool hasDeauthSourceOui;
@property (nonatomic) bool hasError;
@property (nonatomic, readonly) bool hasSecurity;
@property (nonatomic) bool hasSignal;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *security;
@property (nonatomic) int signal;
@property (nonatomic) unsigned long long timestamp;

- (id)bssidOui;
- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deauthReason;
- (id)deauthSourceOui;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)error;
- (bool)hasBssidOui;
- (bool)hasChannel;
- (bool)hasDeauthReason;
- (bool)hasDeauthSourceOui;
- (bool)hasError;
- (bool)hasSecurity;
- (bool)hasSignal;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)security;
- (void)setBssidOui:(id)arg1;
- (void)setChannel:(int)arg1;
- (void)setDeauthReason:(int)arg1;
- (void)setDeauthSourceOui:(id)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasDeauthReason:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasSignal:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSecurity:(id)arg1;
- (void)setSignal:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)signal;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

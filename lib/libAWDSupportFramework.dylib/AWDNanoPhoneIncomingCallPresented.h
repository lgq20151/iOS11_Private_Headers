/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNanoPhoneIncomingCallPresented : PBCodable <NSCopying> {
    NSString * _callProviderIdentifier;
    unsigned long long  _clientDisplayLatencyMs;
    struct { 
        unsigned int clientDisplayLatencyMs : 1; 
        unsigned int timestamp : 1; 
        unsigned int isHosted : 1; 
        unsigned int isVideo : 1; 
    }  _has;
    bool  _isHosted;
    bool  _isVideo;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *callProviderIdentifier;
@property (nonatomic) unsigned long long clientDisplayLatencyMs;
@property (nonatomic, readonly) bool hasCallProviderIdentifier;
@property (nonatomic) bool hasClientDisplayLatencyMs;
@property (nonatomic) bool hasIsHosted;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isHosted;
@property (nonatomic) bool isVideo;
@property (nonatomic) unsigned long long timestamp;

- (id)callProviderIdentifier;
- (unsigned long long)clientDisplayLatencyMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallProviderIdentifier;
- (bool)hasClientDisplayLatencyMs;
- (bool)hasIsHosted;
- (bool)hasIsVideo;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isHosted;
- (bool)isVideo;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallProviderIdentifier:(id)arg1;
- (void)setClientDisplayLatencyMs:(unsigned long long)arg1;
- (void)setHasClientDisplayLatencyMs:(bool)arg1;
- (void)setHasIsHosted:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsHosted:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

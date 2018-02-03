/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSGenericConnectionSetupDurationEvent : PBCodable <NSCopying> {
    unsigned long long  _connectionSetupDuration;
    unsigned int  _connectionType;
    unsigned int  _errorCode;
    struct { 
        unsigned int connectionSetupDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int errorCode : 1; 
        unsigned int linkType : 1; 
        unsigned int success : 1; 
    }  _has;
    unsigned int  _linkType;
    bool  _success;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long connectionSetupDuration;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasConnectionSetupDuration;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasLinkType;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) bool success;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)connectionSetupDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)hasConnectionSetupDuration;
- (bool)hasConnectionType;
- (bool)hasErrorCode;
- (bool)hasLinkType;
- (bool)hasSuccess;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)linkType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionSetupDuration:(unsigned long long)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasConnectionSetupDuration:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasLinkType:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkType:(unsigned int)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)success;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

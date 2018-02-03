/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSRegistrationProfileOperation : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    int  _genericError;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int genericError : 1; 
        unsigned int pOSIXError : 1; 
        unsigned int registrationError : 1; 
        unsigned int resultCode : 1; 
        unsigned int success : 1; 
        unsigned int uRLError : 1; 
    }  _has;
    int  _pOSIXError;
    unsigned int  _registrationError;
    unsigned int  _resultCode;
    unsigned int  _success;
    unsigned long long  _timestamp;
    int  _uRLError;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) int genericError;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasGenericError;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasPOSIXError;
@property (nonatomic) bool hasRegistrationError;
@property (nonatomic) bool hasResultCode;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasURLError;
@property (nonatomic) int pOSIXError;
@property (nonatomic) unsigned int registrationError;
@property (nonatomic) unsigned int resultCode;
@property (nonatomic) unsigned int success;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int uRLError;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)genericError;
- (id)guid;
- (bool)hasConnectionType;
- (bool)hasGenericError;
- (bool)hasGuid;
- (bool)hasPOSIXError;
- (bool)hasRegistrationError;
- (bool)hasResultCode;
- (bool)hasSuccess;
- (bool)hasTimestamp;
- (bool)hasURLError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pOSIXError;
- (bool)readFrom:(id)arg1;
- (unsigned int)registrationError;
- (unsigned int)resultCode;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasGenericError:(bool)arg1;
- (void)setHasPOSIXError:(bool)arg1;
- (void)setHasRegistrationError:(bool)arg1;
- (void)setHasResultCode:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasURLError:(bool)arg1;
- (void)setPOSIXError:(int)arg1;
- (void)setRegistrationError:(unsigned int)arg1;
- (void)setResultCode:(unsigned int)arg1;
- (void)setSuccess:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setURLError:(int)arg1;
- (unsigned int)success;
- (unsigned long long)timestamp;
- (int)uRLError;
- (void)writeTo:(id)arg1;

@end

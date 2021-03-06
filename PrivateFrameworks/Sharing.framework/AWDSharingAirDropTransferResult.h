/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingAirDropTransferResult : PBCodable <NSCopying> {
    NSString * _bundleID;
    unsigned long long  _bytesPerSec;
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int bytesPerSec : 1; 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int sender : 1; 
        unsigned int success : 1; 
    }  _has;
    NSString * _model;
    bool  _sender;
    bool  _success;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned long long bytesPerSec;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasBytesPerSec;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic) bool hasSender;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *model;
@property (nonatomic) bool sender;
@property (nonatomic) bool success;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned long long)bytesPerSec;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasBundleID;
- (bool)hasBytesPerSec;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasModel;
- (bool)hasSender;
- (bool)hasSuccess;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (bool)readFrom:(id)arg1;
- (bool)sender;
- (void)setBundleID:(id)arg1;
- (void)setBytesPerSec:(unsigned long long)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasBytesPerSec:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasSender:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setSender:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)success;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
